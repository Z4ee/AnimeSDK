#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreCharacterStatus.h"
#include "unitysdk/RPG/Client/PreReleaseCharaParam_ScheduleInfo.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_15;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_PRERELEASECHARAPARAM_CREATEEXTERNAL_OFFSET UNITYSDK_OFFSET(0xC4B4B90)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETAVATARID_OFFSET UNITYSDK_OFFSET(0xC4B4C70)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0xC4B4FE0)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETNAME_OFFSET UNITYSDK_OFFSET(0xC4B4D60)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETPATHNAME_OFFSET UNITYSDK_OFFSET(0xC4B4E80)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETSMALLPATHICONPATH_OFFSET UNITYSDK_OFFSET(0xC4B4F40)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISADVERTISING_OFFSET UNITYSDK_OFFSET(0xC4B5340)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISCOLLABORATION_OFFSET UNITYSDK_OFFSET(0xC4B53A0)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISUPCOMINGREMASTER_OFFSET UNITYSDK_OFFSET(0xC4B5220)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISUPRELEASING_OFFSET UNITYSDK_OFFSET(0xC4B52A0)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC4B4CD0)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC4B5040)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET__SCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0xC4B4B70)
#define RPG_CLIENT_PRERELEASECHARAPARAM_SETSCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0xC4B5440)
#define RPG_CLIENT_PRERELEASECHARAPARAM_SET__SCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0xC4B4B80)
#define RPG_CLIENT_PRERELEASECHARAPARAM_UPDATEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xC4B5510)
#define RPG_CLIENT_PRERELEASECHARAPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B4B60)

namespace RPG::Client
{
	inline static constexpr unsigned int PreReleaseCharaParam_TypeDefinitionIndex = 61376;

	class PreReleaseCharaParam : public ::System::Object
	{
	public:
		::System::String* AvatarIconPath; // 0x10
		::System::String* AvatarMiniIconPath; // 0x18
		::System::String* AvatarShopIconPath; // 0x20
		::RPG::AvatarSystem::IAvatar* AvatarDataRef; // 0x28
		::System::String* AvatarTeamIconPath; // 0x30
		::System::UInt32 Rarity; // 0x38
		::System::UInt32 PreAvatarID; // 0x3C
		::System::UInt32 SortIndex; // 0x40
		::RPG::Client::PreReleaseCharaParam_ScheduleInfo __ScheduleInfo_k__BackingField; // 0x44
		::RPG::GameCore::AvatarBaseType BaseType; // 0x4C
		::RPG::GameCore::AttackDamageType DamageType; // 0x50
		::System::UInt32 Set4ID; // 0x54
		::System::UInt32 Set2ID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::PreReleaseCharaParam_ScheduleInfo get__ScheduleInfo()
		{
			return ((::RPG::Client::PreReleaseCharaParam_ScheduleInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET__SCHEDULEINFO_OFFSET))(this);
		}

		::System::Void set__ScheduleInfo(::RPG::Client::PreReleaseCharaParam_ScheduleInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreReleaseCharaParam_ScheduleInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_SET__SCHEDULEINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::PreReleaseCharaParam* CreateExternal(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_CREATEEXTERNAL_OFFSET))(a1);
		}

		::System::UInt32 GetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETAVATARID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETNAME_OFFSET))(this);
		}

		::RPG::Client::TextID GetPathName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETPATHNAME_OFFSET))(this);
		}

		::System::String* GetSmallPathIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETSMALLPATHICONPATH_OFFSET))(this);
		}

		::System::String* GetMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETMINIICONPATH_OFFSET))(this);
		}

		::RPG::Client::PreCharacterStatus get_Status()
		{
			return ((::RPG::Client::PreCharacterStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean get_IsUpcomingRemaster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISUPCOMINGREMASTER_OFFSET))(this);
		}

		::System::Boolean get_IsUpReleasing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISUPRELEASING_OFFSET))(this);
		}

		::System::Boolean get_IsAdvertising()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISADVERTISING_OFFSET))(this);
		}

		::System::Boolean get_IsCollaboration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISCOLLABORATION_OFFSET))(this);
		}

		::System::Void SetScheduleInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_SETSCHEDULEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateParamInfo(::Class_1_21DCD4640D389503_15* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_UPDATEPARAMINFO_OFFSET))(this, a1);
		}
	};
}
