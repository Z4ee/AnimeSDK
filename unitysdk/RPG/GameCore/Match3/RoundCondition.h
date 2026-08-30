#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ROUNDCONDITION_METHOD_5_26C5653D31666A87_OFFSET UNITYSDK_OFFSET(0x1D242DE0)
#define RPG_GAMECORE_MATCH3_ROUNDCONDITION_METHOD_5_4460DDB3F398839D_OFFSET UNITYSDK_OFFSET(0x1D245F00)
#define RPG_GAMECORE_MATCH3_ROUNDCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D242DD0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RoundCondition_TypeDefinitionIndex = 24602;

	class RoundCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetRound; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4460DDB3F398839D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION_METHOD_5_4460DDB3F398839D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_26C5653D31666A87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION_METHOD_5_26C5653D31666A87_OFFSET))(a1, a2);
		}
	};
}
