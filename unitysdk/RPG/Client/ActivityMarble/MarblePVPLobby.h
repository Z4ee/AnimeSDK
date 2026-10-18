#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

class Class_1_1DD6AC150642D284;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC53C990)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_MODE_OFFSET UNITYSDK_OFFSET(0xC545EB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_ROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xC53BE20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_KICKOUTOPPONENT_OFFSET UNITYSDK_OFFSET(0xC545440)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_LOBBYREADYPROMISE_OFFSET UNITYSDK_OFFSET(0xC545360)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SETMODE_OFFSET UNITYSDK_OFFSET(0xC545560)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SET_MODE_OFFSET UNITYSDK_OFFSET(0xC545EC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xC545ED0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0xC545E10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCREATED_OFFSET UNITYSDK_OFFSET(0xC545270)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xC5457F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xC545E60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xC545640)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0xC545A20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0xC545710)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC545A60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__TRYRESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xC545DB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__UPDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0xC545B70)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPLobby_TypeDefinitionIndex = 76005;

	class MarblePVPLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::RPG::Client::ActivityMarble::MarblePVPMatchContext* _Context; // 0x60
		::RPG::Client::Promises::Promise* _LobbyReadyPromise; // 0x68
		::Class_1_1DD6AC150642D284* _RoomExtInfo; // 0x70
		::RPG::Client::ActivityMarble::MarblePVPMode _Mode_k__BackingField; // 0x78

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

		::System::Void _OnRoomInit(::Class_1_1DD6AC150642D284* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONROOMINIT_OFFSET))(this, a1);
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

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _TryResolvePromise(::RPG::Client::Promises::Promise*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__TRYRESOLVEPROMISE_OFFSET))(this, a1);
		}

		::System::Void _OnContextChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCHANGED_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPMode get_Mode()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SET_MODE_OFFSET))(this, a1);
		}

		::Class_1_1DD6AC150642D284* get_RoomExtInfo()
		{
			return ((::Class_1_1DD6AC150642D284*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_ROOMEXTINFO_OFFSET))(this);
		}
	};
}
