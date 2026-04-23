#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7D7F702D8900BCB8;
namespace System { class String; }

#define RPG_CLIENT_AIRSHIPCARAUDIO_GET_DISTANCETOPLAYER_OFFSET UNITYSDK_OFFSET(0x9CF1B20)
#define RPG_CLIENT_AIRSHIPCARAUDIO_GET_DISTANCETOTANGENT_OFFSET UNITYSDK_OFFSET(0x9CF1B60)
#define RPG_CLIENT_AIRSHIPCARAUDIO_GET_ENABLELISTENER_OFFSET UNITYSDK_OFFSET(0x9CF1B80)
#define RPG_CLIENT_AIRSHIPCARAUDIO_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x9CF1B40)
#define RPG_CLIENT_AIRSHIPCARAUDIO_INIT_OFFSET UNITYSDK_OFFSET(0x9CF1BF0)
#define RPG_CLIENT_AIRSHIPCARAUDIO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9CF1E60)
#define RPG_CLIENT_AIRSHIPCARAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9CF1B90)
#define RPG_CLIENT_AIRSHIPCARAUDIO_SET_DISTANCETOPLAYER_OFFSET UNITYSDK_OFFSET(0x9CF1B30)
#define RPG_CLIENT_AIRSHIPCARAUDIO_SET_DISTANCETOTANGENT_OFFSET UNITYSDK_OFFSET(0x9CF1B70)
#define RPG_CLIENT_AIRSHIPCARAUDIO_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x9CF1B50)
#define RPG_CLIENT_AIRSHIPCARAUDIO_TICK_OFFSET UNITYSDK_OFFSET(0x9CF2070)
#define RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERAVOID_OFFSET UNITYSDK_OFFSET(0x9CF23E0)
#define RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9CF2600)
#define RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERSTARTUP_OFFSET UNITYSDK_OFFSET(0x9CF24F0)
#define RPG_CLIENT_AIRSHIPCARAUDIO_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CF1F60)
#define RPG_CLIENT_AIRSHIPCARAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x9CF2710)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarAudio_TypeDefinitionIndex = 55175;

	class AirshipCarAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single startListenDistance; // 0x18
		::System::Single stopListenDistance; // 0x1C
		::System::Single maxListenTangentDistance; // 0x20
		::System::String* typeGroupName; // 0x28
		::System::String* typeSwitchName; // 0x30
		::System::String* drivingLoopEvent; // 0x38
		::System::String* drivingAvoidEvent; // 0x40
		::System::String* drivingStartEvent; // 0x48
		::System::String* drivingStopEvent; // 0x50
		::System::String* drivingHide; // 0x58
		::System::String* drivingShow; // 0x60
		::System::String* drivingSpeedRTPC; // 0x68
		::System::String* drivingTangentDistanceRTPC; // 0x70
		::System::Single _DistanceToPlayer_k__BackingField; // 0x78
		::System::Single _Speed_k__BackingField; // 0x7C
		::System::Single _DistanceToTangent_k__BackingField; // 0x80
		::System::Boolean Field_5_16; // 0x84
		::Class_1_7D7F702D8900BCB8* Field_5_17; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO__CTOR_OFFSET))(this);
		}

		::System::Single get_DistanceToPlayer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_GET_DISTANCETOPLAYER_OFFSET))(this);
		}

		::System::Void set_DistanceToPlayer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_SET_DISTANCETOPLAYER_OFFSET))(this, value);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_DistanceToTangent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_GET_DISTANCETOTANGENT_OFFSET))(this);
		}

		::System::Void set_DistanceToTangent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_SET_DISTANCETOTANGENT_OFFSET))(this, value);
		}

		::System::Boolean get_EnableListener()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_GET_ENABLELISTENER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_ONDISABLE_OFFSET))(this);
		}

		::System::Void Init(::Class_1_7D7F702D8900BCB8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_INIT_OFFSET))(this, a1);
		}

		::System::Void Uninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_UNINIT_OFFSET))(this);
		}

		::System::Void Tick(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_TICK_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerAvoid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERAVOID_OFFSET))(this);
		}

		::System::Void TriggerStartup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERSTARTUP_OFFSET))(this);
		}

		::System::Void TriggerShutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERSHUTDOWN_OFFSET))(this);
		}
	};
}
