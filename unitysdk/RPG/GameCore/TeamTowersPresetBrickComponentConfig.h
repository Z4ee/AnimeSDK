#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersBrickModifierTypeConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_METHOD_3_9DCFBC03C2DA9583_OFFSET UNITYSDK_OFFSET(0x1E1CEF70)
#define RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_METHOD_3_E66545456F263D15_OFFSET UNITYSDK_OFFSET(0x1E1CEFD0)
#define RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CEFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersPresetBrickComponentConfig_TypeDefinitionIndex = 18729;

	class TeamTowersPresetBrickComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Enabled; // 0x10
		::RPG::GameCore::TeamTowersBrickModifierTypeConfig ModifierType; // 0x14
		::System::UInt32 IvyTimes; // 0x18
		::System::UInt32 IvyID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DCFBC03C2DA9583(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersPresetBrickComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersPresetBrickComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_METHOD_3_9DCFBC03C2DA9583_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E66545456F263D15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersPresetBrickComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersPresetBrickComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_METHOD_3_E66545456F263D15_OFFSET))(a1, a2);
		}
	};
}
