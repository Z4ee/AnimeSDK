#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_21DCD4640D389503_24;
class Class_1_A16A135FC5A0DDB9_3;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERBOARDINFO_CREATEBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xC493400)
#define RPG_CLIENT_PLAYERBOARDINFO_CREATEBYPLAYERDETAILINFO_OFFSET UNITYSDK_OFFSET(0xC493D10)
#define RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARS_OFFSET UNITYSDK_OFFSET(0xC494D30)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0xC494A90)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0xC494810)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xC494A30)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ASSISTAVATARID_OFFSET UNITYSDK_OFFSET(0xC495680)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xC495430)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_BOOKCOUNT_OFFSET UNITYSDK_OFFSET(0xC495630)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC495510)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0xC495570)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0xC4955B0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0xC495550)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0xC495530)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HASBIRTHDAY_OFFSET UNITYSDK_OFFSET(0xC4954F0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xC495670)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xC4957F0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0xC4955D0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xC4946D0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_MUSICCOUNT_OFFSET UNITYSDK_OFFSET(0xC495650)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xC495410)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xC495840)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0xC4953D0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0xC495610)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_REMARKNAME_OFFSET UNITYSDK_OFFSET(0xC4952E0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xC495860)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_TRAINPARTYBUILDDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0xC4955F0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0xC4953B0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0xC495590)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xC4953F0)
#define RPG_CLIENT_PLAYERBOARDINFO_REFRESHBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xC493680)
#define RPG_CLIENT_PLAYERBOARDINFO_REFRESHCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xC494380)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_BOOKCOUNT_OFFSET UNITYSDK_OFFSET(0xC495640)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC495520)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0xC495580)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0xC4955C0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0xC495560)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0xC495540)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xC4942C0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0xC4955E0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_MUSICCOUNT_OFFSET UNITYSDK_OFFSET(0xC495660)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xC495420)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xC494320)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0xC4953E0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0xC495620)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xC494220)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_TRAINPARTYBUILDDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0xC495600)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0xC4953C0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0xC4955A0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xC495400)
#define RPG_CLIENT_PLAYERBOARDINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4958D0)
#define RPG_CLIENT_PLAYERBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC493510)
#define RPG_CLIENT_PLAYERBOARDINFO__INITASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0xC494680)
#define RPG_CLIENT_PLAYERBOARDINFO__INITDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC4943F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBoardInfo_TypeDefinitionIndex = 62352;

	class PlayerBoardInfo : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MAXDISPLAYCOUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerBoardInfo_TypeDefinitionIndex)->GetStaticField(0x49A0);
		}
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _AssistAvatars; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* DisplayAvatarList; // 0x18
		::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>* _DisplayAvatarDetailInfos; // 0x20
		::RPG::Client::PlayerPlatformInfo* PlatformInfo; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _LocalAssistAvatarIDs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* _TrainPartyBuildDisplayAreaInfo_k__BackingField; // 0x38
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x40
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x48
		::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>* _AssistAvatarDetailInfos; // 0x50
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _DisplayAvatars; // 0x58
		::System::String* _NickName_k__BackingField; // 0x60
		::Class_1_075C34D03AFA1215_7* _PlayerOutfit_k__BackingField; // 0x68
		::System::Boolean _DisplayOnlineStatus_k__BackingField; // 0x70
		::System::Boolean IsDisplayAvatarList; // 0x71
		::System::Boolean _UploadRecordTeam_k__BackingField; // 0x72
		::System::Boolean IsBanned; // 0x73
		::System::UInt32 _PlayerLevel_k__BackingField; // 0x74
		::System::Boolean _DisplayRecord_k__BackingField; // 0x78
		::System::Boolean _IsDisplayHeadFrame_k__BackingField; // 0x79
		::System::Boolean _DisplayDiary_k__BackingField; // 0x7A
		::System::Boolean _DisplayCollection_k__BackingField; // 0x7B
		::System::UInt32 _Birthday; // 0x7C
		::System::UInt32 _WorldLevel_k__BackingField; // 0x80
		::System::UInt32 AvatarCount; // 0x84
		::System::UInt32 _BookCount_k__BackingField; // 0x88
		::System::UInt32 _MusicCount_k__BackingField; // 0x8C
		::System::UInt32 LightConeCount; // 0x90
		::System::UInt32 _UID_k__BackingField; // 0x94
		::System::UInt32 AchievementCount; // 0x98
		::Enum_3_0A3761FE34514D6C_28 _DisplayRecordType_k__BackingField; // 0x9C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__CCTOR_OFFSET))();
		}

		static ::RPG::Client::PlayerBoardInfo* CreateByLocalPlayerData()
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_CREATEBYLOCALPLAYERDATA_OFFSET))();
		}

		static ::RPG::Client::PlayerBoardInfo* CreateByPlayerDetailInfo(::Class_1_21DCD4640D389503_24* a1)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::Class_1_21DCD4640D389503_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_CREATEBYPLAYERDETAILINFO_OFFSET))(a1);
		}

		::System::Void RefreshByLocalPlayerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_REFRESHBYLOCALPLAYERDATA_OFFSET))(this);
		}

		::System::Void RefreshCollectionData(::Class_1_A16A135FC5A0DDB9_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_REFRESHCOLLECTIONDATA_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GetDisplayAvatar(::System::Int32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetDisplayAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAssistAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARS_OFFSET))(this);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::Void _InitDisplayAvatarList(::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__INITDISPLAYAVATARLIST_OFFSET))(this, a1);
		}

		::System::Void _InitAssistAvatar(::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__INITASSISTAVATAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYERLEVEL_OFFSET))(this);
		}

		::System::Void set_PlayerLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYERLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_WORLDLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_NICKNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_Birthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Boolean get_HasBirthday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_HASBIRTHDAY_OFFSET))(this);
		}

		::System::Boolean get_DisplayCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYCOLLECTION_OFFSET))(this);
		}

		::System::Void set_DisplayCollection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYCOLLECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_DisplayRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORD_OFFSET))(this);
		}

		::System::Void set_DisplayRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORD_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_28 get_DisplayRecordType()
		{
			return ((::Enum_3_0A3761FE34514D6C_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORDTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayRecordType(::Enum_3_0A3761FE34514D6C_28 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORDTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_DisplayDiary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYDIARY_OFFSET))(this);
		}

		::System::Void set_DisplayDiary(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYDIARY_OFFSET))(this, a1);
		}

		::System::Boolean get_UploadRecordTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_UPLOADRECORDTEAM_OFFSET))(this);
		}

		::System::Void set_UploadRecordTeam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_UPLOADRECORDTEAM_OFFSET))(this, a1);
		}

		::System::Boolean get_DisplayOnlineStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_DisplayOnlineStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYONLINESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplayHeadFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_ISDISPLAYHEADFRAME_OFFSET))(this);
		}

		::System::Void set_IsDisplayHeadFrame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_ISDISPLAYHEADFRAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* get_TrainPartyBuildDisplayAreaInfo()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_TRAINPARTYBUILDDISPLAYAREAINFO_OFFSET))(this);
		}

		::System::Void set_TrainPartyBuildDisplayAreaInfo(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_TRAINPARTYBUILDDISPLAYAREAINFO_OFFSET))(this, a1);
		}

		::Class_1_075C34D03AFA1215_7* get_PlayerOutfit()
		{
			return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::Class_1_075C34D03AFA1215_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYEROUTFIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BookCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_BOOKCOUNT_OFFSET))(this);
		}

		::System::Void set_BookCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_BOOKCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MusicCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_MUSICCOUNT_OFFSET))(this);
		}

		::System::Void set_MusicCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_MUSICCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::String* get_RemarkName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_REMARKNAME_OFFSET))(this);
		}

		::System::UInt32 get_AssistAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_ASSISTAVATARID_OFFSET))(this);
		}

		::System::Boolean get_IsLocalPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_ISLOCALPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PERSONALCARDID_OFFSET))(this, a1);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_SIGNATURE_OFFSET))(this, a1);
		}
	};
}
