#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleQTEBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_METHOD_3_461578501E15FF77_OFFSET UNITYSDK_OFFSET(0x16FDF910)
#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_METHOD_3_572D539EBE2CD7CF_OFFSET UNITYSDK_OFFSET(0x16FE1BD0)
#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDF900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleSingleClickQTEConfig_TypeDefinitionIndex = 21576;

	class BattleSingleClickQTEConfig : public ::RPG::GameCore::BattleQTEBaseConfig
	{
	public:
		::System::Boolean SkipInAutoBattle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_572D539EBE2CD7CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleSingleClickQTEConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleSingleClickQTEConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_METHOD_3_572D539EBE2CD7CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_461578501E15FF77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleSingleClickQTEConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleSingleClickQTEConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_METHOD_3_461578501E15FF77_OFFSET))(a1, a2);
		}
	};
}
