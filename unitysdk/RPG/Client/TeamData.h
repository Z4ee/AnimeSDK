#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/RPG/Client/AdventureBuffData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MemberData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMDATA_CACHEREPLACEDMEMBER_OFFSET UNITYSDK_OFFSET(0x18559DC0)
#define RPG_CLIENT_TEAMDATA_CANREPLACEMEMBERAVATARS_OFFSET UNITYSDK_OFFSET(0x18558730)
#define RPG_CLIENT_TEAMDATA_CHECKISEMPTY_OFFSET UNITYSDK_OFFSET(0x185592D0)
#define RPG_CLIENT_TEAMDATA_CLEARMEMBERS_OFFSET UNITYSDK_OFFSET(0x18559430)
#define RPG_CLIENT_TEAMDATA_CLEARREPLACEDMEMBERCACHE_OFFSET UNITYSDK_OFFSET(0x18559AD0)
#define RPG_CLIENT_TEAMDATA_CLEARREPLACEDMEMBERIFREJOIN_OFFSET UNITYSDK_OFFSET(0x18559EB0)
#define RPG_CLIENT_TEAMDATA_CREATELOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0x18556ED0)
#define RPG_CLIENT_TEAMDATA_CREATEMAINLINETEAM_OFFSET UNITYSDK_OFFSET(0x18556D30)
#define RPG_CLIENT_TEAMDATA_CREATERETURNTRIALAVATARTEAM_OFFSET UNITYSDK_OFFSET(0x18556DB0)
#define RPG_CLIENT_TEAMDATA_CREATESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18557270)
#define RPG_CLIENT_TEAMDATA_CREATESTORYLINETEAM_OFFSET UNITYSDK_OFFSET(0x18556E60)
#define RPG_CLIENT_TEAMDATA_CREATETEMPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x185572D0)
#define RPG_CLIENT_TEAMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18556A20)
#define RPG_CLIENT_TEAMDATA_DELETESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x185576E0)
#define RPG_CLIENT_TEAMDATA_GETALLMEMBERAVATARS_OFFSET UNITYSDK_OFFSET(0x185584D0)
#define RPG_CLIENT_TEAMDATA_GETASSISTMEMBERSLOT_OFFSET UNITYSDK_OFFSET(0x18559700)
#define RPG_CLIENT_TEAMDATA_GETASSISTMEMBER_OFFSET UNITYSDK_OFFSET(0x18559690)
#define RPG_CLIENT_TEAMDATA_GETCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0x185595D0)
#define RPG_CLIENT_TEAMDATA_GETFIRSTEMPTYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x185591D0)
#define RPG_CLIENT_TEAMDATA_GETINDEXBYAVATARID_OFFSET UNITYSDK_OFFSET(0x18559120)
#define RPG_CLIENT_TEAMDATA_GETLEADERDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x185594B0)
#define RPG_CLIENT_TEAMDATA_GETMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18558EA0)
#define RPG_CLIENT_TEAMDATA_GETMEMBERDATABYID_OFFSET UNITYSDK_OFFSET(0x18558C40)
#define RPG_CLIENT_TEAMDATA_GETMEMBERDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x18558E00)
#define RPG_CLIENT_TEAMDATA_GETMEMBERDATABYROLEID_OFFSET UNITYSDK_OFFSET(0x18558D00)
#define RPG_CLIENT_TEAMDATA_GETMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x18558BD0)
#define RPG_CLIENT_TEAMDATA_GETSLOTBYAVATARID_OFFSET UNITYSDK_OFFSET(0x18558FC0)
#define RPG_CLIENT_TEAMDATA_GETSLOTBYAVATARREALID_OFFSET UNITYSDK_OFFSET(0x18559070)
#define RPG_CLIENT_TEAMDATA_GETSNAPSHOTORSELF_OFFSET UNITYSDK_OFFSET(0x18558480)
#define RPG_CLIENT_TEAMDATA_GETTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x18559F70)
#define RPG_CLIENT_TEAMDATA_GET_ADVENTUREBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x1855A240)
#define RPG_CLIENT_TEAMDATA_GET_AVAILABLETRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1855A620)
#define RPG_CLIENT_TEAMDATA_GET_DISPLAYMAINLINEINDEX_OFFSET UNITYSDK_OFFSET(0x1855A2C0)
#define RPG_CLIENT_TEAMDATA_GET_HASINITFROMLINEUP_OFFSET UNITYSDK_OFFSET(0x1855A5A0)
#define RPG_CLIENT_TEAMDATA_GET_ISCANEDITTEAMNAME_OFFSET UNITYSDK_OFFSET(0x1855A660)
#define RPG_CLIENT_TEAMDATA_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x1855A400)
#define RPG_CLIENT_TEAMDATA_GET_ISLOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0x1855A3A0)
#define RPG_CLIENT_TEAMDATA_GET_ISMAINCHARACTERONLYTEAM_OFFSET UNITYSDK_OFFSET(0x1855A3E0)
#define RPG_CLIENT_TEAMDATA_GET_ISMAINLINETEAM_OFFSET UNITYSDK_OFFSET(0x1855A280)
#define RPG_CLIENT_TEAMDATA_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1855A190)
#define RPG_CLIENT_TEAMDATA_GET_LEADERSLOTID_OFFSET UNITYSDK_OFFSET(0x1855A360)
#define RPG_CLIENT_TEAMDATA_GET_LINEUPTYPE_OFFSET UNITYSDK_OFFSET(0x1855A220)
#define RPG_CLIENT_TEAMDATA_GET_LOCKEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1855A600)
#define RPG_CLIENT_TEAMDATA_GET_MAINLINEINDEX_OFFSET UNITYSDK_OFFSET(0x1855A2A0)
#define RPG_CLIENT_TEAMDATA_GET_MEMBERDATAS_OFFSET UNITYSDK_OFFSET(0x18557230)
#define RPG_CLIENT_TEAMDATA_GET_MEMBERLISTDIRTY_OFFSET UNITYSDK_OFFSET(0x1855A5C0)
#define RPG_CLIENT_TEAMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18557580)
#define RPG_CLIENT_TEAMDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x1855A340)
#define RPG_CLIENT_TEAMDATA_GET_REPLACEDMEMBERCACHE_OFFSET UNITYSDK_OFFSET(0x1855A5E0)
#define RPG_CLIENT_TEAMDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1855A320)
#define RPG_CLIENT_TEAMDATA_GET_TEAMLEADER_OFFSET UNITYSDK_OFFSET(0x18559560)
#define RPG_CLIENT_TEAMDATA_GET_TEAMLIMITIDS_OFFSET UNITYSDK_OFFSET(0x1855A640)
#define RPG_CLIENT_TEAMDATA_LOCALREMOVEASSISTMEMBER_OFFSET UNITYSDK_OFFSET(0x185597E0)
#define RPG_CLIENT_TEAMDATA_LOCALRESTOREREPLACEDMEMBER_OFFSET UNITYSDK_OFFSET(0x18559D80)
#define RPG_CLIENT_TEAMDATA_SETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18557730)
#define RPG_CLIENT_TEAMDATA_SET_AVAILABLETRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1855A630)
#define RPG_CLIENT_TEAMDATA_SET_HASINITFROMLINEUP_OFFSET UNITYSDK_OFFSET(0x1855A5B0)
#define RPG_CLIENT_TEAMDATA_SET_ISCANEDITTEAMNAME_OFFSET UNITYSDK_OFFSET(0x1855A670)
#define RPG_CLIENT_TEAMDATA_SET_ISMAINCHARACTERONLYTEAM_OFFSET UNITYSDK_OFFSET(0x1855A3F0)
#define RPG_CLIENT_TEAMDATA_SET_ISMAINLINETEAM_OFFSET UNITYSDK_OFFSET(0x1855A290)
#define RPG_CLIENT_TEAMDATA_SET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x185571E0)
#define RPG_CLIENT_TEAMDATA_SET_LINEUPTYPE_OFFSET UNITYSDK_OFFSET(0x1855A230)
#define RPG_CLIENT_TEAMDATA_SET_LOCKEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1855A610)
#define RPG_CLIENT_TEAMDATA_SET_MAINLINEINDEX_OFFSET UNITYSDK_OFFSET(0x1855A2B0)
#define RPG_CLIENT_TEAMDATA_SET_MEMBERDATAS_OFFSET UNITYSDK_OFFSET(0x1855A1D0)
#define RPG_CLIENT_TEAMDATA_SET_MEMBERLISTDIRTY_OFFSET UNITYSDK_OFFSET(0x1855A5D0)
#define RPG_CLIENT_TEAMDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18557670)
#define RPG_CLIENT_TEAMDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0x1855A350)
#define RPG_CLIENT_TEAMDATA_SET_REPLACEDMEMBERCACHE_OFFSET UNITYSDK_OFFSET(0x1855A5F0)
#define RPG_CLIENT_TEAMDATA_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1855A330)
#define RPG_CLIENT_TEAMDATA_SET_TEAMLIMITIDS_OFFSET UNITYSDK_OFFSET(0x1855A650)
#define RPG_CLIENT_TEAMDATA_SWITCHTEAMLEADERTO_OFFSET UNITYSDK_OFFSET(0x185589B0)
#define RPG_CLIENT_TEAMDATA_TRYREMOVEMEMBERBYID_OFFSET UNITYSDK_OFFSET(0x18558B10)
#define RPG_CLIENT_TEAMDATA_UPDATEMEMBERSINSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18557780)
#define RPG_CLIENT_TEAMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1855A680)
#define RPG_CLIENT_TEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18556A90)
#define RPG_CLIENT_TEAMDATA__LOCALSWITCHLEADERWHENMEMBERLEAVE_OFFSET UNITYSDK_OFFSET(0x18559B20)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamData_TypeDefinitionIndex = 65104;

	class TeamData : public ::System::Object
	{
	public:
		static ::RPG::Client::TeamData** StaticGet_EmptyTeamData()
		{
			return (::RPG::Client::TeamData**)Il2CppClass::FromTypeDefinitionIndex(TeamData_TypeDefinitionIndex)->GetStaticField(0x1ACD0);
		}
		static ::System::UInt32* StaticGet_MAX_MEMBER_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TeamData_TypeDefinitionIndex)->GetStaticField(0x62F0);
		}
		// static const ::System::Int32 s_InvalidTeamLeaderSlotID = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _LockedAvatarIDs_k__BackingField; // 0x10
		::RPG::Client::TeamData* _SnapShotData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AdventureBuffData>* _AdventureBuffDatas; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableTrialAvatarIDs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _TeamLimitIDs_k__BackingField; // 0x30
		::RPG::Client::MemberData* _ReplacedMemberCache_k__BackingField; // 0x38
		::Il2CppArray<::RPG::Client::MemberData*>* _MemberDatas; // 0x40
		::System::String* _Name; // 0x48
		::RPG::GameCore::FixPoint MP; // 0x50
		::RPG::Client::TextID _NameTextID; // 0x58
		::System::UInt32 _MainLineIndex_k__BackingField; // 0x68
		::System::UInt32 _PlaneID_k__BackingField; // 0x6C
		::System::Int32 _leaderSlotIdId; // 0x70
		::System::Boolean _IsMainlineTeam_k__BackingField; // 0x74
		::System::Boolean _MemberListDirty_k__BackingField; // 0x75
		::System::Boolean _IsLocalEditTeam; // 0x76
		::System::Boolean _HasInitFromLineup_k__BackingField; // 0x77
		::System::Boolean _IsCanEditTeamName_k__BackingField; // 0x78
		::System::Boolean _IsMainCharacterOnlyTeam_k__BackingField; // 0x79
		::System::Boolean _IsVirtual; // 0x7A
		::RPG::GameCore::FixPoint MPMax; // 0x80
		::Enum_3_63C076C405BE0674_2 _LineupType_k__BackingField; // 0x88
		::System::UInt32 _StoryLineID_k__BackingField; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TeamData* Create(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::RPG::Client::TeamData*(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::TeamData* CreateMainlineTeam(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATEMAINLINETEAM_OFFSET))(a1);
		}

		static ::RPG::Client::TeamData* CreateReturnTrialAvatarTeam()
		{
			return ((::RPG::Client::TeamData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATERETURNTRIALAVATARTEAM_OFFSET))();
		}

		static ::RPG::Client::TeamData* CreateStoryLineTeam(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATESTORYLINETEAM_OFFSET))(a1);
		}

		static ::RPG::Client::TeamData* CreateLocalEditTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2, ::Enum_3_63C076C405BE0674_2 a3)
		{
			return ((::RPG::Client::TeamData*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATELOCALEDITTEAM_OFFSET))(a1, a2, a3);
		}

		::System::Void CreateSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATESNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::TeamData* CreateTempSnapshot()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATETEMPSNAPSHOT_OFFSET))(this);
		}

		::System::Void DeleteSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_DELETESNAPSHOT_OFFSET))(this);
		}

		::System::Void SetSnapShot(::RPG::Client::TeamData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SETSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Void UpdateMembersInSnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_UPDATEMEMBERSINSNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetSnapShotOrSelf()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETSNAPSHOTORSELF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllMemberAvatars(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETALLMEMBERAVATARS_OFFSET))(this, a1);
		}

		::System::Boolean CanReplaceMemberAvatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CANREPLACEMEMBERAVATARS_OFFSET))(this, a1);
		}

		::System::Void SwitchTeamLeaderTo(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SWITCHTEAMLEADERTO_OFFSET))(this, a1, a2);
		}

		::System::Void TryRemoveMemberById(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_TRYREMOVEMEMBERBYID_OFFSET))(this, a1);
		}

		::RPG::Client::MemberData* GetMemberData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MemberData* GetMemberDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::MemberData* GetMemberDataByRoleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERDATABYROLEID_OFFSET))(this, a1);
		}

		::RPG::Client::MemberData* GetMemberDataByIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERDATABYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetSlotByAvatarID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETSLOTBYAVATARID_OFFSET))(this, a1);
		}

		::System::Int32 GetSlotByAvatarRealID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETSLOTBYAVATARREALID_OFFSET))(this, a1);
		}

		::System::Int32 GetIndexByAvatarID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETINDEXBYAVATARID_OFFSET))(this, a1);
		}

		::System::Int32 GetFirstEmptySlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETFIRSTEMPTYSLOTINDEX_OFFSET))(this);
		}

		::System::Boolean CheckIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CHECKISEMPTY_OFFSET))(this);
		}

		::System::Void ClearMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CLEARMEMBERS_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetLeaderDamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETLEADERDAMAGETYPE_OFFSET))(this);
		}

		::System::Single GetCombatPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETCOMBATPOWER_OFFSET))(this);
		}

		::RPG::Client::MemberData* GetAssistMember()
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETASSISTMEMBER_OFFSET))(this);
		}

		::System::Int32 GetAssistMemberSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETASSISTMEMBERSLOT_OFFSET))(this);
		}

		::System::Void LocalRemoveAssistMember()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_LOCALREMOVEASSISTMEMBER_OFFSET))(this);
		}

		::System::Void LocalRestoreReplacedMember()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_LOCALRESTOREREPLACEDMEMBER_OFFSET))(this);
		}

		::System::Void CacheReplacedMember()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CACHEREPLACEDMEMBER_OFFSET))(this);
		}

		::System::Void ClearReplacedMemberIfReJoin(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CLEARREPLACEDMEMBERIFREJOIN_OFFSET))(this, a1);
		}

		::System::Void ClearReplacedMemberCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CLEARREPLACEDMEMBERCACHE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETTRIALAVATARIDS_OFFSET))(this);
		}

		::System::Void _LocalSwitchLeaderWhenMemberLeave(::RPG::Client::MemberData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA__LOCALSWITCHLEADERWHENMEMBERLEAVE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::Client::MemberData*>* get_MemberDatas()
		{
			return ((::Il2CppArray<::RPG::Client::MemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_MEMBERDATAS_OFFSET))(this);
		}

		::System::Void set_MemberDatas(::Il2CppArray<::RPG::Client::MemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_MEMBERDATAS_OFFSET))(this, a1);
		}

		::Enum_3_63C076C405BE0674_2 get_LineupType()
		{
			return ((::Enum_3_63C076C405BE0674_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_LINEUPTYPE_OFFSET))(this);
		}

		::System::Void set_LineupType(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_LINEUPTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AdventureBuffData>* get_AdventureBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AdventureBuffData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ADVENTUREBUFFDATAS_OFFSET))(this);
		}

		::System::Boolean get_IsMainlineTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISMAINLINETEAM_OFFSET))(this);
		}

		::System::Void set_IsMainlineTeam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_ISMAINLINETEAM_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainLineIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_MAINLINEINDEX_OFFSET))(this);
		}

		::System::Void set_MainLineIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_MAINLINEINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_DisplayMainLineIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_DISPLAYMAINLINEINDEX_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_STORYLINEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_PLANEID_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_LeaderSlotID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_LEADERSLOTID_OFFSET))(this);
		}

		::RPG::Client::MemberData* get_TeamLeader()
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_TEAMLEADER_OFFSET))(this);
		}

		::System::Boolean get_IsVirtual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISVIRTUAL_OFFSET))(this);
		}

		::System::Void set_IsVirtual(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_ISVIRTUAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLocalEditTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISLOCALEDITTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsMainCharacterOnlyTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISMAINCHARACTERONLYTEAM_OFFSET))(this);
		}

		::System::Void set_IsMainCharacterOnlyTeam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_ISMAINCHARACTERONLYTEAM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISFULL_OFFSET))(this);
		}

		::System::Boolean get_HasInitFromLineup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_HASINITFROMLINEUP_OFFSET))(this);
		}

		::System::Void set_HasInitFromLineup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_HASINITFROMLINEUP_OFFSET))(this, a1);
		}

		::System::Boolean get_MemberListDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_MEMBERLISTDIRTY_OFFSET))(this);
		}

		::System::Void set_MemberListDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_MEMBERLISTDIRTY_OFFSET))(this, a1);
		}

		::RPG::Client::MemberData* get_ReplacedMemberCache()
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_REPLACEDMEMBERCACHE_OFFSET))(this);
		}

		::System::Void set_ReplacedMemberCache(::RPG::Client::MemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_REPLACEDMEMBERCACHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LockedAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_LOCKEDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_LockedAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_LOCKEDAVATARIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_AVAILABLETRIALAVATARIDS_OFFSET))(this);
		}

		::System::Void set_AvailableTrialAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_AVAILABLETRIALAVATARIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TeamLimitIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_TEAMLIMITIDS_OFFSET))(this);
		}

		::System::Void set_TeamLimitIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_TEAMLIMITIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanEditTeamName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISCANEDITTEAMNAME_OFFSET))(this);
		}

		::System::Void set_IsCanEditTeamName(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_ISCANEDITTEAMNAME_OFFSET))(this, a1);
		}
	};
}
