#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_5.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_ADDFRIENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9C7C130)
#define RPG_CLIENT_ADDFRIENDDATA_GET_FRIENDAPPLYSOURCE_OFFSET UNITYSDK_OFFSET(0x9C7C110)
#define RPG_CLIENT_ADDFRIENDDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9C7C0B0)
#define RPG_CLIENT_ADDFRIENDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9C7C0D0)
#define RPG_CLIENT_ADDFRIENDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9C7C090)
#define RPG_CLIENT_ADDFRIENDDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x9C7C0F0)
#define RPG_CLIENT_ADDFRIENDDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x9C7C070)
#define RPG_CLIENT_ADDFRIENDDATA_SET_FRIENDAPPLYSOURCE_OFFSET UNITYSDK_OFFSET(0x9C7C120)
#define RPG_CLIENT_ADDFRIENDDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9C7C0C0)
#define RPG_CLIENT_ADDFRIENDDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9C7C0E0)
#define RPG_CLIENT_ADDFRIENDDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9C7C0A0)
#define RPG_CLIENT_ADDFRIENDDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x9C7C100)
#define RPG_CLIENT_ADDFRIENDDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x9C7C080)
#define RPG_CLIENT_ADDFRIENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C7C2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AddFriendData_TypeDefinitionIndex = 59110;

	class AddFriendData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::Enum_3_0F1B992870941C13_5 _FriendApplySource_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x24
		::System::UInt32 _UID_k__BackingField; // 0x28
		::System::UInt32 _HeadIconID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_UID_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_PLATFORMINFO_OFFSET))(this, value);
		}

		::Enum_3_0F1B992870941C13_5 get_FriendApplySource()
		{
			return ((::Enum_3_0F1B992870941C13_5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_FRIENDAPPLYSOURCE_OFFSET))(this);
		}

		::System::Void set_FriendApplySource(::Enum_3_0F1B992870941C13_5 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_5))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_FRIENDAPPLYSOURCE_OFFSET))(this, value);
		}

		static ::RPG::Client::AddFriendData* Create(::System::UInt32 uid, ::System::String* name, ::System::UInt32 headIconID, ::System::UInt32 level, ::RPG::Client::PlayerPlatformInfo* platformInfo, ::Enum_3_0F1B992870941C13_5 friendApplySource)
		{
			return ((::RPG::Client::AddFriendData*(*)(::System::UInt32, ::System::String*, ::System::UInt32, ::System::UInt32, ::RPG::Client::PlayerPlatformInfo*, ::Enum_3_0F1B992870941C13_5))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_CREATE_OFFSET))(uid, name, headIconID, level, platformInfo, friendApplySource);
		}
	};
}
