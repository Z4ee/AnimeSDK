#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9C0D9E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0___TRANSFERANDJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x9C0F260)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0___TRANSFERANDJOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x9C0F580)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManager___c__DisplayClass45_0_TypeDefinitionIndex = 68958;

	class MarblePVPManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPManager* __4__this; // 0x18
		::System::UInt64 roomID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void __TransferAndJoinLobby_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0___TRANSFERANDJOINLOBBY_B__0_OFFSET))(this);
		}

		::System::Void __TransferAndJoinLobby_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0___TRANSFERANDJOINLOBBY_B__1_OFFSET))(this);
		}
	};
}
