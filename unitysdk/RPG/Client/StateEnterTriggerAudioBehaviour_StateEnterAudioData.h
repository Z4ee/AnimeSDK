#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_STATEENTERAUDIODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B63530)

namespace RPG::Client
{
	inline static constexpr unsigned int StateEnterTriggerAudioBehaviour_StateEnterAudioData_TypeDefinitionIndex = 65956;

	class StateEnterTriggerAudioBehaviour_StateEnterAudioData : public ::System::Object
	{
	public:
		::System::String* AudioEventName; // 0x10
		::System::Single NormalizedTime; // 0x18
		::System::Boolean IsTriggered; // 0x1C
		::System::Boolean OnlyOnEnter; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_STATEENTERAUDIODATA__CTOR_OFFSET))(this);
		}
	};
}
