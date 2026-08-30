#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_METHOD_5_4A66BD985C38D7FA_OFFSET UNITYSDK_OFFSET(0x1D243110)
#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_METHOD_5_FEA07EDECF700460_OFFSET UNITYSDK_OFFSET(0x1D247690)
#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D243100)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StepPowerLargerThanCondition_TypeDefinitionIndex = 24610;

	class StepPowerLargerThanCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 Power; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FEA07EDECF700460(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StepPowerLargerThanCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StepPowerLargerThanCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_METHOD_5_FEA07EDECF700460_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4A66BD985C38D7FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StepPowerLargerThanCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StepPowerLargerThanCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_METHOD_5_4A66BD985C38D7FA_OFFSET))(a1, a2);
		}
	};
}
