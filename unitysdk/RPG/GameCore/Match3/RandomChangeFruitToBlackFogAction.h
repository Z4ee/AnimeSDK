#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_5_0B456AEA89B3446F_OFFSET UNITYSDK_OFFSET(0x18AB27B0)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_5_FE863565244D7A99_OFFSET UNITYSDK_OFFSET(0x18ABA3C0)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB2740)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeFruitToBlackFogAction_TypeDefinitionIndex = 23723;

	class RandomChangeFruitToBlackFogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::UInt32 Count; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FE863565244D7A99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_5_FE863565244D7A99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0B456AEA89B3446F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_5_0B456AEA89B3446F_OFFSET))(a1, a2);
		}
	};
}
