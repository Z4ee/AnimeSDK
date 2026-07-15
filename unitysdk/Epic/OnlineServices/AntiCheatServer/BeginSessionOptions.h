#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_ENABLEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1C21AB70)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C21AB90)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_REGISTERTIMEOUTSECONDS_OFFSET UNITYSDK_OFFSET(0x1C21AB30)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0x1C21AB50)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_ENABLEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1C21AB80)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C21ABA0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_REGISTERTIMEOUTSECONDS_OFFSET UNITYSDK_OFFSET(0x1C21AB40)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0x1C21AB60)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C21ABB0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int BeginSessionOptions_TypeDefinitionIndex = 44096;

	class BeginSessionOptions : public ::System::Object
	{
	public:
		::System::String* _ServerName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
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
