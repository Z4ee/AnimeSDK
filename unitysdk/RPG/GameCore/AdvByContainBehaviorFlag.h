#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_46D7E3FA320721B9_OFFSET UNITYSDK_OFFSET(0x194190B0)
#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_8A6B6F13062CA530_OFFSET UNITYSDK_OFFSET(0x194193A0)
#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_8F050E4105BA6E2E_OFFSET UNITYSDK_OFFSET(0x194191D0)
#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_A59DA15D02D53DE7_OFFSET UNITYSDK_OFFSET(0x19419440)
#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19419150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByContainBehaviorFlag_TypeDefinitionIndex = 20598;

	class AdvByContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AdventureModifierBehaviorFlag Flag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_46D7E3FA320721B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_46D7E3FA320721B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F050E4105BA6E2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_8F050E4105BA6E2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A6B6F13062CA530(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_8A6B6F13062CA530_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A59DA15D02D53DE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_A59DA15D02D53DE7_OFFSET))(a1, a2);
		}
	};
}
