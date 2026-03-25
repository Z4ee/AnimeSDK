#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_29.h"
#include "unitysdk/System/Object.h"

class Class_1_4AA6AAA49C7B466C;
class Class_1_6E708EAB438EC183_4;
class Class_1_A16A135FC5A0DDB9_1;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERBOARDINFO_CREATEBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9FDBE10)
#define RPG_CLIENT_PLAYERBOARDINFO_CREATEBYPLAYERDETAILINFO_OFFSET UNITYSDK_OFFSET(0x9FDC6D0)
#define RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARS_OFFSET UNITYSDK_OFFSET(0x9FDD560)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0x9FDD330)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0x9FDD0A0)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9FDD2D0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ASSISTAVATARID_OFFSET UNITYSDK_OFFSET(0x9FDDE50)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x9FDDC20)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_BOOKCOUNT_OFFSET UNITYSDK_OFFSET(0x9FDDE00)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9FDDD00)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x9FDDD60)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x9FDDDA0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x9FDDD40)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x9FDDD20)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HASBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x9FDDCE0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x9FDDE40)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9FDDFA0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x9FDDDC0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x9FDCFF0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_MUSICCOUNT_OFFSET UNITYSDK_OFFSET(0x9FDDE20)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9FDDC00)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x9FDDFF0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x9FDDBC0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x9FDDDE0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_REMARKNAME_OFFSET UNITYSDK_OFFSET(0x9FDDAD0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9FDE010)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0x9FDDBA0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x9FDDD80)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9FDDBE0)
#define RPG_CLIENT_PLAYERBOARDINFO_REFRESHBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9FDC090)
#define RPG_CLIENT_PLAYERBOARDINFO_REFRESHCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x9FDCD20)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_BOOKCOUNT_OFFSET UNITYSDK_OFFSET(0x9FDDE10)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9FDDD10)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x9FDDD70)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x9FDDDB0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x9FDDD50)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x9FDDD30)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9FDCC60)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x9FDDDD0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_MUSICCOUNT_OFFSET UNITYSDK_OFFSET(0x9FDDE30)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9FDDC10)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x9FDCCC0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x9FDDBD0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x9FDDDF0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9FDCBC0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0x9FDDBB0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x9FDDD90)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9FDDBF0)
#define RPG_CLIENT_PLAYERBOARDINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FDE080)
#define RPG_CLIENT_PLAYERBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDBF20)
#define RPG_CLIENT_PLAYERBOARDINFO__INITASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x9FDCFA0)
#define RPG_CLIENT_PLAYERBOARDINFO__INITDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9FDCD90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBoardInfo_TypeDefinitionIndex = 54265;

	class PlayerBoardInfo : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MAXDISPLAYCOUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerBoardInfo_TypeDefinitionIndex)->GetStaticField(0x127F0);
		}
		::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>* _AssistAvatarDetailInfos; // 0x10
		::System::String* _NickName_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* DisplayAvatarList; // 0x20
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _AssistAvatars; // 0x30
		::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>* _DisplayAvatarDetailInfos; // 0x38
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _DisplayAvatars; // 0x48
		::Class_1_6E708EAB438EC183_4* _PlayerOutfit_k__BackingField; // 0x50
		::RPG::Client::PlayerPlatformInfo* PlatformInfo; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _LocalAssistAvatarIDs; // 0x60
		::Enum_3_0A3761FE34514D6C_29 _DisplayRecordType_k__BackingField; // 0x68
		::System::UInt32 _MusicCount_k__BackingField; // 0x6C
		::System::Boolean IsDisplayAvatarList; // 0x70
		::System::Boolean _DisplayOnlineStatus_k__BackingField; // 0x71
		::System::Boolean IsBanned; // 0x72
		::System::Boolean _DisplayCollection_k__BackingField; // 0x73
		::System::UInt32 _Birthday; // 0x74
		::System::UInt32 _WorldLevel_k__BackingField; // 0x78
		::System::Boolean _UploadRecordTeam_k__BackingField; // 0x7C
		::System::Boolean _DisplayDiary_k__BackingField; // 0x7D
		::System::Boolean _IsDisplayHeadFrame_k__BackingField; // 0x7E
		::System::Boolean _DisplayRecord_k__BackingField; // 0x7F
		::System::UInt32 AchievementCount; // 0x80
		::System::UInt32 _PlayerLevel_k__BackingField; // 0x84
		::System::UInt32 _UID_k__BackingField; // 0x88
		::System::UInt32 AvatarCount; // 0x8C
		::System::UInt32 _BookCount_k__BackingField; // 0x90
		::System::UInt32 LightConeCount; // 0x94

		::System::Void _ctor(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__CTOR_OFFSET))(this, uid);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__CCTOR_OFFSET))();
		}

		static ::RPG::Client::PlayerBoardInfo* CreateByLocalPlayerData()
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_CREATEBYLOCALPLAYERDATA_OFFSET))();
		}

		static ::RPG::Client::PlayerBoardInfo* CreateByPlayerDetailInfo(::Class_1_4AA6AAA49C7B466C* detailInfo)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_CREATEBYPLAYERDETAILINFO_OFFSET))(detailInfo);
		}

		::System::Void RefreshByLocalPlayerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_REFRESHBYLOCALPLAYERDATA_OFFSET))(this);
		}

		::System::Void RefreshCollectionData(::Class_1_A16A135FC5A0DDB9_1* recordInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_REFRESHCOLLECTIONDATA_OFFSET))(this, recordInfo);
		}

		::RPG::Client::IAvatarInfoProvider* GetDisplayAvatar(::System::Int32 pos)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATAR_OFFSET))(this, pos);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetDisplayAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAssistAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARS_OFFSET))(this);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::Void _InitDisplayAvatarList(::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>* displayAvatarInfos)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__INITDISPLAYAVATARLIST_OFFSET))(this, displayAvatarInfos);
		}

		::System::Void _InitAssistAvatar(::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>* avatarInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__INITASSISTAVATAR_OFFSET))(this, avatarInfos);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_PlayerLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYERLEVEL_OFFSET))(this);
		}

		::System::Void set_PlayerLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYERLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_WORLDLEVEL_OFFSET))(this, value);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_NICKNAME_OFFSET))(this, value);
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

		::System::Void set_DisplayCollection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYCOLLECTION_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORD_OFFSET))(this);
		}

		::System::Void set_DisplayRecord(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORD_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_29 get_DisplayRecordType()
		{
			return ((::Enum_3_0A3761FE34514D6C_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORDTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayRecordType(::Enum_3_0A3761FE34514D6C_29 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORDTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayDiary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYDIARY_OFFSET))(this);
		}

		::System::Void set_DisplayDiary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYDIARY_OFFSET))(this, value);
		}

		::System::Boolean get_UploadRecordTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_UPLOADRECORDTEAM_OFFSET))(this);
		}

		::System::Void set_UploadRecordTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_UPLOADRECORDTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayOnlineStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_DisplayOnlineStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYONLINESTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplayHeadFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_ISDISPLAYHEADFRAME_OFFSET))(this);
		}

		::System::Void set_IsDisplayHeadFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_ISDISPLAYHEADFRAME_OFFSET))(this, value);
		}

		::Class_1_6E708EAB438EC183_4* get_PlayerOutfit()
		{
			return ((::Class_1_6E708EAB438EC183_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::Class_1_6E708EAB438EC183_4* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYEROUTFIT_OFFSET))(this, value);
		}

		::System::UInt32 get_BookCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_BOOKCOUNT_OFFSET))(this);
		}

		::System::Void set_BookCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_BOOKCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MusicCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_MUSICCOUNT_OFFSET))(this);
		}

		::System::Void set_MusicCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_MUSICCOUNT_OFFSET))(this, value);
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

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PERSONALCARDID_OFFSET))(this, value);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_SIGNATURE_OFFSET))(this, value);
		}
	};
}
