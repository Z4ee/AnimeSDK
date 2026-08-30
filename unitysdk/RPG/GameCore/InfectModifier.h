#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierDispelFilterType.h"
#include "unitysdk/RPG/GameCore/ModifierInfectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_INFECTMODIFIER_METHOD_3_755720E9CF1AA95B_OFFSET UNITYSDK_OFFSET(0x1D21BDD0)
#define RPG_GAMECORE_INFECTMODIFIER_METHOD_3_CBF8DF90BE5DD2D5_OFFSET UNITYSDK_OFFSET(0x1D21BCF0)
#define RPG_GAMECORE_INFECTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21BD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfectModifier_TypeDefinitionIndex = 22810;

	class InfectModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlagFilter; // 0x28
		::Il2CppArray<::RPG::GameCore::EnumStatusType>* StatusTypeListFilter; // 0x30
		::RPG::GameCore::ModifierDispelFilterType StatusDispelFilter; // 0x38
		::RPG::GameCore::TargetEvaluator* ModifierCasterFilter; // 0x40
		::System::Boolean OnlyGlobalModifier; // 0x48
		::RPG::GameCore::DynamicFloat* InfectChance; // 0x50
		::RPG::GameCore::ModifierInfectType InfectType; // 0x58
		::System::Boolean DisableFloatingMessage; // 0x5C
		::System::Boolean Silence; // 0x5D
		::System::Boolean UseParamModifierToInfect; // 0x5E
		::System::Boolean AutoRemoveFromSource; // 0x5F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFECTMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CBF8DF90BE5DD2D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfectModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfectModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFECTMODIFIER_METHOD_3_CBF8DF90BE5DD2D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_755720E9CF1AA95B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfectModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfectModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFECTMODIFIER_METHOD_3_755720E9CF1AA95B_OFFSET))(a1, a2);
		}
	};
}
