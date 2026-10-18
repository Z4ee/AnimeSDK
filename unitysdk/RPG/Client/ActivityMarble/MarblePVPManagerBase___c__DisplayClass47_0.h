#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePVPManagerBase; }
namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC549C30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS47_0___TRANSFERANDJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xC54BCA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS47_0___TRANSFERANDJOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xC54C060)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManagerBase___c__DisplayClass47_0_TypeDefinitionIndex = 76012;

	class MarblePVPManagerBase___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPManagerBase* __4__this; // 0x18
		::System::UInt64 roomID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void __TransferAndJoinLobby_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS47_0___TRANSFERANDJOINLOBBY_B__0_OFFSET))(this);
		}

		::System::Void __TransferAndJoinLobby_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS47_0___TRANSFERANDJOINLOBBY_B__1_OFFSET))(this);
		}
	};
}
