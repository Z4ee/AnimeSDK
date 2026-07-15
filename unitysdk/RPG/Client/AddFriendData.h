#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_5.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_ADDFRIENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18AAA200)
#define RPG_CLIENT_ADDFRIENDDATA_GET_FRIENDAPPLYSOURCE_OFFSET UNITYSDK_OFFSET(0x18AAA1E0)
#define RPG_CLIENT_ADDFRIENDDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x18AAA180)
#define RPG_CLIENT_ADDFRIENDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18AAA1A0)
#define RPG_CLIENT_ADDFRIENDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18AAA160)
#define RPG_CLIENT_ADDFRIENDDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x18AAA1C0)
#define RPG_CLIENT_ADDFRIENDDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x18AAA140)
#define RPG_CLIENT_ADDFRIENDDATA_SET_FRIENDAPPLYSOURCE_OFFSET UNITYSDK_OFFSET(0x18AAA1F0)
#define RPG_CLIENT_ADDFRIENDDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x18AAA190)
#define RPG_CLIENT_ADDFRIENDDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18AAA1B0)
#define RPG_CLIENT_ADDFRIENDDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18AAA170)
#define RPG_CLIENT_ADDFRIENDDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x18AAA1D0)
#define RPG_CLIENT_ADDFRIENDDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x18AAA150)
#define RPG_CLIENT_ADDFRIENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAA390)

namespace RPG::Client
{
	inline static constexpr unsigned int AddFriendData_TypeDefinitionIndex = 61325;

	class AddFriendData : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18
		::System::UInt32 _UID_k__BackingField; // 0x20
		::System::UInt32 _HeadIconID_k__BackingField; // 0x24
		::System::UInt32 _Level_k__BackingField; // 0x28
		::Enum_3_0F1B992870941C13_5 _FriendApplySource_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_UID_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_PLATFORMINFO_OFFSET))(this, a1);
		}

		::Enum_3_0F1B992870941C13_5 get_FriendApplySource()
		{
			return ((::Enum_3_0F1B992870941C13_5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_GET_FRIENDAPPLYSOURCE_OFFSET))(this);
		}

		::System::Void set_FriendApplySource(::Enum_3_0F1B992870941C13_5 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_5))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_SET_FRIENDAPPLYSOURCE_OFFSET))(this, a1);
		}

		static ::RPG::Client::AddFriendData* Create(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::PlayerPlatformInfo* a5, ::Enum_3_0F1B992870941C13_5 a6)
		{
			return ((::RPG::Client::AddFriendData*(*)(::System::UInt32, ::System::String*, ::System::UInt32, ::System::UInt32, ::RPG::Client::PlayerPlatformInfo*, ::Enum_3_0F1B992870941C13_5))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDFRIENDDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
