#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class CatalogRelease; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C35C30)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_COMPATIBLEAPPIDS_OFFSET UNITYSDK_OFFSET(0x3C355E0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_COMPATIBLEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x3C35810)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_RELEASENOTE_OFFSET UNITYSDK_OFFSET(0x3C35A40)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C35BB0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_COMPATIBLEAPPIDS_OFFSET UNITYSDK_OFFSET(0x3C356F0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_COMPATIBLEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x3C35920)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C35BA0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_RELEASENOTE_OFFSET UNITYSDK_OFFSET(0x3C35AF0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CatalogReleaseInternal_TypeDefinitionIndex = 45985;

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

		::System::Void set_CompatibleAppIds(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_COMPATIBLEAPPIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_CompatiblePlatforms()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_COMPATIBLEPLATFORMS_OFFSET))(this);
		}

		::System::Void set_CompatiblePlatforms(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_COMPATIBLEPLATFORMS_OFFSET))(this, a1);
		}

		::System::String* get_ReleaseNote()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_GET_RELEASENOTE_OFFSET))(this);
		}

		::System::Void set_ReleaseNote(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_RELEASENOTE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CatalogRelease* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CatalogRelease*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
