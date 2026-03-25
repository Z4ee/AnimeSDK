#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F62470)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__JOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x8F65030)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__JOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x8F653F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__JOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0x8F651D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__JOINLOBBY_B__3_OFFSET UNITYSDK_OFFSET(0x8F65520)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManager___c__DisplayClass25_0_TypeDefinitionIndex = 61451;

	class MarblePVPManager___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPManager* __4__this; // 0x18
		::System::Action_1<::RPG::Client::BaseLobby*>* __9__2; // 0x20
		::System::UInt64 roomID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _JoinLobby_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__JOINLOBBY_B__0_OFFSET))(this);
		}

		::System::Void _JoinLobby_b__2(::RPG::Client::BaseLobby* lobby)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__JOINLOBBY_B__2_OFFSET))(this, lobby);
		}

		::System::Void _JoinLobby_b__1(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3> arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__JOINLOBBY_B__1_OFFSET))(this, arg);
		}

		::System::Void _JoinLobby_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS25_0__JOINLOBBY_B__3_OFFSET))(this);
		}
	};
}
