#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatPresetTurnActorAddLimitedDiceConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }

#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG_METHOD_2_E5781A87DA93C563_OFFSET UNITYSDK_OFFSET(0x1C116CA0)
#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C116EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetTurnActorConfig_TypeDefinitionIndex = 15522;

	class DiceCombatPresetTurnActorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Active; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*>* RollConfig; // 0x18
		::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig* RollLimitedConfig; // 0x20
		::Il2CppArray<::System::Int32>* ConfirmResult; // 0x28
		::Il2CppArray<::System::Int32>* TacticsCardAutoRefreshConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E5781A87DA93C563(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPresetTurnActorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPresetTurnActorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG_METHOD_2_E5781A87DA93C563_OFFSET))(a1, a2);
		}
	};
}
