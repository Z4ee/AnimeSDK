#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/Status.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class DataRecord; }
namespace Epic::OnlineServices::Presence { class Info; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A7A760)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x3A7A1D0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x3A79F10)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x3A7A570)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x3A7A070)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0x3A7A490)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x3A7A330)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x7A7C20)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x3A79DE0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A7A6E0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A7A6D0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x3A7A280)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x3A79FC0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x3A7A620)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x3A7A120)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_RECORDS_OFFSET UNITYSDK_OFFSET(0x3A7A500)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x3A7A3E0)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA4B350)
#define EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x3A79E50)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int InfoInternal_TypeDefinitionIndex = 43255;

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

		::System::Void set_Status(::Epic::OnlineServices::Presence::Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::Status))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_STATUS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_UserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_USERID_OFFSET))(this, a1);
		}

		::System::String* get_ProductId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTID_OFFSET))(this, a1);
		}

		::System::String* get_ProductVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::Void set_ProductVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTVERSION_OFFSET))(this, a1);
		}

		::System::String* get_Platform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PLATFORM_OFFSET))(this, a1);
		}

		::System::String* get_RichText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_RichText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_RICHTEXT_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* get_Records()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_RECORDS_OFFSET))(this);
		}

		::System::Void set_Records(::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_RECORDS_OFFSET))(this, a1);
		}

		::System::String* get_ProductName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Void set_ProductName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_PRODUCTNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::Info* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::Info*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
