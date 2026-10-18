#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MarbleBattleAffiliationType.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;
class Class_1_C50F5982E5600913;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace System { class String; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEENEMY_OFFSET UNITYSDK_OFFSET(0xDADDE90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEFRIEND_OFFSET UNITYSDK_OFFSET(0xDADE100)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEPVPPLAYER_1_OFFSET UNITYSDK_OFFSET(0xDADF170)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEPVPPLAYER_OFFSET UNITYSDK_OFFSET(0xDADFB70)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATESELF_OFFSET UNITYSDK_OFFSET(0xDADD440)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GETMARBLETEAM_OFFSET UNITYSDK_OFFSET(0xDADE4E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_AFFILIATIONTYPE_OFFSET UNITYSDK_OFFSET(0xDAE75C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDAE75A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ID_OFFSET UNITYSDK_OFFSET(0xDAE7560)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xDAE79D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISMATCHING_OFFSET UNITYSDK_OFFSET(0xDAE7600)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISOWNMASTERTITLE_OFFSET UNITYSDK_OFFSET(0xDAE7660)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0xDAE7620)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISROOMOWNER_OFFSET UNITYSDK_OFFSET(0xDAE7640)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xDAE75E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xDAD42D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0xDAE7580)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SETISREADY_OFFSET UNITYSDK_OFFSET(0xDAE73C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SETISROOMOWNER_OFFSET UNITYSDK_OFFSET(0xDAE7370)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_AFFILIATIONTYPE_OFFSET UNITYSDK_OFFSET(0xDAE75D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDAE75B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ID_OFFSET UNITYSDK_OFFSET(0xDAE7570)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISMATCHING_OFFSET UNITYSDK_OFFSET(0xDAE7610)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISREADY_OFFSET UNITYSDK_OFFSET(0xDAE7630)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISROOMOWNER_OFFSET UNITYSDK_OFFSET(0xDAE7650)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xDAE75F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0xDAE7590)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDADEF40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE7360)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarblePlayer_TypeDefinitionIndex = 74700;

	class PetMarblePlayer : public ::System::Object
	{
	public:
		::System::String* _PlayerNameStr_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::ActivityMarble::MarbleTeamSelection* _TeamSelection; // 0x20
		::Class_1_7B005A18003A04C3* _ExtInfo; // 0x28
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x30
		::RPG::Client::MarbleBattleAffiliationType _AffiliationType_k__BackingField; // 0x38
		::System::Boolean _IsRoomOwner_k__BackingField; // 0x3C
		::System::Boolean _IsMatching_k__BackingField; // 0x3D
		::System::Boolean _IsReady_k__BackingField; // 0x3E
		::System::UInt32 _ID_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreateSelf(::System::Boolean a1)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATESELF_OFFSET))(a1);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreatePVPPlayer(::Class_1_C50F5982E5600913* a1, ::RPG::Client::MarbleBattleAffiliationType a2)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::Class_1_C50F5982E5600913*, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEPVPPLAYER_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreatePVPPlayer_1(::RPG::Client::LobbyMemberData* a1, ::RPG::Client::MarbleBattleAffiliationType a2)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::RPG::Client::LobbyMemberData*, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEPVPPLAYER_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreateFriend(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEFRIEND_OFFSET))(a1);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreateEnemy(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEENEMY_OFFSET))(a1);
		}

		::System::Void Update(::RPG::Client::LobbyMemberData* a1, ::RPG::Client::MarbleBattleAffiliationType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetIsReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SETISREADY_OFFSET))(this, a1);
		}

		::System::Void SetIsRoomOwner(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SETISROOMOWNER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleTeamSelection* GetMarbleTeam()
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GETMARBLETEAM_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_PlayerNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLAYERNAMESTR_OFFSET))(this);
		}

		::System::Void set_PlayerNameStr(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_PLAYERNAMESTR_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBattleAffiliationType get_AffiliationType()
		{
			return ((::RPG::Client::MarbleBattleAffiliationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_AFFILIATIONTYPE_OFFSET))(this);
		}

		::System::Void set_AffiliationType(::RPG::Client::MarbleBattleAffiliationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_AFFILIATIONTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_PLATFORMINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMatching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISMATCHING_OFFSET))(this);
		}

		::System::Void set_IsMatching(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISMATCHING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISREADY_OFFSET))(this);
		}

		::System::Void set_IsReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRoomOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISROOMOWNER_OFFSET))(this);
		}

		::System::Void set_IsRoomOwner(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISROOMOWNER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOwnMasterTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISOWNMASTERTITLE_OFFSET))(this);
		}

		::System::Boolean get_IsLocalPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISLOCALPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_PlayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLAYERINDEX_OFFSET))(this);
		}
	};
}
