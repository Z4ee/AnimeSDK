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

#define RPG_GAMECORE_INFECTMODIFIER_METHOD_3_39EAAC1B854EDF57_OFFSET UNITYSDK_OFFSET(0x18A1C330)
#define RPG_GAMECORE_INFECTMODIFIER_METHOD_3_CF55E60492C3430D_OFFSET UNITYSDK_OFFSET(0x18A1C450)
#define RPG_GAMECORE_INFECTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1C3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfectModifier_TypeDefinitionIndex = 21996;

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

		static ::System::Void Method_3_39EAAC1B854EDF57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfectModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfectModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFECTMODIFIER_METHOD_3_39EAAC1B854EDF57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF55E60492C3430D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfectModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfectModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFECTMODIFIER_METHOD_3_CF55E60492C3430D_OFFSET))(a1, a2);
		}
	};
}
