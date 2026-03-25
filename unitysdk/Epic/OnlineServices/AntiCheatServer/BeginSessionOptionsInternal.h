#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::AntiCheatServer { class BeginSessionOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE170)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xE100)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_ENABLEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xDF80)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xE030)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xE0F0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_REGISTERTIMEOUTSECONDS_OFFSET UNITYSDK_OFFSET(0x1D50)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0xDED0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int BeginSessionOptionsInternal_TypeDefinitionIndex = 36607;

	struct alignas(8) BeginSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_RegisterTimeoutSeconds; // 0x14
		::System::IntPtr m_ServerName; // 0x18
		::System::Int32 m_EnableGameplayData; // 0x20
		::System::IntPtr m_LocalUserId; // 0x28

		::System::Void set_RegisterTimeoutSeconds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_REGISTERTIMEOUTSECONDS_OFFSET))(this, value);
		}

		::System::Void set_ServerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_SERVERNAME_OFFSET))(this, value);
		}

		::System::Void set_EnableGameplayData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_ENABLEGAMEPLAYDATA_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
