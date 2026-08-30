#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_METHOD_3_0A7FB7A0A19BC7BC_OFFSET UNITYSDK_OFFSET(0x1CFF4140)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_METHOD_3_B980D1AFC6A1551B_OFFSET UNITYSDK_OFFSET(0x1CFF40F0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF4130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceContainBehaviorFlag_TypeDefinitionIndex = 15352;

	class ComplexSkillAISourceContainBehaviorFlag : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTarget; // 0x10
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x14
		::RPG::GameCore::ModifierValueType ValueType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B980D1AFC6A1551B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_METHOD_3_B980D1AFC6A1551B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A7FB7A0A19BC7BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_METHOD_3_0A7FB7A0A19BC7BC_OFFSET))(a1, a2);
		}
	};
}
