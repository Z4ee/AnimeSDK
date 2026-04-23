#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_METHOD_3_1246A13706AB436A_OFFSET UNITYSDK_OFFSET(0x18830440)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_METHOD_3_E353D99ED08868DA_OFFSET UNITYSDK_OFFSET(0x1882F0A0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1882F080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceValue_TypeDefinitionIndex = 14697;

	class ComplexSkillAISourceValue : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueType ValueType; // 0x10
		::System::Boolean IsTarget; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1246A13706AB436A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_METHOD_3_1246A13706AB436A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E353D99ED08868DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_METHOD_3_E353D99ED08868DA_OFFSET))(a1, a2);
		}
	};
}
