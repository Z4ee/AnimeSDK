#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/MPSessionState.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_9DB8CECD03D9FBBA;
class Class_1_E7DB216A3FFF6C29;
class Class_2_FD1781FBF85A46E5;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }

#define RPG_CLIENT_BASEMPGAMESERVICE_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0x9DDA3E0)
#define RPG_CLIENT_BASEMPGAMESERVICE_CANCELMATCH_OFFSET UNITYSDK_OFFSET(0x9DDA080)
#define RPG_CLIENT_BASEMPGAMESERVICE_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0x9DDAE20)
#define RPG_CLIENT_BASEMPGAMESERVICE_CHECKRECONNECTTOFIGHT_OFFSET UNITYSDK_OFFSET(0x9DDA550)
#define RPG_CLIENT_BASEMPGAMESERVICE_CREATELOBBY_OFFSET UNITYSDK_OFFSET(0x9DD9700)
#define RPG_CLIENT_BASEMPGAMESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DDABC0)
#define RPG_CLIENT_BASEMPGAMESERVICE_INVITE_OFFSET UNITYSDK_OFFSET(0x9DDA380)
#define RPG_CLIENT_BASEMPGAMESERVICE_JOINLOBBY_OFFSET UNITYSDK_OFFSET(0x9DD9B60)
#define RPG_CLIENT_BASEMPGAMESERVICE_ONCREATEGAME_OFFSET UNITYSDK_OFFSET(0x9DDAEB0)
#define RPG_CLIENT_BASEMPGAMESERVICE_ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0x9DDAFA0)
#define RPG_CLIENT_BASEMPGAMESERVICE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DDB150)
#define RPG_CLIENT_BASEMPGAMESERVICE_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x9DDB100)
#define RPG_CLIENT_BASEMPGAMESERVICE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x9DDB040)
#define RPG_CLIENT_BASEMPGAMESERVICE_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0x9DDB080)
#define RPG_CLIENT_BASEMPGAMESERVICE_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9DDB0C0)
#define RPG_CLIENT_BASEMPGAMESERVICE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9DDAE60)
#define RPG_CLIENT_BASEMPGAMESERVICE_REMINDPREPARE_OFFSET UNITYSDK_OFFSET(0x9DDA0E0)
#define RPG_CLIENT_BASEMPGAMESERVICE_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x9DDA010)
#define RPG_CLIENT_BASEMPGAMESERVICE_TRYGIVEUP_OFFSET UNITYSDK_OFFSET(0x9DDA500)
#define RPG_CLIENT_BASEMPGAMESERVICE_TRYQUITLOBBY_OFFSET UNITYSDK_OFFSET(0x9DD9F50)
#define RPG_CLIENT_BASEMPGAMESERVICE_TRYRECONNECTTOFIGHT_OFFSET UNITYSDK_OFFSET(0x9DDA830)
#define RPG_CLIENT_BASEMPGAMESERVICE_VALIDATEINVITATION_OFFSET UNITYSDK_OFFSET(0x9DDB1A0)
#define RPG_CLIENT_BASEMPGAMESERVICE__CHECKRECONNECTTOFIGHT_B__10_0_OFFSET UNITYSDK_OFFSET(0x9DDB2D0)
#define RPG_CLIENT_BASEMPGAMESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD9670)
#define RPG_CLIENT_BASEMPGAMESERVICE__INIT_OFFSET UNITYSDK_OFFSET(0x9DDAAC0)
#define RPG_CLIENT_BASEMPGAMESERVICE__ONMPSESSIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9DDB210)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseMPGameService_TypeDefinitionIndex = 62934;

	class BaseMPGameService : public ::System::Object
	{
	public:
		::Class_1_9DB8CECD03D9FBBA* _InviteService; // 0x10
		::Class_2_FD1781FBF85A46E5* _SessionService; // 0x18

		::System::Void _ctor(::Class_2_FD1781FBF85A46E5* sessionService, ::Class_1_9DB8CECD03D9FBBA* inviteService)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD1781FBF85A46E5*, ::Class_1_9DB8CECD03D9FBBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE__CTOR_OFFSET))(this, sessionService, inviteService);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* CreateLobby(::System::UInt32 createParam)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_CREATELOBBY_OFFSET))(this, createParam);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* JoinLobby(::System::UInt64 lobbyID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_JOINLOBBY_OFFSET))(this, lobbyID);
		}

		::RPG::Client::Promises::IPromise* TryQuitLobby()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_TRYQUITLOBBY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* StartMatch()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_STARTMATCH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CancelMatch()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_CANCELMATCH_OFFSET))(this);
		}

		::System::Void RemindPrepare(::System::UInt32 memberUID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_REMINDPREPARE_OFFSET))(this, memberUID);
		}

		::RPG::Client::Promises::IPromise* Invite(::System::UInt32 uid)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_INVITE_OFFSET))(this, uid);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* AcceptInvitation(::RPG::Client::ChatMessageInviteData* inviteData)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ACCEPTINVITATION_OFFSET))(this, inviteData);
		}

		::RPG::Client::Promises::IPromise* TryGiveUp()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_TRYGIVEUP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CheckReconnectToFight()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_CHECKRECONNECTTOFIGHT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* TryReconnectToFight()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_TRYRECONNECTTOFIGHT_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE__INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CheckCanEnterMPGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_CHECKCANENTERMPGAME_OFFSET))(this);
		}

		::System::Void OnStateChanged(::RPG::Client::MPSessionState oldState, ::RPG::Client::MPSessionState newState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MPSessionState, ::RPG::Client::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ONSTATECHANGED_OFFSET))(this, oldState, newState);
		}

		::System::Void OnCreateGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ONCREATEGAME_OFFSET))(this);
		}

		::System::Void OnFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ONFINISHGAME_OFFSET))(this);
		}

		::System::Void OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void OnServerConnectFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ONSERVERCONNECTFAIL_OFFSET))(this);
		}

		::System::Void OnServerDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ONSERVERDISCONNECTED_OFFSET))(this);
		}

		::System::Void OnOnGeneralRsp(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ONONGENERALRSP_OFFSET))(this, msgId, msg);
		}

		::System::Void OnGeneralNotify(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_ONGENERALNOTIFY_OFFSET))(this, msgId, msg);
		}

		::System::Boolean ValidateInvitation(::RPG::Client::ChatMessageData* messageData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE_VALIDATEINVITATION_OFFSET))(this, messageData);
		}

		::System::Void _OnMPSessionStateChanged(::RPG::Client::MPSessionState oldState, ::RPG::Client::MPSessionState newState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MPSessionState, ::RPG::Client::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE__ONMPSESSIONSTATECHANGED_OFFSET))(this, oldState, newState);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__10_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE__CHECKRECONNECTTOFIGHT_B__10_0_OFFSET))(this);
		}
	};
}
