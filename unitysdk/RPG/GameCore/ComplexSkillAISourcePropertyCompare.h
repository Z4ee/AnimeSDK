#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_METHOD_3_3A98A2D41335AE90_OFFSET UNITYSDK_OFFSET(0x1966DA50)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_METHOD_3_EECA2316FE7580AF_OFFSET UNITYSDK_OFFSET(0x1966FDD0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1966DA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourcePropertyCompare_TypeDefinitionIndex = 14752;

	class ComplexSkillAISourcePropertyCompare : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTarget; // 0x10
		::RPG::GameCore::AbilityProperty TargetPropertyType; // 0x14
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x18
		::RPG::GameCore::FixPoint CompareValue; // 0x20
		::RPG::GameCore::DynamicFloat* CompareDynamicFromActor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EECA2316FE7580AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_METHOD_3_EECA2316FE7580AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A98A2D41335AE90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_METHOD_3_3A98A2D41335AE90_OFFSET))(a1, a2);
		}
	};
}
