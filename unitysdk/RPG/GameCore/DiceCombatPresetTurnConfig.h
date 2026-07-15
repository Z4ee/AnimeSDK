#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatPresetTurnActorConfig; }

#define RPG_GAMECORE_DICECOMBATPRESETTURNCONFIG_METHOD_2_C305CD72D310FDB5_OFFSET UNITYSDK_OFFSET(0x1C116FF0)
#define RPG_GAMECORE_DICECOMBATPRESETTURNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C117100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetTurnConfig_TypeDefinitionIndex = 15523;

	class DiceCombatPresetTurnConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatPresetTurnActorConfig* AttackerPreset; // 0x10
		::RPG::GameCore::DiceCombatPresetTurnActorConfig* DefenderPreset; // 0x18
		::RPG::GameCore::DiceCombatPresetTurnActorConfig* TeamMatePreset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C305CD72D310FDB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPresetTurnConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPresetTurnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNCONFIG_METHOD_2_C305CD72D310FDB5_OFFSET))(a1, a2);
		}
	};
}
