#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }
namespace Epic::OnlineServices::Mods { class UpdateModOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A6F970)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A6F8F0)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A6F7B0)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_SET_MOD_OFFSET UNITYSDK_OFFSET(0x3A6F870)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A6F8E0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int UpdateModOptionsInternal_TypeDefinitionIndex = 43456;

	struct alignas(8) UpdateModOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Mod; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Mod(::Epic::OnlineServices::Mods::ModIdentifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModIdentifier*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_SET_MOD_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Mods::UpdateModOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UpdateModOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
