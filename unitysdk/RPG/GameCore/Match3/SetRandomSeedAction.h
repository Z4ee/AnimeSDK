#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_5_1551C07811D0AAA6_OFFSET UNITYSDK_OFFSET(0x173A5860)
#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_5_C38AE1F49E02BA4B_OFFSET UNITYSDK_OFFSET(0x173AC560)
#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x173A57F0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetRandomSeedAction_TypeDefinitionIndex = 22738;

	class SetRandomSeedAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 RandomSeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C38AE1F49E02BA4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetRandomSeedAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetRandomSeedAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_5_C38AE1F49E02BA4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1551C07811D0AAA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetRandomSeedAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetRandomSeedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_5_1551C07811D0AAA6_OFFSET))(a1, a2);
		}
	};
}
