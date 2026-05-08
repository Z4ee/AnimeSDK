#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/InfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Presence/Status.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class DataRecord; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1AA7EDF0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1AA7EDB0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x1AA7EE50)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x1AA7EDD0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0x1AA7EE30)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1AA7EE10)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1AA7ED70)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1AA7ED90)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1AA7F660)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_OFFSET UNITYSDK_OFFSET(0x1AA7EE70)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1AA7EE00)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1AA7EDC0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x1AA7EE60)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x1AA7EDE0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_RECORDS_OFFSET UNITYSDK_OFFSET(0x1AA7EE40)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1AA7EE20)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1AA7ED80)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1AA7EDA0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA7F7C0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int Info_TypeDefinitionIndex = 33809;

	class Info : public ::System::Object
	{
	public:
		::System::String* _RichText_k__BackingField; // 0x10
		::System::String* _ProductId_k__BackingField; // 0x18
		::System::String* _Platform_k__BackingField; // 0x20
		::System::String* _ProductVersion_k__BackingField; // 0x28
		::Epic::OnlineServices::EpicAccountId* _UserId_k__BackingField; // 0x30
		::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* _Records_k__BackingField; // 0x38
		::System::String* _ProductName_k__BackingField; // 0x40
		::Epic::OnlineServices::Presence::Status _Status_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Presence::Status get_Status()
		{
			return ((::Epic::OnlineServices::Presence::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::Presence::Status value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::Status))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_STATUS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_UserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_USERID_OFFSET))(this, value);
		}

		::System::String* get_ProductId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTID_OFFSET))(this, value);
		}

		::System::String* get_ProductVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::Void set_ProductVersion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTVERSION_OFFSET))(this, value);
		}

		::System::String* get_Platform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PLATFORM_OFFSET))(this, value);
		}

		::System::String* get_RichText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_RichText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_RICHTEXT_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* get_Records()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_RECORDS_OFFSET))(this);
		}

		::System::Void set_Records(::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_RECORDS_OFFSET))(this, value);
		}

		::System::String* get_ProductName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Void set_ProductName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTNAME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::InfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::InfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_1_OFFSET))(this, other);
		}
	};
}
