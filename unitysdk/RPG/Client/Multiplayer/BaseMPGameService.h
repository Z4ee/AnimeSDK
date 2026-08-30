#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"
#include "unitysdk/System/Object.h"

class Class_1_1DD6AC150642D284;
class Class_1_2375E47039821420;
class Class_1_6DBCB1EF77F6CF1A;
class Class_1_7B005A18003A04C3;
class Class_2_4A27D8D16ED10A2B;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }

#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0x1B6ED960)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0x1B6EEF70)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANCELMATCH_OFFSET UNITYSDK_OFFSET(0x1B6ED3D0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANSHOWACTIVITYINVITATION_OFFSET UNITYSDK_OFFSET(0x1B6EF030)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0x1B6EEAF0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CHECKRECONNECTTOFIGHT_OFFSET UNITYSDK_OFFSET(0x1B6EDAD0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CREATELOBBY_OFFSET UNITYSDK_OFFSET(0x1B6EC2F0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B6EE650)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_INVITE_OFFSET UNITYSDK_OFFSET(0x1B6ED890)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_JOINLOBBY_OFFSET UNITYSDK_OFFSET(0x1B6ECAF0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONCREATEGAME_OFFSET UNITYSDK_OFFSET(0x1B6EEB80)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0x1B6EECF0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B6EEF20)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x1B6EEED0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x1B6EEE10)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0x1B6EEE50)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1B6EEE90)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B6EEB30)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_REMINDPREPARE_OFFSET UNITYSDK_OFFSET(0x1B6ED4A0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x1B6ED290)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYGIVEUP_OFFSET UNITYSDK_OFFSET(0x1B6EDA80)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYQUITLOBBY_OFFSET UNITYSDK_OFFSET(0x1B6ED1A0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYRECONNECTTOFIGHT_OFFSET UNITYSDK_OFFSET(0x1B6EDFC0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__CHECKRECONNECTTOFIGHT_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B6EF2D0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6EC1F0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__INIT_OFFSET UNITYSDK_OFFSET(0x1B6EE3C0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__ONMPSESSIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B6EF0F0)

namespace RPG::Client::Multiplayer
{
	inline static constexpr unsigned int BaseMPGameService_TypeDefinitionIndex = 78930;

	class BaseMPGameService : public ::System::Object
	{
	public:
		::Class_2_4A27D8D16ED10A2B* _SessionService; // 0x10
		::Class_1_6DBCB1EF77F6CF1A* _InviteService; // 0x18

		::System::Void _ctor(::Class_2_4A27D8D16ED10A2B* a1, ::Class_1_6DBCB1EF77F6CF1A* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4A27D8D16ED10A2B*, ::Class_1_6DBCB1EF77F6CF1A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* CreateLobby(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CREATELOBBY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* JoinLobby(::System::UInt64 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_JOINLOBBY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* TryQuitLobby()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYQUITLOBBY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* StartMatch()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_STARTMATCH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CancelMatch()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANCELMATCH_OFFSET))(this);
		}

		::System::Void RemindPrepare(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_REMINDPREPARE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* Invite(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_INVITE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* AcceptInvitation(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ACCEPTINVITATION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* TryGiveUp()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYGIVEUP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CheckReconnectToFight()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CHECKRECONNECTTOFIGHT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* TryReconnectToFight()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYRECONNECTTOFIGHT_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CheckCanEnterMPGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CHECKCANENTERMPGAME_OFFSET))(this);
		}

		::System::Void OnStateChanged(::RPG::Client::Multiplayer::MPSessionState a1, ::RPG::Client::Multiplayer::MPSessionState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSTATECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void OnCreateGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONCREATEGAME_OFFSET))(this);
		}

		::System::Void OnFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONFINISHGAME_OFFSET))(this);
		}

		::System::Void OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void OnServerConnectFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERCONNECTFAIL_OFFSET))(this);
		}

		::System::Void OnServerDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERDISCONNECTED_OFFSET))(this);
		}

		::System::Void OnOnGeneralRsp(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONONGENERALRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnGeneralNotify(::Class_1_2375E47039821420* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2375E47039821420*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONGENERALNOTIFY_OFFSET))(this, a1);
		}

		::System::Boolean CanAcceptInvitation(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANACCEPTINVITATION_OFFSET))(this, a1);
		}

		::System::Boolean CanShowActivityInvitation(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANSHOWACTIVITYINVITATION_OFFSET))(this, a1);
		}

		::System::Void _OnMPSessionStateChanged(::RPG::Client::Multiplayer::MPSessionState a1, ::RPG::Client::Multiplayer::MPSessionState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__ONMPSESSIONSTATECHANGED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__10_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__CHECKRECONNECTTOFIGHT_B__10_0_OFFSET))(this);
		}
	};
}
