#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_METHOD_5_7231ADB9A53E8301_OFFSET UNITYSDK_OFFSET(0x18AB7310)
#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_METHOD_5_BF49F26C020EA026_OFFSET UNITYSDK_OFFSET(0x18ABA750)
#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB7290)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RoundAfterCondition_TypeDefinitionIndex = 23690;

	class RoundAfterCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetRound; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BF49F26C020EA026(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundAfterCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundAfterCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_METHOD_5_BF49F26C020EA026_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7231ADB9A53E8301(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundAfterCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundAfterCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_METHOD_5_7231ADB9A53E8301_OFFSET))(a1, a2);
		}
	};
}
