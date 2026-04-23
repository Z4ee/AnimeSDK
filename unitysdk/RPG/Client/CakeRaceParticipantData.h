#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceParticipantData_CakeRaceParticipantType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightPlayer; }
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::GameCore { class CakeRaceNPCRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATENPC_OFFSET UNITYSDK_OFFSET(0x9F0F5A0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPLAYER_1_OFFSET UNITYSDK_OFFSET(0x9F0F8E0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x9F0F790)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVEDATA_OFFSET UNITYSDK_OFFSET(0x9F0F200)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVPDATA_1_OFFSET UNITYSDK_OFFSET(0x9F0F2C0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVPDATA_OFFSET UNITYSDK_OFFSET(0x9F092E0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATESELF_OFFSET UNITYSDK_OFFSET(0x9F0F470)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9F0FB70)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F00BB0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GETFIXEDPARTICIPANTUIDLIST_OFFSET UNITYSDK_OFFSET(0x9F0FE70)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GETNPCUIDLIST_OFFSET UNITYSDK_OFFSET(0x9F10110)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x9F105A0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x9F10770)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISNPC_OFFSET UNITYSDK_OFFSET(0x9F10740)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x9F10730)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPSN_OFFSET UNITYSDK_OFFSET(0x9F10790)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0x9F10710)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x9F10750)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9F10600)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9F105E0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9F105C0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x9F10580)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PLATFORMID_OFFSET UNITYSDK_OFFSET(0x9F10930)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x9F106B0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_SPECIALAINPCCATID_OFFSET UNITYSDK_OFFSET(0x9F10470)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_SPECIALAIROBOTID_OFFSET UNITYSDK_OFFSET(0x9F10380)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F10560)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET__NPCROW_OFFSET UNITYSDK_OFFSET(0x9F0FCD0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_HEADICON_OFFSET UNITYSDK_OFFSET(0x9F105B0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x9F10780)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0x9F10720)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0x9F10760)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9F105F0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9F105D0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x9F10590)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F10570)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9F09290)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SYNCPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x9F002B0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F0FCC0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA__TRYSETSPECIALROBOTINFO_OFFSET UNITYSDK_OFFSET(0x9F0FD30)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceParticipantData_TypeDefinitionIndex = 58090;

	class CakeRaceParticipantData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__SpecialAINpcCatID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeRaceParticipantData_TypeDefinitionIndex)->GetStaticField(0xF510);
		}
		static ::System::UInt32* StaticGet__SpecialAIRobotID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeRaceParticipantData_TypeDefinitionIndex)->GetStaticField(0xF514);
		}
		::System::String* _NickName_k__BackingField; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo; // 0x18
		::RPG::Client::LobbyMemberData* _LobbyMemberData_k__BackingField; // 0x20
		::System::String* _HeadIcon_k__BackingField; // 0x28
		::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType _Type_k__BackingField; // 0x30
		::System::Boolean _IsFriend_k__BackingField; // 0x34
		::System::Boolean _IsPvp_k__BackingField; // 0x35
		::System::Boolean _IsSelf_k__BackingField; // 0x36
		::System::UInt32 _ParticipantID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceParticipantData* Create(::System::UInt32 uid)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATE_OFFSET))(uid);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePveData(::System::UInt32 uid)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVEDATA_OFFSET))(uid);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePvpData(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVPDATA_OFFSET))(lobbyMemberData);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePvpData_1(::System::UInt32 uid)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVPDATA_1_OFFSET))(uid);
		}

		static ::RPG::Client::CakeRaceParticipantData* Create_1(::RPG::Client::FightPlayer* fightPlayer)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::RPG::Client::FightPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATE_1_OFFSET))(fightPlayer);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreateSelf()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATESELF_OFFSET))();
		}

		static ::RPG::Client::CakeRaceParticipantData* CreateNpc(::System::UInt32 npcID)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATENPC_OFFSET))(npcID);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePlayer(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPLAYER_OFFSET))(lobbyMemberData);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePlayer_1(::RPG::Client::FightPlayer* fightPlayer)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::RPG::Client::FightPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPLAYER_1_OFFSET))(fightPlayer);
		}

		::System::Void SyncByLobbyMemberData(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET))(this, lobbyMemberData);
		}

		::System::Void SyncPlatformInfo(::RPG::Client::PlayerPlatformInfo* platformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SYNCPLATFORMINFO_OFFSET))(this, platformInfo);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetFixedParticipantUidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GETFIXEDPARTICIPANTUIDLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetNpcUidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GETNPCUIDLIST_OFFSET))();
		}

		::System::Void _TrySetSpecialRobotInfo(::System::UInt32 npcID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA__TRYSETSPECIALROBOTINFO_OFFSET))(this, npcID);
		}

		::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType get_Type()
		{
			return ((::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_ParticipantID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_HEADICON_OFFSET))(this);
		}

		::System::Void set_HeadIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_HEADICON_OFFSET))(this, value);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_NICKNAME_OFFSET))(this, value);
		}

		::RPG::Client::LobbyMemberData* get_LobbyMemberData()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_LOBBYMEMBERDATA_OFFSET))(this);
		}

		::System::Void set_LobbyMemberData(::RPG::Client::LobbyMemberData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_LOBBYMEMBERDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Boolean get_IsPvp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPVP_OFFSET))(this);
		}

		::System::Void set_IsPvp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISPVP_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsNpc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISNPC_OFFSET))(this);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISSELF_OFFSET))(this);
		}

		::System::Void set_IsSelf(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISSELF_OFFSET))(this, value);
		}

		::System::Boolean get_IsFriend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISFRIEND_OFFSET))(this);
		}

		::System::Void set_IsFriend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISFRIEND_OFFSET))(this, value);
		}

		::System::Boolean get_IsPsn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPSN_OFFSET))(this);
		}

		::System::String* get_PlatformID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PLATFORMID_OFFSET))(this);
		}

		static ::System::UInt32 get_SpecialAIRobotID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_SPECIALAIROBOTID_OFFSET))();
		}

		static ::System::UInt32 get_SpecialAINpcCatID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_SPECIALAINPCCATID_OFFSET))();
		}

		::RPG::GameCore::CakeRaceNPCRow* get__NPCRow()
		{
			return ((::RPG::GameCore::CakeRaceNPCRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET__NPCROW_OFFSET))(this);
		}
	};
}
