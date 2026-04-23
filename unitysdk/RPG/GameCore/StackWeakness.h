#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WeaknessStackOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKWEAKNESS_METHOD_3_0D171A25AEE859C4_OFFSET UNITYSDK_OFFSET(0x18E88840)
#define RPG_GAMECORE_STACKWEAKNESS_METHOD_3_CA813496135B6646_OFFSET UNITYSDK_OFFSET(0x18E887C0)
#define RPG_GAMECORE_STACKWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18E88810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackWeakness_TypeDefinitionIndex = 22006;

	class StackWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::WeaknessStackOperationType OPType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* WeakList; // 0x28
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* SecretList; // 0x30
		::System::Boolean PlayAddAnimWhenOverride; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA813496135B6646(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackWeakness*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackWeakness*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKNESS_METHOD_3_CA813496135B6646_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D171A25AEE859C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackWeakness* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKNESS_METHOD_3_0D171A25AEE859C4_OFFSET))(a1, a2);
		}
	};
}
