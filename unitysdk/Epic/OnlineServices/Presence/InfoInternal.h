#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/Status.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class DataRecord; }
namespace Epic::OnlineServices::Presence { class Info; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x944080)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x943B00)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x943840)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x943EA0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x9439A0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0x943DC0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x943C60)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x3A4E50)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x943710)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x944010)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x944000)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x943BB0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9438F0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x943F50)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x943A50)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_RECORDS_OFFSET UNITYSDK_OFFSET(0x943E30)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x943D10)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x943780)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int InfoInternal_TypeDefinitionIndex = 33810;

	struct alignas(8) InfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::Presence::Status m_Status; // 0x14
		::System::IntPtr m_UserId; // 0x18
		::System::IntPtr m_ProductId; // 0x20
		::System::IntPtr m_ProductVersion; // 0x28
		::System::IntPtr m_Platform; // 0x30
		::System::IntPtr m_RichText; // 0x38
		::System::Int32 m_RecordsCount; // 0x40
		::System::IntPtr m_Records; // 0x48
		::System::IntPtr m_ProductName; // 0x50

		::Epic::OnlineServices::Presence::Status get_Status()
		{
			return ((::Epic::OnlineServices::Presence::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::Presence::Status value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::Status))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_STATUS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_UserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::String* get_ProductId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTID_OFFSET))(this, value);
		}

		::System::String* get_ProductVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::Void set_ProductVersion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTVERSION_OFFSET))(this, value);
		}

		::System::String* get_Platform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PLATFORM_OFFSET))(this, value);
		}

		::System::String* get_RichText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_RichText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_RICHTEXT_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* get_Records()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_RECORDS_OFFSET))(this);
		}

		::System::Void set_Records(::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_RECORDS_OFFSET))(this, value);
		}

		::System::String* get_ProductName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Void set_ProductName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::Info* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::Info*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
