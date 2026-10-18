#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"
#include "unitysdk/System/Object.h"

class Class_1_1DD6AC150642D284;
class Class_1_2375E47039821420;
class Class_1_7B005A18003A04C3;
class Class_1_A8A34799125AB1D6;
class Class_1_E1363CD4F546D866;
class Class_2_4A27D8D16ED10A2B;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }

#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ACCEPTINVITATION_1_OFFSET UNITYSDK_OFFSET(0xD8D7890)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xD8D7770)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xD8D8F50)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANCELMATCH_OFFSET UNITYSDK_OFFSET(0xD8D71E0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CANSHOWACTIVITYINVITATION_OFFSET UNITYSDK_OFFSET(0xD8D9010)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0xD8D8AD0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CHECKRECONNECTTOFIGHT_OFFSET UNITYSDK_OFFSET(0xD8D79C0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_CREATELOBBY_OFFSET UNITYSDK_OFFSET(0xD8D6100)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8D85C0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_INVITE_OFFSET UNITYSDK_OFFSET(0xD8D76A0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_JOINLOBBY_OFFSET UNITYSDK_OFFSET(0xD8D6900)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONCREATEGAME_OFFSET UNITYSDK_OFFSET(0xD8D8B60)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0xD8D8CD0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xD8D8F00)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xD8D8EB0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xD8D8DF0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0xD8D8E30)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xD8D8E70)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xD8D8B10)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_REMINDPREPARE_OFFSET UNITYSDK_OFFSET(0xD8D72B0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xD8D70A0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYGIVEUP_OFFSET UNITYSDK_OFFSET(0xD8D7970)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYQUITLOBBY_OFFSET UNITYSDK_OFFSET(0xD8D6FB0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_TRYRECONNECTTOFIGHT_OFFSET UNITYSDK_OFFSET(0xD8D7EB0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__CHECKRECONNECTTOFIGHT_B__11_0_OFFSET UNITYSDK_OFFSET(0xD8D9330)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xD8D5700)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__INIT_OFFSET UNITYSDK_OFFSET(0xD8D82B0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__ONMPSESSIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xD8D90D0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xD8D92B0)

namespace RPG::Client::Multiplayer
{
	inline static constexpr unsigned int BaseMPGameService_TypeDefinitionIndex = 80251;

	class BaseMPGameService : public ::System::Object
	{
	public:
		::Class_2_4A27D8D16ED10A2B* _SessionService; // 0x10
		::Class_1_A8A34799125AB1D6* _LobbyInviteCommand; // 0x18
		::Class_1_E1363CD4F546D866* _InviteService; // 0x20

		::System::Void _ctor(::Class_2_4A27D8D16ED10A2B* a1, ::Class_1_E1363CD4F546D866* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4A27D8D16ED10A2B*, ::Class_1_E1363CD4F546D866*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void AcceptInvitation_1(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE_ACCEPTINVITATION_1_OFFSET))(this, a1);
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

		::System::String* __ctor_b__0_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___CTOR_B__0_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__11_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE__CHECKRECONNECTTOFIGHT_B__11_0_OFFSET))(this);
		}
	};
}
