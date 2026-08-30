#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCC22A70)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCC227B0)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTBLOCKEVENT_OFFSET UNITYSDK_OFFSET(0xCC23020)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTDETECTEVENT_OFFSET UNITYSDK_OFFSET(0xCC23120)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTIDLEEVENT_OFFSET UNITYSDK_OFFSET(0xCC23320)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTIDLESTOPEVENT_OFFSET UNITYSDK_OFFSET(0xCC23420)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTROADRAGEEVENT_OFFSET UNITYSDK_OFFSET(0xCC23520)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTSTARTEVENT_OFFSET UNITYSDK_OFFSET(0xCC23220)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0xCC22B70)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_STARTUP_OFFSET UNITYSDK_OFFSET(0xCC22810)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_UPDATEEVENT_OFFSET UNITYSDK_OFFSET(0xCC22C80)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0xCC23620)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarAudio_TypeDefinitionIndex = 80840;

	class MonoCityCarAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single startListenDistance; // 0x18
		::System::Single stopListenDistance; // 0x1C
		::System::Single maxListenTangentDistance; // 0x20
		::System::String* typeGroupName; // 0x28
		::System::String* typeSwitchName; // 0x30
		::System::String* drivingLoopEvent; // 0x38
		::System::String* drivingHornEvent; // 0x40
		::System::String* drivingStopEvent; // 0x48
		::System::String* drivingHide; // 0x50
		::System::String* drivingShow; // 0x58
		::System::String* drivingSpeedRTPC; // 0x60
		::System::String* drivingTangentDistanceRTPC; // 0x68
		::System::String* drivingSkidEvent; // 0x70
		::System::String* drivingStartEvent; // 0x78
		::System::String* drivingIdleEvent; // 0x80
		::System::String* drivingIdleStopEvent; // 0x88
		::System::String* drivingRageEvent; // 0x90
		::System::Boolean INPBFPJGHGC; // 0x98
		::System::Single LMCBEIHGLDF; // 0x9C
		::System::Single PBNPILAJKIE; // 0xA0
		::System::Single GLAMBNMCHCC; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_ONDISABLE_OFFSET))(this);
		}

		::System::Void Startup(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_STARTUP_OFFSET))(this, a1);
		}

		::System::Void Shutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_SHUTDOWN_OFFSET))(this);
		}

		::System::Void UpdateEvent(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_UPDATEEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void PostBlockEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTBLOCKEVENT_OFFSET))(this);
		}

		::System::Void PostDetectEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTDETECTEVENT_OFFSET))(this);
		}

		::System::Void PostStartEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTSTARTEVENT_OFFSET))(this);
		}

		::System::Void PostIdleEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTIDLEEVENT_OFFSET))(this);
		}

		::System::Void PostIdleStopEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTIDLESTOPEVENT_OFFSET))(this);
		}

		::System::Void PostRoadRageEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARAUDIO_POSTROADRAGEEVENT_OFFSET))(this);
		}
	};
}
