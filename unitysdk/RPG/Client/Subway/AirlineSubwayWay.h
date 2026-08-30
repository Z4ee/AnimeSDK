#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_DoorSide.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Subway { class AirlineSubwayWay_MemberConfig; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xE10A290)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_GET_STOPDISTANCE_OFFSET UNITYSDK_OFFSET(0xE10A270)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_SAMPLESTOPPINGDURATION_OFFSET UNITYSDK_OFFSET(0xE10A340)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_SET_STOPDISTANCE_OFFSET UNITYSDK_OFFSET(0xE10A280)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_TRYGETSTOPROTATION_OFFSET UNITYSDK_OFFSET(0xE10A410)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY__CTOR_OFFSET UNITYSDK_OFFSET(0xE10A5D0)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirlineSubwayWay_TypeDefinitionIndex = 80813;

	class AirlineSubwayWay : public ::RPG::Client::Airline
	{
	public:
		::System::Single stoppingDuration; // 0x30
		::System::Boolean randomizeStoppingDuration; // 0x34
		::UnityEngine::Vector2 stoppingDurationRange; // 0x38
		::System::Int32 stopIndex; // 0x40
		::System::Boolean useStopRotation; // 0x44
		::UnityEngine::Vector3 stopRotation; // 0x48
		::System::Single stopRotationBlendDistance; // 0x54
		::UnityEngine::AnimationCurve* enterCurve; // 0x58
		::System::Single enterDuration; // 0x60
		::UnityEngine::AnimationCurve* exitCurve; // 0x68
		::System::Single exitDuration; // 0x70
		::System::Single arrivedDuration; // 0x74
		::System::Single pedestrianMotionDuration; // 0x78
		::System::String* subwayStationName; // 0x80
		::System::String* subwayDoorSignName; // 0x88
		::RPG::Client::Subway::AirlineSubwayWay_DoorSide OpenDoorSide; // 0x90
		::System::String* arrivalAudioEvent; // 0x98
		::System::String* exitAudioEvent; // 0xA0
		::Il2CppArray<::RPG::Client::Subway::AirlineSubwayWay_MemberConfig*>* memberConfigs; // 0xA8
		::System::String* FCVName_Waitting; // 0xB0
		::System::Single _StopDistance_k__BackingField; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY__CTOR_OFFSET))(this);
		}

		::System::Single get_StopDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_GET_STOPDISTANCE_OFFSET))(this);
		}

		::System::Void set_StopDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_SET_STOPDISTANCE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_AWAKE_OFFSET))(this);
		}

		::System::Single SampleStoppingDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_SAMPLESTOPPINGDURATION_OFFSET))(this);
		}

		::System::Boolean TryGetStopRotation(::System::Single a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_TRYGETSTOPROTATION_OFFSET))(this, a1, a2, a3);
		}
	};
}
