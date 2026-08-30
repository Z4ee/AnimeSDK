#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_METHOD_3_A70B67009B9768BE_OFFSET UNITYSDK_OFFSET(0x1CFF4F00)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_METHOD_3_E4553154001CE01F_OFFSET UNITYSDK_OFFSET(0x1CFF4F60)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF4F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceModifierValue_TypeDefinitionIndex = 15363;

	class ComplexSkillAISourceModifierValue : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ModifierValueType ValueType; // 0x10
		::System::Boolean IsTarget; // 0x14
		::System::Boolean SumAllTarget; // 0x15
		::System::String* ModifilerName; // 0x18
		::RPG::GameCore::NumOperationType OperationType; // 0x20
		::System::Boolean StringFromParam; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A70B67009B9768BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_METHOD_3_A70B67009B9768BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4553154001CE01F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_METHOD_3_E4553154001CE01F_OFFSET))(a1, a2);
		}
	};
}
