#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIWeaknessCompare.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_METHOD_3_1DBE99E1EC4EBCF3_OFFSET UNITYSDK_OFFSET(0x1BC294F0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_METHOD_3_775FD442C0FD8380_OFFSET UNITYSDK_OFFSET(0x1BC294B0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC294E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceWeaknessCompare_TypeDefinitionIndex = 14915;

	class ComplexSkillAISourceWeaknessCompare : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIWeaknessCompare CounterType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_775FD442C0FD8380(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_METHOD_3_775FD442C0FD8380_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DBE99E1EC4EBCF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_METHOD_3_1DBE99E1EC4EBCF3_OFFSET))(a1, a2);
		}
	};
}
