#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_AIRSHIPBIRDAUDIO_METHOD_5_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0xB2DFB80)
#define RPG_CLIENT_AIRSHIPBIRDAUDIO_TRIGGERLOADCARGOEVENT_OFFSET UNITYSDK_OFFSET(0xB2DF8D0)
#define RPG_CLIENT_AIRSHIPBIRDAUDIO_TRIGGERUNLOADCARGOEVENT_OFFSET UNITYSDK_OFFSET(0xB2DE2D0)
#define RPG_CLIENT_AIRSHIPBIRDAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0xB2DFC90)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipBirdAudio_TypeDefinitionIndex = 55900;

	class AirshipBirdAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* loadCargoEvent; // 0x18
		::System::String* unloadCargoEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDAUDIO__CTOR_OFFSET))(this);
		}

		::System::Void TriggerLoadCargoEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDAUDIO_TRIGGERLOADCARGOEVENT_OFFSET))(this);
		}

		::System::Void TriggerUnloadCargoEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDAUDIO_TRIGGERUNLOADCARGOEVENT_OFFSET))(this);
		}

		::System::Void Method_5_B6BF2A1BCE9B9659(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDAUDIO_METHOD_5_B6BF2A1BCE9B9659_OFFSET))(this, a1);
		}
	};
}
