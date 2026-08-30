#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_METHOD_6_7C8A950F260CF311_OFFSET UNITYSDK_OFFSET(0x1D3BB240)
#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_METHOD_6_F0AD1625EE24BDAD_OFFSET UNITYSDK_OFFSET(0x1D3BB1F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BB230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig_TypeDefinitionIndex = 19420;

	class RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F0AD1625EE24BDAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_METHOD_6_F0AD1625EE24BDAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7C8A950F260CF311(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_METHOD_6_7C8A950F260CF311_OFFSET))(a1, a2);
		}
	};
}
