#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_5_1551C07811D0AAA6_OFFSET UNITYSDK_OFFSET(0x1D2464B0)
#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_5_42F8D5551BBC43AA_OFFSET UNITYSDK_OFFSET(0x1D246450)
#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2464A0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetRandomSeedAction_TypeDefinitionIndex = 24625;

	class SetRandomSeedAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 RandomSeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_42F8D5551BBC43AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetRandomSeedAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetRandomSeedAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_5_42F8D5551BBC43AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1551C07811D0AAA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetRandomSeedAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetRandomSeedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_5_1551C07811D0AAA6_OFFSET))(a1, a2);
		}
	};
}
