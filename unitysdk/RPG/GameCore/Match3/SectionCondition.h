#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SECTIONCONDITION_METHOD_5_1992960738A5D3B2_OFFSET UNITYSDK_OFFSET(0x1D260850)
#define RPG_GAMECORE_MATCH3_SECTIONCONDITION_METHOD_5_C0D2F41713BCDC58_OFFSET UNITYSDK_OFFSET(0x1D2638B0)
#define RPG_GAMECORE_MATCH3_SECTIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D260840)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SectionCondition_TypeDefinitionIndex = 24604;

	class SectionCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetSection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C0D2F41713BCDC58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SectionCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SectionCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION_METHOD_5_C0D2F41713BCDC58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1992960738A5D3B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SectionCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SectionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION_METHOD_5_1992960738A5D3B2_OFFSET))(a1, a2);
		}
	};
}
