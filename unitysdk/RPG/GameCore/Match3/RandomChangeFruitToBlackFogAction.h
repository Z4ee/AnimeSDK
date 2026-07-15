#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_5_0B456AEA89B3446F_OFFSET UNITYSDK_OFFSET(0x1BD2A7F0)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_5_4ACA0CD50EA61983_OFFSET UNITYSDK_OFFSET(0x1BD2A790)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2A7E0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeFruitToBlackFogAction_TypeDefinitionIndex = 24048;

	class RandomChangeFruitToBlackFogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::UInt32 Count; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4ACA0CD50EA61983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_5_4ACA0CD50EA61983_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0B456AEA89B3446F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_5_0B456AEA89B3446F_OFFSET))(a1, a2);
		}
	};
}
