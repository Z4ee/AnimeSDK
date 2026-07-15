#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/RPG/Client/Multiplayer/BaseMPGameService.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"

class Class_1_1DD6AC150642D284;
class Class_1_2375E47039821420;
class Class_1_6DBCB1EF77F6CF1A;
class Class_1_7B005A18003A04C3;
class Class_2_4A27D8D16ED10A2B;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0x1A441B70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0x1A440E50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPPLAYEREXTINFO_OFFSET UNITYSDK_OFFSET(0x1A4413E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0x1A4418F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x1A440E00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_INVITETOASTUIPATH_OFFSET UNITYSDK_OFFSET(0x1A441B00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ISINACTIVITYGAME_OFFSET UNITYSDK_OFFSET(0x1A441CF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A441370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x1A4412F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A441290)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A440EF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_REGISTERGUEST_OFFSET UNITYSDK_OFFSET(0x1A441E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_SETINVITEROBOTID_OFFSET UNITYSDK_OFFSET(0x1A442000)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_UNREGISTERGUEST_OFFSET UNITYSDK_OFFSET(0x1A441F40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A440DF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0x1A441860)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPVPSTAGEID_OFFSET UNITYSDK_OFFSET(0x1A441A40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__ONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0x1A440F60)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2MPService_TypeDefinitionIndex = 72289;

	class DiceCombatV2MPService : public ::RPG::Client::Multiplayer::BaseMPGameService
	{
	public:
		::System::Action* _OnServerConnected; // 0x20
		::System::Action_1<::Class_1_2375E47039821420*>* _OnGeneralNotify; // 0x28
		::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* _OnOnGeneralRsp; // 0x30

		::System::Void _ctor(::Class_2_4A27D8D16ED10A2B* a1, ::Class_1_6DBCB1EF77F6CF1A* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4A27D8D16ED10A2B*, ::Class_1_6DBCB1EF77F6CF1A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::Enum_3_01618AD0437C8486_2 get_GameMode()
		{
			return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_GAMEMODE_OFFSET))(this);
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

		::System::Void OnGeneralNotify(::Class_1_2375E47039821420* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2375E47039821420*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONGENERALNOTIFY_OFFSET))(this, a1);
		}

		::Class_1_7B005A18003A04C3* CreateMPPlayerExtInfo()
		{
			return ((::Class_1_7B005A18003A04C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPPLAYEREXTINFO_OFFSET))(this);
		}

		::Class_1_1DD6AC150642D284* CreateMPRoomExtInfo()
		{
			return ((::Class_1_1DD6AC150642D284*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPROOMEXTINFO_OFFSET))(this);
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

		::System::Void RegisterGuest(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_1<::Class_1_2375E47039821420*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_1<::Class_1_2375E47039821420*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_REGISTERGUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnregisterGuest(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_1<::Class_1_2375E47039821420*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_1<::Class_1_2375E47039821420*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_UNREGISTERGUEST_OFFSET))(this, a1, a2, a3);
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
	};
}
