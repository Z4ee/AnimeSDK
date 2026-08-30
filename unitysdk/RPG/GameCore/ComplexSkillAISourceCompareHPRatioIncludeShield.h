#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_METHOD_3_BFAF36871995B4D5_OFFSET UNITYSDK_OFFSET(0x1D9AAB60)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_METHOD_3_D22B7BEF120EA4C7_OFFSET UNITYSDK_OFFSET(0x1D9AABC0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AABB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceCompareHPRatioIncludeShield_TypeDefinitionIndex = 15382;

	class ComplexSkillAISourceCompareHPRatioIncludeShield : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Boolean OnlyShieldFromCaster; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BFAF36871995B4D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceCompareHPRatioIncludeShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceCompareHPRatioIncludeShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_METHOD_3_BFAF36871995B4D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D22B7BEF120EA4C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceCompareHPRatioIncludeShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceCompareHPRatioIncludeShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_METHOD_3_D22B7BEF120EA4C7_OFFSET))(a1, a2);
		}
	};
}
