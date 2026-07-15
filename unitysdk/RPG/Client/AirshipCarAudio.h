#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7D7F702D8900BCB8;
namespace System { class String; }

#define RPG_CLIENT_AIRSHIPCARAUDIO_GET_DISTANCETOPLAYER_OFFSET UNITYSDK_OFFSET(0x17EC2BF0)
#define RPG_CLIENT_AIRSHIPCARAUDIO_GET_DISTANCETOTANGENT_OFFSET UNITYSDK_OFFSET(0x17EC2C30)
#define RPG_CLIENT_AIRSHIPCARAUDIO_GET_ENABLELISTENER_OFFSET UNITYSDK_OFFSET(0x17EC2C50)
#define RPG_CLIENT_AIRSHIPCARAUDIO_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x17EC2C10)
#define RPG_CLIENT_AIRSHIPCARAUDIO_INIT_OFFSET UNITYSDK_OFFSET(0x17EC2CC0)
#define RPG_CLIENT_AIRSHIPCARAUDIO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17EC2F30)
#define RPG_CLIENT_AIRSHIPCARAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17EC2C60)
#define RPG_CLIENT_AIRSHIPCARAUDIO_SET_DISTANCETOPLAYER_OFFSET UNITYSDK_OFFSET(0x17EC2C00)
#define RPG_CLIENT_AIRSHIPCARAUDIO_SET_DISTANCETOTANGENT_OFFSET UNITYSDK_OFFSET(0x17EC2C40)
#define RPG_CLIENT_AIRSHIPCARAUDIO_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x17EC2C20)
#define RPG_CLIENT_AIRSHIPCARAUDIO_TICK_OFFSET UNITYSDK_OFFSET(0x17EC3140)
#define RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERAVOID_OFFSET UNITYSDK_OFFSET(0x17EC34B0)
#define RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x17EC36D0)
#define RPG_CLIENT_AIRSHIPCARAUDIO_TRIGGERSTARTUP_OFFSET UNITYSDK_OFFSET(0x17EC35C0)
#define RPG_CLIENT_AIRSHIPCARAUDIO_UNINIT_OFFSET UNITYSDK_OFFSET(0x17EC3030)
#define RPG_CLIENT_AIRSHIPCARAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC37E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarAudio_TypeDefinitionIndex = 57148;

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

		::System::Void set_DistanceToPlayer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_SET_DISTANCETOPLAYER_OFFSET))(this, a1);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_DistanceToTangent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_GET_DISTANCETOTANGENT_OFFSET))(this);
		}

		::System::Void set_DistanceToTangent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARAUDIO_SET_DISTANCETOTANGENT_OFFSET))(this, a1);
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
