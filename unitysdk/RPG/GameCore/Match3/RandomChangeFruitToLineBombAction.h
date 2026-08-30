#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_METHOD_5_192FCB22919003DE_OFFSET UNITYSDK_OFFSET(0x1D263290)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_METHOD_5_383B88064F746A22_OFFSET UNITYSDK_OFFSET(0x1D263230)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D263280)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeFruitToLineBombAction_TypeDefinitionIndex = 24636;

	class RandomChangeFruitToLineBombAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::UInt32 Count; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_383B88064F746A22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_METHOD_5_383B88064F746A22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_192FCB22919003DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_METHOD_5_192FCB22919003DE_OFFSET))(a1, a2);
		}
	};
}
