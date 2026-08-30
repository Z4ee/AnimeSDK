#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_FIGHTCONFIG_METHOD_2_0C21DABF26CCF481_OFFSET UNITYSDK_OFFSET(0x1D25E680)
#define RPG_GAMECORE_MATCH3_FIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D25E840)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int FightConfig_TypeDefinitionIndex = 24588;

	class FightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BattleShowMaxDuration; // 0x10
		::System::Single BirdInitScale; // 0x14
		::System::Single BirdScalePerPower; // 0x18
		::System::Single BirdMaxScale; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_FIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0C21DABF26CCF481(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::FightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::FightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_FIGHTCONFIG_METHOD_2_0C21DABF26CCF481_OFFSET))(a1, a2);
		}
	};
}
