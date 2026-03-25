#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F615D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS10_0__EXITPVPLOBBYPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x8F64E70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS10_0__EXITPVPLOBBYPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0x8F64FD0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManager___c__DisplayClass10_0_TypeDefinitionIndex = 61449;

	class MarblePVPManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::RPG::Client::ActivityMarble::MarblePVPManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExitPVPLobbyPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS10_0__EXITPVPLOBBYPROMISE_B__0_OFFSET))(this);
		}

		::System::Void _ExitPVPLobbyPromise_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS10_0__EXITPVPLOBBYPROMISE_B__1_OFFSET))(this);
		}
	};
}
