#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_AIRSHIPAUDIO_AWAKE_OFFSET UNITYSDK_OFFSET(0x17EBE830)
#define RPG_CLIENT_AIRSHIPAUDIO_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17EBE620)
#define RPG_CLIENT_AIRSHIPAUDIO_METHOD_5_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x17EBE8E0)
#define RPG_CLIENT_AIRSHIPAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17EBE7A0)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOOREDSPEED_OFFSET UNITYSDK_OFFSET(0x17EB9110)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOVINGEVENT_OFFSET UNITYSDK_OFFSET(0x17EBE6C0)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOVINGSPEED_OFFSET UNITYSDK_OFFSET(0x17EBE710)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x17EB90A0)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONDOWNSTOPEVENT_OFFSET UNITYSDK_OFFSET(0x17EB91B0)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONUPEVENT_OFFSET UNITYSDK_OFFSET(0x17EB9210)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONUPSTOPEVENT_OFFSET UNITYSDK_OFFSET(0x17EB9280)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x17EB8F90)
#define RPG_CLIENT_AIRSHIPAUDIO_UPDATEENABLED_OFFSET UNITYSDK_OFFSET(0x17EBE550)
#define RPG_CLIENT_AIRSHIPAUDIO_UPDATE_OFFSET UNITYSDK_OFFSET(0x17EBE880)
#define RPG_CLIENT_AIRSHIPAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x17EBEA10)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipAudio_TypeDefinitionIndex = 57129;

	class AirshipAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single enableEventDistance; // 0x18
		::System::Single disableEventDistance; // 0x1C
		::System::String* stopAll; // 0x20
		::System::String* moving; // 0x28
		::System::String* moorUpStart; // 0x30
		::System::String* moorUpRunning; // 0x38
		::System::String* moorUpStop; // 0x40
		::System::String* moorDownStart; // 0x48
		::System::String* moorDownRunning; // 0x50
		::System::String* moorDownStop; // 0x58
		::System::String* moorRunningHorizontal; // 0x60
		::System::String* engineFloating; // 0x68
		::System::String* engineTransition; // 0x70
		::System::String* engineWorking; // 0x78
		::System::String* engineTransitionStop; // 0x80
		::System::String* engineWorkingStop; // 0x88
		::System::String* RTPC_movingSpeed; // 0x90
		::System::String* RTPC_mooredSpeed; // 0x98
		::System::String* RTPC_mooredSpeedHorizontal; // 0xA0
		::System::Boolean EnableCheckOcculasion; // 0xA8
		::System::Boolean Field_5_20; // 0xA9
		::System::Boolean Field_5_21; // 0xAA
		::System::Boolean Field_5_22; // 0xAB
		::System::Single Field_5_23; // 0xAC
		::System::Single Field_5_24; // 0xB0
		::System::Single Field_5_25; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO__CTOR_OFFSET))(this);
		}

		::System::Boolean UpdateEnabled(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_UPDATEENABLED_OFFSET))(this, a1);
		}

		::System::Void PostAirshipMovingEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOVINGEVENT_OFFSET))(this);
		}

		::System::Void PostAirshipTransitionUpEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONUPEVENT_OFFSET))(this, a1);
		}

		::System::Void PostAirshipTransitionUpStopEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONUPSTOPEVENT_OFFSET))(this);
		}

		::System::Void PostAirshipTransitionDownEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void PostAirshipTransitionDownStopEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONDOWNSTOPEVENT_OFFSET))(this);
		}

		::System::Void PostAirshipMovingSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOVINGSPEED_OFFSET))(this, a1);
		}

		::System::Void PostAirshipMooredSpeed(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOOREDSPEED_OFFSET))(this, a1, a2);
		}

		::System::Void PostEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTEVENT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_METHOD_5_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}
	};
}
