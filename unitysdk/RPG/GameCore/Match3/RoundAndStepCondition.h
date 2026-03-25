#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_METHOD_5_61063213955B8018_OFFSET UNITYSDK_OFFSET(0x173A90C0)
#define RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_METHOD_5_DE2C30481A1D0514_OFFSET UNITYSDK_OFFSET(0x173AC110)
#define RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x173A9040)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RoundAndStepCondition_TypeDefinitionIndex = 22713;

	class RoundAndStepCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetRound; // 0x18
		::System::UInt32 TargetStep; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DE2C30481A1D0514(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundAndStepCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundAndStepCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_METHOD_5_DE2C30481A1D0514_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_61063213955B8018(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundAndStepCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundAndStepCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_METHOD_5_61063213955B8018_OFFSET))(a1, a2);
		}
	};
}
