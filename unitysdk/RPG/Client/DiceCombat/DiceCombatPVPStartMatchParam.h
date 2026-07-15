#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatPVPMode.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM_GET_ISDIRECTSTARTGAME_OFFSET UNITYSDK_OFFSET(0x1A41AD00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM_GET_PVPMODE_OFFSET UNITYSDK_OFFSET(0x1A41ACE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM_SET_ISDIRECTSTARTGAME_OFFSET UNITYSDK_OFFSET(0x1A41AD10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM_SET_PVPMODE_OFFSET UNITYSDK_OFFSET(0x1A41ACF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A41ACD0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPStartMatchParam_TypeDefinitionIndex = 72213;

	class DiceCombatPVPStartMatchParam : public ::System::Object
	{
	public:
		::System::Boolean _IsDirectStartGame_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatPVPMode _PVPMode_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatPVPMode a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DiceCombat::DiceCombatPVPMode get_PVPMode()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPVPMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM_GET_PVPMODE_OFFSET))(this);
		}

		::System::Void set_PVPMode(::RPG::Client::DiceCombat::DiceCombatPVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM_SET_PVPMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDirectStartGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM_GET_ISDIRECTSTARTGAME_OFFSET))(this);
		}

		::System::Void set_IsDirectStartGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPSTARTMATCHPARAM_SET_ISDIRECTSTARTGAME_OFFSET))(this, a1);
		}
	};
}
