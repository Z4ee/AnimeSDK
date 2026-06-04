#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerStaminaData.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_12.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client { class TeamData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERDATA_GETCURRENTHEROGENDER_OFFSET UNITYSDK_OFFSET(0xC49CBD0)
#define RPG_CLIENT_PLAYERDATA_GETSTORYHEROGENDER_OFFSET UNITYSDK_OFFSET(0xC49CC60)
#define RPG_CLIENT_PLAYERDATA_GET_ASSISTAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC49C3F0)
#define RPG_CLIENT_PLAYERDATA_GET_BASICINFODATA_OFFSET UNITYSDK_OFFSET(0xC49C800)
#define RPG_CLIENT_PLAYERDATA_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xC49C930)
#define RPG_CLIENT_PLAYERDATA_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0xC49C880)
#define RPG_CLIENT_PLAYERDATA_GET_DISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC49C3D0)
#define RPG_CLIENT_PLAYERDATA_GET_EXPUP_OFFSET UNITYSDK_OFFSET(0xC49C4F0)
#define RPG_CLIENT_PLAYERDATA_GET_HASASSIST_OFFSET UNITYSDK_OFFSET(0xC49C410)
#define RPG_CLIENT_PLAYERDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xC49C920)
#define RPG_CLIENT_PLAYERDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xC48BB50)
#define RPG_CLIENT_PLAYERDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xC49CA10)
#define RPG_CLIENT_PLAYERDATA_GET_ISDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC49C3B0)
#define RPG_CLIENT_PLAYERDATA_GET_ISFEMALE_OFFSET UNITYSDK_OFFSET(0xC49CB80)
#define RPG_CLIENT_PLAYERDATA_GET_ISMALE_OFFSET UNITYSDK_OFFSET(0xC49CC10)
#define RPG_CLIENT_PLAYERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC49C350)
#define RPG_CLIENT_PLAYERDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xC49C2A0)
#define RPG_CLIENT_PLAYERDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xC4947F0)
#define RPG_CLIENT_PLAYERDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xC48BD80)
#define RPG_CLIENT_PLAYERDATA_GET_REGISTERCPS_OFFSET UNITYSDK_OFFSET(0xC49C390)
#define RPG_CLIENT_PLAYERDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xC494780)
#define RPG_CLIENT_PLAYERDATA_GET_STAMINADATA_OFFSET UNITYSDK_OFFSET(0xC49C840)
#define RPG_CLIENT_PLAYERDATA_GET_STAMINA_OFFSET UNITYSDK_OFFSET(0xC49C710)
#define RPG_CLIENT_PLAYERDATA_GET_TEAMDATA_OFFSET UNITYSDK_OFFSET(0xC49C7F0)
#define RPG_CLIENT_PLAYERDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0xC49C280)
#define RPG_CLIENT_PLAYERDATA_GET_WEEKCOCOONCOUNT_OFFSET UNITYSDK_OFFSET(0xC49C750)
#define RPG_CLIENT_PLAYERDATA_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xC49C370)
#define RPG_CLIENT_PLAYERDATA_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xC49C6A0)
#define RPG_CLIENT_PLAYERDATA_SETCURRENTHEROGENDER_OFFSET UNITYSDK_OFFSET(0xC49CCC0)
#define RPG_CLIENT_PLAYERDATA_SETHEROGENDERAUDIO_OFFSET UNITYSDK_OFFSET(0xC49CD40)
#define RPG_CLIENT_PLAYERDATA_SET_ASSISTAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC49C400)
#define RPG_CLIENT_PLAYERDATA_SET_BASICINFODATA_OFFSET UNITYSDK_OFFSET(0xC49C820)
#define RPG_CLIENT_PLAYERDATA_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xC49C940)
#define RPG_CLIENT_PLAYERDATA_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0xC49C8D0)
#define RPG_CLIENT_PLAYERDATA_SET_DISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC49C3E0)
#define RPG_CLIENT_PLAYERDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xC49C9B0)
#define RPG_CLIENT_PLAYERDATA_SET_ISDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC49C3C0)
#define RPG_CLIENT_PLAYERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC49C360)
#define RPG_CLIENT_PLAYERDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xC49C2B0)
#define RPG_CLIENT_PLAYERDATA_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xC49C950)
#define RPG_CLIENT_PLAYERDATA_SET_REGISTERCPS_OFFSET UNITYSDK_OFFSET(0xC49C3A0)
#define RPG_CLIENT_PLAYERDATA_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xC49CAE0)
#define RPG_CLIENT_PLAYERDATA_SET_STAMINADATA_OFFSET UNITYSDK_OFFSET(0xC49C860)
#define RPG_CLIENT_PLAYERDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0xC49C290)
#define RPG_CLIENT_PLAYERDATA_SET_WEEKCOCOONCOUNT_OFFSET UNITYSDK_OFFSET(0xC49C7A0)
#define RPG_CLIENT_PLAYERDATA_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xC49C380)
#define RPG_CLIENT_PLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC49CF00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerData_TypeDefinitionIndex = 62356;

	class PlayerData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 HERO_AVATAR_ID_BASE = 0x1F41; // 0x0
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _DisplayAvatarList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* GottenLevelRewards; // 0x20
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x28
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x30
		::System::String* _NickName; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UnGottenLevelRewards; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _AssistAvatarIDs_k__BackingField; // 0x48
		::RPG::Client::TeamData* _TeamData_k__BackingField; // 0x50
		::System::String* _RegisterCPS_k__BackingField; // 0x58
		::System::UInt32 HCoin; // 0x60
		::System::Boolean _IsDisplayAvatarList_k__BackingField; // 0x64
		::System::Boolean IsGenderSelected; // 0x65
		::System::UInt32 _WorldLevel_k__BackingField; // 0x68
		::RPG::GameCore::GenderType _Gender; // 0x6C
		::System::UInt32 Exp; // 0x70
		::RPG::Client::PlayerStaminaData _StaminaData; // 0x78
		::System::UInt32 MCoin; // 0x90
		::System::UInt32 _Level_k__BackingField; // 0x94
		::System::UInt32 SCoin; // 0x98
		::Struct_2_884CDB9D0FDFAF0D_12 _BasicInfoData; // 0x9C
		::System::UInt32 _Birthday_k__BackingField; // 0xA8
		::System::UInt32 _UserID_k__BackingField; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_USERID_OFFSET))(this, a1);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_NICKNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_WORLDLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_RegisterCPS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_REGISTERCPS_OFFSET))(this);
		}

		::System::Void set_RegisterCPS(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_REGISTERCPS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplayAvatarList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISDISPLAYAVATARLIST_OFFSET))(this);
		}

		::System::Void set_IsDisplayAvatarList(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_ISDISPLAYAVATARLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DisplayAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_DISPLAYAVATARLIST_OFFSET))(this);
		}

		::System::Void set_DisplayAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_DISPLAYAVATARLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AssistAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ASSISTAVATARIDS_OFFSET))(this);
		}

		::System::Void set_AssistAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_ASSISTAVATARIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HASASSIST_OFFSET))(this);
		}

		::System::UInt32 get_ExpUp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_EXPUP_OFFSET))(this);
		}

		::System::UInt32 get_Stamina()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_STAMINA_OFFSET))(this);
		}

		::System::UInt32 get_WeekCocoonCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_WEEKCOCOONCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekCocoonCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_WEEKCOCOONCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::TeamData* get_TeamData()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_TEAMDATA_OFFSET))(this);
		}

		::System::Boolean IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_ISLEVELMAX_OFFSET))(this);
		}

		::Struct_2_884CDB9D0FDFAF0D_12 get_BasicInfoData()
		{
			return ((::Struct_2_884CDB9D0FDFAF0D_12(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_BASICINFODATA_OFFSET))(this);
		}

		::System::Void set_BasicInfoData(::Struct_2_884CDB9D0FDFAF0D_12 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_884CDB9D0FDFAF0D_12))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_BASICINFODATA_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerStaminaData get_StaminaData()
		{
			return ((::RPG::Client::PlayerStaminaData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_STAMINADATA_OFFSET))(this);
		}

		::System::Void set_StaminaData(::RPG::Client::PlayerStaminaData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStaminaData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_STAMINADATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_CURDAY_OFFSET))(this, a1);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::UInt32 get_Birthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Void set_Birthday(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_BIRTHDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_PERSONALCARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_SIGNATURE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Boolean get_IsFemale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISFEMALE_OFFSET))(this);
		}

		::System::Boolean get_IsMale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISMALE_OFFSET))(this);
		}

		::RPG::GameCore::GenderType GetCurrentHeroGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GETCURRENTHEROGENDER_OFFSET))(this);
		}

		::RPG::GameCore::GenderType GetStoryHeroGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GETSTORYHEROGENDER_OFFSET))(this);
		}

		::System::Void SetCurrentHeroGender(::RPG::GameCore::GenderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SETCURRENTHEROGENDER_OFFSET))(this, a1);
		}

		::System::Void SetHeroGenderAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SETHEROGENDERAUDIO_OFFSET))(this);
		}
	};
}
