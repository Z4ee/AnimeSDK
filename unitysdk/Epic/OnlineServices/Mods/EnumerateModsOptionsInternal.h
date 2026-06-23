#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class EnumerateModsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x963970)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x963960)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9637C0)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x963880)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x48E3B0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int EnumerateModsOptionsInternal_TypeDefinitionIndex = 35548;

	struct alignas(8) EnumerateModsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::Mods::ModEnumerationType m_Type; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_SET_TYPE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Mods::EnumerateModsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::EnumerateModsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
