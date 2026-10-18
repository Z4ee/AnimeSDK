#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarType.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EnergyBarConfig; }

#define RPG_GAMECORE_CHARACTERUICONFIG_METHOD_2_FBAC7FDD369CD04E_OFFSET UNITYSDK_OFFSET(0x1D541810)
#define RPG_GAMECORE_CHARACTERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D54CAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterUIConfig_TypeDefinitionIndex = 16547;

	class CharacterUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterHUDType HUDType; // 0x10
		::RPG::GameCore::ActionBarType ActionBarType; // 0x14
		::RPG::GameCore::CrosshairType CrosshairType; // 0x18
		::RPG::GameCore::SpecialSkillButtonGroupType SpecialSkillButtonGroupType; // 0x1C
		::RPG::GameCore::EnergyBarConfig* EnergyBarConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FBAC7FDD369CD04E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERUICONFIG_METHOD_2_FBAC7FDD369CD04E_OFFSET))(a1, a2);
		}
	};
}
