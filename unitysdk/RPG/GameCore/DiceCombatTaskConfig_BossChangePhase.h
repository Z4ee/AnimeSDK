#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_METHOD_3_324F58B889D29C43_OFFSET UNITYSDK_OFFSET(0x1D035060)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_METHOD_3_985837FA027891C2_OFFSET UNITYSDK_OFFSET(0x1D034FC0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D035050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_BossChangePhase_TypeDefinitionIndex = 15905;

	class DiceCombatTaskConfig_BossChangePhase : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_985837FA027891C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_METHOD_3_985837FA027891C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_324F58B889D29C43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_METHOD_3_324F58B889D29C43_OFFSET))(a1, a2);
		}
	};
}
