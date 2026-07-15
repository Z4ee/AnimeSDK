#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_2ACCE576E3E28676_OFFSET UNITYSDK_OFFSET(0x1BE11880)
#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_67DF6D804355BB37_OFFSET UNITYSDK_OFFSET(0x1BE115B0)
#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_8F050E4105BA6E2E_OFFSET UNITYSDK_OFFSET(0x1BE11650)
#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_926E95E00F93F297_OFFSET UNITYSDK_OFFSET(0x1BE11820)
#define RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE11610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByContainBehaviorFlag_TypeDefinitionIndex = 21013;

	class AdvByContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AdventureModifierBehaviorFlag Flag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_67DF6D804355BB37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_67DF6D804355BB37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F050E4105BA6E2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_8F050E4105BA6E2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_926E95E00F93F297(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_926E95E00F93F297_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2ACCE576E3E28676(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCONTAINBEHAVIORFLAG_METHOD_4_2ACCE576E3E28676_OFFSET))(a1, a2);
		}
	};
}
