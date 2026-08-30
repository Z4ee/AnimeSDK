#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_49485233C001BFB8_OFFSET UNITYSDK_OFFSET(0x1C2FF680)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_A688583EDE874B86_OFFSET UNITYSDK_OFFSET(0x1C2FF8F0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_C505EF9BD15D22CB_OFFSET UNITYSDK_OFFSET(0x1C2FF950)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_EA607033C6FD974D_OFFSET UNITYSDK_OFFSET(0x1C2FF720)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FF6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackBehaviorFlag_TypeDefinitionIndex = 23231;

	class ByCheckModifierCallBackBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_49485233C001BFB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_49485233C001BFB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA607033C6FD974D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_EA607033C6FD974D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A688583EDE874B86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_A688583EDE874B86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C505EF9BD15D22CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_C505EF9BD15D22CB_OFFSET))(a1, a2);
		}
	};
}
