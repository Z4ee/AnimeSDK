#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;
namespace RPG::Client::DiceCombat { class DiceCombatPVPLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A419280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS17_0__STARTMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x1A41AA00)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager___c__DisplayClass17_0_TypeDefinitionIndex = 72226;

	class DiceCombatPVPManager___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatPVPLobby* currentLobby; // 0x10
		::RPG::Client::DiceCombat::DiceCombatPVPManager* __4__this; // 0x18
		::Class_1_7B005A18003A04C3* extInfo; // 0x20

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
