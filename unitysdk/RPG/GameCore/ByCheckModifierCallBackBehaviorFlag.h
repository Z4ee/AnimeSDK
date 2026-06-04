#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_0B318CE4FD96D981_OFFSET UNITYSDK_OFFSET(0x194FD220)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6A5A35211FE4EA76_OFFSET UNITYSDK_OFFSET(0x194FCF30)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6B467C2E939118EE_OFFSET UNITYSDK_OFFSET(0x194FD2C0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_EA607033C6FD974D_OFFSET UNITYSDK_OFFSET(0x194FD050)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x194FCFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackBehaviorFlag_TypeDefinitionIndex = 22216;

	class ByCheckModifierCallBackBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6A5A35211FE4EA76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6A5A35211FE4EA76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA607033C6FD974D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_EA607033C6FD974D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0B318CE4FD96D981(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_0B318CE4FD96D981_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B467C2E939118EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6B467C2E939118EE_OFFSET))(a1, a2);
		}
	};
}
