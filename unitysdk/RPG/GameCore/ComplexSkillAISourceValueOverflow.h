#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueOverflowType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_METHOD_3_5BF47B069F90D2CF_OFFSET UNITYSDK_OFFSET(0x1CFF6890)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_METHOD_3_B7B37BDB5B2AF4EF_OFFSET UNITYSDK_OFFSET(0x1CFF68F0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF68E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceValueOverflow_TypeDefinitionIndex = 15357;

	class ComplexSkillAISourceValueOverflow : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueOverflowType OverflowType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5BF47B069F90D2CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValueOverflow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValueOverflow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_METHOD_3_5BF47B069F90D2CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7B37BDB5B2AF4EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValueOverflow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValueOverflow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_METHOD_3_B7B37BDB5B2AF4EF_OFFSET))(a1, a2);
		}
	};
}
