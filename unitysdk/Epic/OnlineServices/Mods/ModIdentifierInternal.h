#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Mods { class ModIdentifier; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x55240)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_ARTIFACTID_OFFSET UNITYSDK_OFFSET(0x54DA0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x54C40)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_NAMESPACEID_OFFSET UNITYSDK_OFFSET(0x54AE0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x54F00)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x55060)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x551D0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_ARTIFACTID_OFFSET UNITYSDK_OFFSET(0x54E50)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x54CF0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_NAMESPACEID_OFFSET UNITYSDK_OFFSET(0x54B90)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x551C0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x54FB0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x55110)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModIdentifierInternal_TypeDefinitionIndex = 41773;

	struct alignas(8) ModIdentifierInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_NamespaceId; // 0x18
		::System::IntPtr m_ItemId; // 0x20
		::System::IntPtr m_ArtifactId; // 0x28
		::System::IntPtr m_Title; // 0x30
		::System::IntPtr m_Version; // 0x38

		::System::String* get_NamespaceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_NAMESPACEID_OFFSET))(this);
		}

		::System::Void set_NamespaceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_NAMESPACEID_OFFSET))(this, value);
		}

		::System::String* get_ItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_ITEMID_OFFSET))(this, value);
		}

		::System::String* get_ArtifactId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_ARTIFACTID_OFFSET))(this);
		}

		::System::Void set_ArtifactId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_ARTIFACTID_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_VERSION_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Mods::ModIdentifier* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModIdentifier*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIERINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
