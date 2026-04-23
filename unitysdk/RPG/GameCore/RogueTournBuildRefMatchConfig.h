#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournBuildRefMatchFormulaRateConfig; }
namespace RPG::GameCore { class RogueTournBuildRefMatchHexMiracleRateConfig; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHCONFIG_METHOD_2_5C25481F10944A53_OFFSET UNITYSDK_OFFSET(0x18D6EB30)
#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6ECB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefMatchConfig_TypeDefinitionIndex = 16785;

	class RogueTournBuildRefMatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RogueTournBuildRefMatchFormulaRateConfig* FormulaRate; // 0x10
		::RPG::GameCore::RogueTournBuildRefMatchHexMiracleRateConfig* HexMiracleRate; // 0x18
		::System::UInt32 AllOwnedTeamRate; // 0x20
		::RPG::GameCore::RogueTournBuildRefMatchFormulaRateConfig* SelectingFormulaRate; // 0x28
		::RPG::GameCore::RogueTournBuildRefMatchHexMiracleRateConfig* SelectingHexMiracleRate; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5C25481F10944A53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournBuildRefMatchConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHCONFIG_METHOD_2_5C25481F10944A53_OFFSET))(a1, a2);
		}
	};
}
