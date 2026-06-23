#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigVoiceToEvent_VoiceUsageConditionedRule; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIGVOICETOEVENT_TRYGETRULELIST_OFFSET UNITYSDK_OFFSET(0x1A00EB90)
#define MOLEMOLE_CONFIGVOICETOEVENT_TRYGETWWISEEVENT_OFFSET UNITYSDK_OFFSET(0x1A00EE00)
#define MOLEMOLE_CONFIGVOICETOEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00F0D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigVoiceToEvent_TypeDefinitionIndex = 71240;

	class ConfigVoiceToEvent : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::ConfigVoiceToEvent_VoiceUsageConditionedRule*>*>* rulesByUsageKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVOICETOEVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetRuleList(::System::String* usageKey, ::System::Collections::Generic::List_1<::MoleMole::ConfigVoiceToEvent_VoiceUsageConditionedRule*>*& rules)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::ConfigVoiceToEvent_VoiceUsageConditionedRule*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVOICETOEVENT_TRYGETRULELIST_OFFSET))(this, usageKey, rules);
		}

		::System::Boolean TryGetWwiseEvent(::System::String* usageKey, ::UnityEngine::GameObject* emitterGo, ::System::String*& wwiseEventName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVOICETOEVENT_TRYGETWWISEEVENT_OFFSET))(this, usageKey, emitterGo, wwiseEventName);
		}
	};
}
