#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_ENABLEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA0D2CA0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0D2CC0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_REGISTERTIMEOUTSECONDS_OFFSET UNITYSDK_OFFSET(0xA0D2C60)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0xA0D2C80)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_ENABLEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA0D2CB0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0D2CD0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_REGISTERTIMEOUTSECONDS_OFFSET UNITYSDK_OFFSET(0xA0D2C70)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0xA0D2C90)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D2CE0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int BeginSessionOptions_TypeDefinitionIndex = 43235;

	class BeginSessionOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _ServerName_k__BackingField; // 0x18
		::System::UInt32 _RegisterTimeoutSeconds_k__BackingField; // 0x20
		::System::Boolean _EnableGameplayData_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RegisterTimeoutSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_REGISTERTIMEOUTSECONDS_OFFSET))(this);
		}

		::System::Void set_RegisterTimeoutSeconds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_REGISTERTIMEOUTSECONDS_OFFSET))(this, a1);
		}

		::System::String* get_ServerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_SERVERNAME_OFFSET))(this);
		}

		::System::Void set_ServerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_SERVERNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableGameplayData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_ENABLEGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void set_EnableGameplayData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_ENABLEGAMEPLAYDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
