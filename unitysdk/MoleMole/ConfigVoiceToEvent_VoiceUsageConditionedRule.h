#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System { class String; }

#define MOLEMOLE_CONFIGVOICETOEVENT_VOICEUSAGECONDITIONEDRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B568F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigVoiceToEvent_VoiceUsageConditionedRule_TypeDefinitionIndex = 54467;

	class ConfigVoiceToEvent_VoiceUsageConditionedRule : public ::System::Object
	{
	public:
		::MoleMole::Config::ISoundActionTriggerCondition* soundActionCondition; // 0x10
		::System::String* wwiseEventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVOICETOEVENT_VOICEUSAGECONDITIONEDRULE__CTOR_OFFSET))(this);
		}
	};
}
