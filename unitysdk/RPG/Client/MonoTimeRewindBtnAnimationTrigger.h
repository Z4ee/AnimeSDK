#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_MONOTIMEREWINDBTNANIMATIONTRIGGER_TRIGGERAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x1C284AD0)
#define RPG_CLIENT_MONOTIMEREWINDBTNANIMATIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C284C60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimeRewindBtnAnimationTrigger_TypeDefinitionIndex = 68933;

	class MonoTimeRewindBtnAnimationTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMEREWINDBTNANIMATIONTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void TriggerAudioEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMEREWINDBTNANIMATIONTRIGGER_TRIGGERAUDIOEVENT_OFFSET))(this, a1);
		}
	};
}
