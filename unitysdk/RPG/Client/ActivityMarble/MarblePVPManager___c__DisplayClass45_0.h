#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8D3A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0___TRANSFERANDJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x19A8EE90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS45_0___TRANSFERANDJOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x19A8F1C0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManager___c__DisplayClass45_0_TypeDefinitionIndex = 71293;

	class MarblePVPManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarblePVPManager* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
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
