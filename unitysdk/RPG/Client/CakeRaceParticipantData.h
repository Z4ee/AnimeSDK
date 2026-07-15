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

#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATENPC_OFFSET UNITYSDK_OFFSET(0x1AC4A290)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPLAYER_1_OFFSET UNITYSDK_OFFSET(0x1AC4A6B0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x1AC4A560)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVEDATA_OFFSET UNITYSDK_OFFSET(0x1AC49DB0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVPDATA_1_OFFSET UNITYSDK_OFFSET(0x1AC49E70)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVPDATA_OFFSET UNITYSDK_OFFSET(0x1AC4A490)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATESELF_OFFSET UNITYSDK_OFFSET(0x1AC4A0B0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1AC4A940)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC49C90)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GETFIXEDPARTICIPANTUIDLIST_OFFSET UNITYSDK_OFFSET(0x1AC4ACE0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GETNPCUIDLIST_OFFSET UNITYSDK_OFFSET(0x1AC4AFE0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x1AC4B520)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x1AC4B770)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISNPC_OFFSET UNITYSDK_OFFSET(0x1AC4B700)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1AC4B6B0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPSN_OFFSET UNITYSDK_OFFSET(0x1AC4B790)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0x1AC4B690)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1AC4B750)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AC4B580)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x1AC4B560)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1AC4B540)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x1AC4B500)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PLATFORMID_OFFSET UNITYSDK_OFFSET(0x1AC4B930)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1AC4B630)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_SPECIALAINPCCATID_OFFSET UNITYSDK_OFFSET(0x1AC4B3D0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_SPECIALAIROBOTID_OFFSET UNITYSDK_OFFSET(0x1AC4B2C0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AC4B4E0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET__NPCROW_OFFSET UNITYSDK_OFFSET(0x1AC4AAA0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_HEADICON_OFFSET UNITYSDK_OFFSET(0x1AC4B530)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x1AC4B780)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0x1AC4B6A0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1AC4B760)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x1AC4B570)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1AC4B550)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x1AC4B510)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AC4B4F0)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x1AC4AC40)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA_SYNCPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1AC4AC90)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4AA90)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA__TRYSETSPECIALROBOTINFO_OFFSET UNITYSDK_OFFSET(0x1AC4AB00)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceParticipantData_TypeDefinitionIndex = 60277;

	class CakeRaceParticipantData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__SpecialAINpcCatID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeRaceParticipantData_TypeDefinitionIndex)->GetStaticField(0x126E0);
		}
		static ::System::UInt32* StaticGet__SpecialAIRobotID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeRaceParticipantData_TypeDefinitionIndex)->GetStaticField(0x126E4);
		}
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo; // 0x10
		::System::String* _NickName_k__BackingField; // 0x18
		::System::String* _HeadIcon_k__BackingField; // 0x20
		::RPG::Client::LobbyMemberData* _LobbyMemberData_k__BackingField; // 0x28
		::System::Boolean _IsFriend_k__BackingField; // 0x30
		::System::Boolean _IsSelf_k__BackingField; // 0x31
		::System::Boolean _IsPvp_k__BackingField; // 0x32
		::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType _Type_k__BackingField; // 0x34
		::System::UInt32 _ParticipantID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceParticipantData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVEDATA_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePvpData(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVPDATA_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePvpData_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPVPDATA_1_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceParticipantData* Create_1(::RPG::Client::FightPlayer* a1)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::RPG::Client::FightPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreateSelf()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATESELF_OFFSET))();
		}

		static ::RPG::Client::CakeRaceParticipantData* CreateNpc(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATENPC_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePlayer(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPLAYER_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceParticipantData* CreatePlayer_1(::RPG::Client::FightPlayer* a1)
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::RPG::Client::FightPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_CREATEPLAYER_1_OFFSET))(a1);
		}

		::System::Void SyncByLobbyMemberData(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET))(this, a1);
		}

		::System::Void SyncPlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SYNCPLATFORMINFO_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetFixedParticipantUidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GETFIXEDPARTICIPANTUIDLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetNpcUidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GETNPCUIDLIST_OFFSET))();
		}

		::System::Void _TrySetSpecialRobotInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA__TRYSETSPECIALROBOTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType get_Type()
		{
			return ((::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData_CakeRaceParticipantType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ParticipantID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_PARTICIPANTID_OFFSET))(this, a1);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_HEADICON_OFFSET))(this);
		}

		::System::Void set_HeadIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_HEADICON_OFFSET))(this, a1);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_NICKNAME_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyMemberData* get_LobbyMemberData()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_LOBBYMEMBERDATA_OFFSET))(this);
		}

		::System::Void set_LobbyMemberData(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_LOBBYMEMBERDATA_OFFSET))(this, a1);
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

		::System::Void set_IsPvp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISPVP_OFFSET))(this, a1);
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

		::System::Void set_IsSelf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISSELF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFriend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_GET_ISFRIEND_OFFSET))(this);
		}

		::System::Void set_IsFriend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA_SET_ISFRIEND_OFFSET))(this, a1);
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
