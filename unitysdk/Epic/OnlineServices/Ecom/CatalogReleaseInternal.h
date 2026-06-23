#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class CatalogRelease; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B2E00)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_COMPATIBLEAPPIDS_OFFSET UNITYSDK_OFFSET(0x8B27C0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_COMPATIBLEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x8B29F0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_RELEASENOTE_OFFSET UNITYSDK_OFFSET(0x8B2C20)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8B2D90)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_COMPATIBLEAPPIDS_OFFSET UNITYSDK_OFFSET(0x8B28D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_COMPATIBLEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x8B2B00)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B2D80)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_RELEASENOTE_OFFSET UNITYSDK_OFFSET(0x8B2CD0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CatalogReleaseInternal_TypeDefinitionIndex = 35921;

	struct alignas(8) CatalogReleaseInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_CompatibleAppIdCount; // 0x14
		::System::IntPtr m_CompatibleAppIds; // 0x18
		::System::UInt32 m_CompatiblePlatformCount; // 0x20
		::System::IntPtr m_CompatiblePlatforms; // 0x28
		::System::IntPtr m_ReleaseNote; // 0x30

		::Il2CppArray<::System::String*>* get_CompatibleAppIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_COMPATIBLEAPPIDS_OFFSET))(this);
		}

		::System::Void set_CompatibleAppIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_COMPATIBLEAPPIDS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_CompatiblePlatforms()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_COMPATIBLEPLATFORMS_OFFSET))(this);
		}

		::System::Void set_CompatiblePlatforms(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_COMPATIBLEPLATFORMS_OFFSET))(this, value);
		}

		::System::String* get_ReleaseNote()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_RELEASENOTE_OFFSET))(this);
		}

		::System::Void set_ReleaseNote(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_RELEASENOTE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CatalogRelease* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CatalogRelease*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
