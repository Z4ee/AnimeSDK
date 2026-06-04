#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModIdentifierInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_ARTIFACTID_OFFSET UNITYSDK_OFFSET(0xA304AD0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA304AB0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_NAMESPACEID_OFFSET UNITYSDK_OFFSET(0xA304A90)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA304AF0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA304B10)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_1_OFFSET UNITYSDK_OFFSET(0xA3054C0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_ARTIFACTID_OFFSET UNITYSDK_OFFSET(0xA304AE0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA304AC0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_NAMESPACEID_OFFSET UNITYSDK_OFFSET(0xA304AA0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_OFFSET UNITYSDK_OFFSET(0xA304B30)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA304B00)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xA304B20)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA305600)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModIdentifier_TypeDefinitionIndex = 42575;

	class ModIdentifier : public ::System::Object
	{
	public:
		::System::String* _NamespaceId_k__BackingField; // 0x10
		::System::String* _ItemId_k__BackingField; // 0x18
		::System::String* _ArtifactId_k__BackingField; // 0x20
		::System::String* _Version_k__BackingField; // 0x28
		::System::String* _Title_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER__CTOR_OFFSET))(this);
		}

		::System::String* get_NamespaceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_NAMESPACEID_OFFSET))(this);
		}

		::System::Void set_NamespaceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_NAMESPACEID_OFFSET))(this, a1);
		}

		::System::String* get_ItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::String* get_ArtifactId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_ARTIFACTID_OFFSET))(this);
		}

		::System::Void set_ArtifactId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_ARTIFACTID_OFFSET))(this, a1);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifierInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifierInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_1_OFFSET))(this, a1);
		}
	};
}
