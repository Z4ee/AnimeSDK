#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_METHOD_3_AD558FD3033603F8_OFFSET UNITYSDK_OFFSET(0x190CA900)
#define RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_METHOD_3_EB976C1C80FA0427_OFFSET UNITYSDK_OFFSET(0x190CA880)
#define RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x190CA8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerParamModifierCustomEvent_TypeDefinitionIndex = 22613;

	class TriggerParamModifierCustomEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* EventType; // 0x18
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x20
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::DynamicFloat* Value; // 0x30
		::RPG::GameCore::PredicateConfig* PreCheck; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB976C1C80FA0427(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerParamModifierCustomEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerParamModifierCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_METHOD_3_EB976C1C80FA0427_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD558FD3033603F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerParamModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerParamModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_METHOD_3_AD558FD3033603F8_OFFSET))(a1, a2);
		}
	};
}
