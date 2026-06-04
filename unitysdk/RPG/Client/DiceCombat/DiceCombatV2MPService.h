#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/Multiplayer/BaseMPGameService.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_8D51A3D661E47C5C;
class Class_1_E7DB216A3FFF6C29;
class Class_2_4A27D8D16ED10A2B;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xB7D2670)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0xB7D1920)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPPLAYEREXTINFO_OFFSET UNITYSDK_OFFSET(0xB7D1FC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xB7D2450)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xB7D1910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_INVITETOASTUIPATH_OFFSET UNITYSDK_OFFSET(0xB7D2630)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ISINACTIVITYGAME_OFFSET UNITYSDK_OFFSET(0xB7D28C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xB7D1F40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xB7D1EC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xB7D1E60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB7D1AC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_REGISTERGUEST_OFFSET UNITYSDK_OFFSET(0xB7D2AB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_SETINVITEROBOTID_OFFSET UNITYSDK_OFFSET(0xB7D2C30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_UNREGISTERGUEST_OFFSET UNITYSDK_OFFSET(0xB7D2B70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D1900)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0xB7D23F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPVPSTAGEID_OFFSET UNITYSDK_OFFSET(0xB7D25A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__ONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xB7D1B30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xB7D2EE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0xB7D2D00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xB7D2E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xB7D2E20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xB7D2DC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB7D2D60)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2MPService_TypeDefinitionIndex = 70776;

	class DiceCombatV2MPService : public ::RPG::Client::Multiplayer::BaseMPGameService
	{
	public:
		::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* _OnOnGeneralRsp; // 0x20
		::System::Action* _OnServerConnected; // 0x28
		::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* _OnGeneralNotify; // 0x30

		::System::Void _ctor(::Class_2_4A27D8D16ED10A2B* a1, ::Class_1_8D51A3D661E47C5C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4A27D8D16ED10A2B*, ::Class_1_8D51A3D661E47C5C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::Enum_3_A35B38E5F9115A76_2 get_GameMode()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Boolean CheckCanEnterMPGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CHECKCANENTERMPGAME_OFFSET))(this);
		}

		::System::Void OnStateChanged(::RPG::Client::Multiplayer::MPSessionState a1, ::RPG::Client::Multiplayer::MPSessionState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSTATECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void OnOnGeneralRsp(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONONGENERALRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnGeneralNotify(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONGENERALNOTIFY_OFFSET))(this, a1, a2);
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

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* AcceptInvitation(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ACCEPTINVITATION_OFFSET))(this, a1);
		}

		::System::Boolean IsInActivityGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ISINACTIVITYGAME_OFFSET))(this);
		}

		::System::Void RegisterGuest(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_REGISTERGUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnregisterGuest(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_UNREGISTERGUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetInviteRobotID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_SETINVITEROBOTID_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_OnStateChanged(::RPG::Client::Multiplayer::MPSessionState a1, ::RPG::Client::Multiplayer::MPSessionState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONSTATECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnOnGeneralRsp(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONONGENERALRSP_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnGeneralNotify(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ONGENERALNOTIFY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* __iFixBaseProxy_AcceptInvitation(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE___IFIXBASEPROXY_ACCEPTINVITATION_OFFSET))(this, a1);
		}
	};
}
