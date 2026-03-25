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

#define RPG_CLIENT_PLAYERDATA_GETCURRENTHEROGENDER_OFFSET UNITYSDK_OFFSET(0x9FE4170)
#define RPG_CLIENT_PLAYERDATA_GETSTORYHEROGENDER_OFFSET UNITYSDK_OFFSET(0x9FE4200)
#define RPG_CLIENT_PLAYERDATA_GET_ASSISTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9FE33F0)
#define RPG_CLIENT_PLAYERDATA_GET_BASICINFODATA_OFFSET UNITYSDK_OFFSET(0x9FE3850)
#define RPG_CLIENT_PLAYERDATA_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x9FE3980)
#define RPG_CLIENT_PLAYERDATA_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0x9FE38D0)
#define RPG_CLIENT_PLAYERDATA_GET_DISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9FE33D0)
#define RPG_CLIENT_PLAYERDATA_GET_EXPUP_OFFSET UNITYSDK_OFFSET(0x9FE3530)
#define RPG_CLIENT_PLAYERDATA_GET_HASASSIST_OFFSET UNITYSDK_OFFSET(0x9FE3410)
#define RPG_CLIENT_PLAYERDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x9FE3970)
#define RPG_CLIENT_PLAYERDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9FE3B40)
#define RPG_CLIENT_PLAYERDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9FE3C40)
#define RPG_CLIENT_PLAYERDATA_GET_ISDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9FE33B0)
#define RPG_CLIENT_PLAYERDATA_GET_ISFEMALE_OFFSET UNITYSDK_OFFSET(0x9FE4120)
#define RPG_CLIENT_PLAYERDATA_GET_ISMALE_OFFSET UNITYSDK_OFFSET(0x9FE41B0)
#define RPG_CLIENT_PLAYERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9FE3350)
#define RPG_CLIENT_PLAYERDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9FE32A0)
#define RPG_CLIENT_PLAYERDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x9FE39A0)
#define RPG_CLIENT_PLAYERDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x9FE3F00)
#define RPG_CLIENT_PLAYERDATA_GET_REGISTERCPS_OFFSET UNITYSDK_OFFSET(0x9FE3390)
#define RPG_CLIENT_PLAYERDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9FE3D10)
#define RPG_CLIENT_PLAYERDATA_GET_STAMINADATA_OFFSET UNITYSDK_OFFSET(0x9FE3890)
#define RPG_CLIENT_PLAYERDATA_GET_STAMINA_OFFSET UNITYSDK_OFFSET(0x9FE3750)
#define RPG_CLIENT_PLAYERDATA_GET_TEAMDATA_OFFSET UNITYSDK_OFFSET(0x9FE3840)
#define RPG_CLIENT_PLAYERDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0x9FE3280)
#define RPG_CLIENT_PLAYERDATA_GET_WEEKCOCOONCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE37A0)
#define RPG_CLIENT_PLAYERDATA_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9FE3370)
#define RPG_CLIENT_PLAYERDATA_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x9FE36E0)
#define RPG_CLIENT_PLAYERDATA_SETCURRENTHEROGENDER_OFFSET UNITYSDK_OFFSET(0x9FE4260)
#define RPG_CLIENT_PLAYERDATA_SETHEROGENDERAUDIO_OFFSET UNITYSDK_OFFSET(0x9FE42E0)
#define RPG_CLIENT_PLAYERDATA_SET_ASSISTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9FE3400)
#define RPG_CLIENT_PLAYERDATA_SET_BASICINFODATA_OFFSET UNITYSDK_OFFSET(0x9FE3870)
#define RPG_CLIENT_PLAYERDATA_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x9FE3990)
#define RPG_CLIENT_PLAYERDATA_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0x9FE3920)
#define RPG_CLIENT_PLAYERDATA_SET_DISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9FE33E0)
#define RPG_CLIENT_PLAYERDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9FE3BE0)
#define RPG_CLIENT_PLAYERDATA_SET_ISDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9FE33C0)
#define RPG_CLIENT_PLAYERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9FE3360)
#define RPG_CLIENT_PLAYERDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9FE32B0)
#define RPG_CLIENT_PLAYERDATA_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x9FE3AE0)
#define RPG_CLIENT_PLAYERDATA_SET_REGISTERCPS_OFFSET UNITYSDK_OFFSET(0x9FE33A0)
#define RPG_CLIENT_PLAYERDATA_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9FE3DF0)
#define RPG_CLIENT_PLAYERDATA_SET_STAMINADATA_OFFSET UNITYSDK_OFFSET(0x9FE38B0)
#define RPG_CLIENT_PLAYERDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0x9FE3290)
#define RPG_CLIENT_PLAYERDATA_SET_WEEKCOCOONCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE37F0)
#define RPG_CLIENT_PLAYERDATA_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9FE3380)
#define RPG_CLIENT_PLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE44A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerData_TypeDefinitionIndex = 54269;

	class PlayerData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 HERO_AVATAR_ID_BASE = 0x1F41; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _DisplayAvatarList_k__BackingField; // 0x10
		::System::String* _NickName; // 0x18
		::System::String* _RegisterCPS_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UnGottenLevelRewards; // 0x28
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x30
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _AssistAvatarIDs_k__BackingField; // 0x40
		::RPG::Client::TeamData* _TeamData_k__BackingField; // 0x48
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* GottenLevelRewards; // 0x58
		::System::UInt32 SCoin; // 0x60
		::System::UInt32 _Birthday_k__BackingField; // 0x64
		::System::UInt32 _WorldLevel_k__BackingField; // 0x68
		::System::Boolean IsGenderSelected; // 0x6C
		::System::Boolean _IsDisplayAvatarList_k__BackingField; // 0x6D
		::System::UInt32 HCoin; // 0x70
		::System::UInt32 Exp; // 0x74
		::RPG::GameCore::GenderType _Gender; // 0x78
		::System::UInt32 _UserID_k__BackingField; // 0x7C
		::Struct_2_884CDB9D0FDFAF0D_12 _BasicInfoData; // 0x80
		::System::UInt32 MCoin; // 0x8C
		::System::UInt32 _Level_k__BackingField; // 0x90
		::RPG::Client::PlayerStaminaData _StaminaData; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_USERID_OFFSET))(this, value);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_WORLDLEVEL_OFFSET))(this, value);
		}

		::System::String* get_RegisterCPS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_REGISTERCPS_OFFSET))(this);
		}

		::System::Void set_RegisterCPS(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_REGISTERCPS_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplayAvatarList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISDISPLAYAVATARLIST_OFFSET))(this);
		}

		::System::Void set_IsDisplayAvatarList(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_ISDISPLAYAVATARLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DisplayAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_DISPLAYAVATARLIST_OFFSET))(this);
		}

		::System::Void set_DisplayAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_DISPLAYAVATARLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AssistAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ASSISTAVATARIDS_OFFSET))(this);
		}

		::System::Void set_AssistAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_ASSISTAVATARIDS_OFFSET))(this, value);
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

		::System::Void set_WeekCocoonCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_WEEKCOCOONCOUNT_OFFSET))(this, value);
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

		::System::Void set_BasicInfoData(::Struct_2_884CDB9D0FDFAF0D_12 value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_884CDB9D0FDFAF0D_12))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_BASICINFODATA_OFFSET))(this, value);
		}

		::RPG::Client::PlayerStaminaData get_StaminaData()
		{
			return ((::RPG::Client::PlayerStaminaData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_STAMINADATA_OFFSET))(this);
		}

		::System::Void set_StaminaData(::RPG::Client::PlayerStaminaData value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStaminaData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_STAMINADATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_CURDAY_OFFSET))(this, value);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::UInt32 get_Birthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Void set_Birthday(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_BIRTHDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_PERSONALCARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_SIGNATURE_OFFSET))(this, value);
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

		::System::Void SetCurrentHeroGender(::RPG::GameCore::GenderType newHeroGender)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SETCURRENTHEROGENDER_OFFSET))(this, newHeroGender);
		}

		::System::Void SetHeroGenderAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SETHEROGENDERAUDIO_OFFSET))(this);
		}
	};
}
