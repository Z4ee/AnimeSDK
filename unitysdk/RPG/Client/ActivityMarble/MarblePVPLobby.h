#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB1A5950)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_MODE_OFFSET UNITYSDK_OFFSET(0xB1A6ED0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_KICKOUTOPPONENT_OFFSET UNITYSDK_OFFSET(0xB1A6010)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_LOBBYREADYPROMISE_OFFSET UNITYSDK_OFFSET(0xB1A5F30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SETMODE_OFFSET UNITYSDK_OFFSET(0xB1A6130)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SET_MODE_OFFSET UNITYSDK_OFFSET(0xB1A6EE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A6EF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0xB1A6D80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ISINMATCHEDSTATE_OFFSET UNITYSDK_OFFSET(0xB1A6E30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCREATED_OFFSET UNITYSDK_OFFSET(0xB1A5E50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xB1A62C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xB1A6E80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xB1A6200)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0xB1A6460)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB1A64A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__TRYRESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xB1A6900)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__UPDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0xB1A65B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0xB1A6F00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xB1A7080)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xB1A7020)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0xB1A6F60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB1A6FC0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPLobby_TypeDefinitionIndex = 69765;

	class MarblePVPLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::RPG::Client::Promises::Promise* _LobbyReadyPromise; // 0x60
		::RPG::Client::ActivityMarble::MarblePVPMatchContext* _Context; // 0x68
		::RPG::Client::ActivityMarble::MarblePVPMode _Mode_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPMatchContext* GetContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GETCONTEXT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LobbyReadyPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_LOBBYREADYPROMISE_OFFSET))(this);
		}

		::System::Void KickOutOpponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_KICKOUTOPPONENT_OFFSET))(this);
		}

		::System::Void SetMode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SETMODE_OFFSET))(this, a1);
		}

		::System::Void _OnContextCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCREATED_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnPostInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONPOSTINIT_OFFSET))(this);
		}

		::System::Void _OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONSTATECHANGED_OFFSET))(this);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _UpdateMembers(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LobbyMemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__UPDATEMEMBERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _GetMembersByLobbyState()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET))(this);
		}

		::System::Boolean _IsInMatchedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ISINMATCHEDSTATE_OFFSET))(this);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _TryResolvePromise(::RPG::Client::Promises::Promise*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__TRYRESOLVEPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePVPMode get_Mode()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SET_MODE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnPostInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONPOSTINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONSTATECHANGED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY___IFIXBASEPROXY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}
	};
}
