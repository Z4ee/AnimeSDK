#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/BaseMPGameService.h"
#include "unitysdk/RPG/Client/MPSessionState.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_9DB8CECD03D9FBBA;
class Class_1_E7DB216A3FFF6C29;
class Class_2_FD1781FBF85A46E5;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xA1535C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0xA152970)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPPLAYEREXTINFO_OFFSET UNITYSDK_OFFSET(0xA152EE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xA1533A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xA152960)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_INVITETOASTUIPATH_OFFSET UNITYSDK_OFFSET(0xA153580)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ISINACTIVITYGAME_OFFSET UNITYSDK_OFFSET(0xA1536B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xA152E70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xA152E00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xA152DB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA152A10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_REGISTERGUEST_OFFSET UNITYSDK_OFFSET(0xA153870)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_SETINVITEROBOTID_OFFSET UNITYSDK_OFFSET(0xA1539F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_UNREGISTERGUEST_OFFSET UNITYSDK_OFFSET(0xA153930)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA152950)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0xA153340)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPVPSTAGEID_OFFSET UNITYSDK_OFFSET(0xA1534F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__ONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xA152A80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xA153CE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0xA153AC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xA153C70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xA153C00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xA153BA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA153B30)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2MPService_TypeDefinitionIndex = 69964;

	class DiceCombatV2MPService : public ::RPG::Client::BaseMPGameService
	{
	public:
		::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* _OnGeneralNotify; // 0x20
		::System::Action* _OnServerConnected; // 0x28
		::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* _OnOnGeneralRsp; // 0x30

		::System::Void _ctor(::Class_2_FD1781FBF85A46E5* sessionService, ::Class_1_9DB8CECD03D9FBBA* inviteService)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD1781FBF85A46E5*, ::Class_1_9DB8CECD03D9FBBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__CTOR_OFFSET))(this, sessionService, inviteService);
		}

		::Enum_3_A35B38E5F9115A76_2 get_GameMode()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Boolean CheckCanEnterMPGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CHECKCANENTERMPGAME_OFFSET))(this);
		}

		::System::Void OnStateChanged(::RPG::Client::MPSessionState oldState, ::RPG::Client::MPSessionState newState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MPSessionState, ::RPG::Client::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSTATECHANGED_OFFSET))(this, oldState, newState);
		}

		::System::Void OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void OnOnGeneralRsp(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONONGENERALRSP_OFFSET))(this, msgId, msg);
		}

		::System::Void OnGeneralNotify(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONGENERALNOTIFY_OFFSET))(this, msgId, msg);
		}

		::Class_1_0C36FD2A7876DF8E* CreateMPPlayerExtInfo()
		{
			return ((::Class_1_0C36FD2A7876DF8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPPLAYEREXTINFO_OFFSET))(this);
		}

		::Class_1_E7DB216A3FFF6C29* CreateMPRoomExtInfo()
		{
			return ((::Class_1_E7DB216A3FFF6C29*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPROOMEXTINFO_OFFSET))(this);
		}

		::System::String* get_InviteToastUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_INVITETOASTUIPATH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* AcceptInvitation(::RPG::Client::ChatMessageInviteData* inviteData)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ACCEPTINVITATION_OFFSET))(this, inviteData);
		}

		::System::Boolean IsInActivityGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ISINACTIVITYGAME_OFFSET))(this);
		}

		::System::Void RegisterGuest(::System::Action* onConnected, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* onOnGeneralRsp, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* onGeneralNotify)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_REGISTERGUEST_OFFSET))(this, onConnected, onOnGeneralRsp, onGeneralNotify);
		}

		::System::Void UnregisterGuest(::System::Action* onConnected, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* onOnGeneralRsp, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* onGeneralNotify)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_UNREGISTERGUEST_OFFSET))(this, onConnected, onOnGeneralRsp, onGeneralNotify);
		}

		::System::Void SetInviteRobotID(::System::UInt32 robotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_SETINVITEROBOTID_OFFSET))(this, robotID);
		}

		::System::Void _OnEnterLobby()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__ONENTERLOBBY_OFFSET))(this);
		}

		::System::UInt32 _GetPlayerAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPLAYERAVATARID_OFFSET))(this);
		}

		::System::UInt32 _GetPVPStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPVPSTAGEID_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckCanEnterMPGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_CHECKCANENTERMPGAME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnStateChanged(::RPG::Client::MPSessionState P0, ::RPG::Client::MPSessionState P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MPSessionState, ::RPG::Client::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONSTATECHANGED_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnOnGeneralRsp(::System::UInt32 P0, ::Google::Protobuf::ByteString* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONONGENERALRSP_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnGeneralNotify(::System::UInt32 P0, ::Google::Protobuf::ByteString* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONGENERALNOTIFY_OFFSET))(this, P0, P1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* __iFixBaseProxy_AcceptInvitation(::RPG::Client::ChatMessageInviteData* P0)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ACCEPTINVITATION_OFFSET))(this, P0);
		}
	};
}
