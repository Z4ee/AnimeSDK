#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
namespace RPG::Client::DiceCombat { class DiceCombatPVPLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA12E740)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS17_0__STARTMATCH_B__0_OFFSET UNITYSDK_OFFSET(0xA12FE50)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager___c__DisplayClass17_0_TypeDefinitionIndex = 69901;

	class DiceCombatPVPManager___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_1_0C36FD2A7876DF8E* extInfo; // 0x10
		::RPG::Client::DiceCombat::DiceCombatPVPManager* __4__this; // 0x18
		::RPG::Client::DiceCombat::DiceCombatPVPLobby* currentLobby; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartMatch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS17_0__STARTMATCH_B__0_OFFSET))(this);
		}
	};
}
