#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_5_0C0875F4B1156A24_OFFSET UNITYSDK_OFFSET(0x1D34E600)
#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_5_CCD0614B8A57A560_OFFSET UNITYSDK_OFFSET(0x1D34E650)
#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34E640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondInRogueTournModeConfig_TypeDefinitionIndex = 19332;

	class PlayerCondInRogueTournModeConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0C0875F4B1156A24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_5_0C0875F4B1156A24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CCD0614B8A57A560(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueTournModeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_5_CCD0614B8A57A560_OFFSET))(a1, a2);
		}
	};
}
