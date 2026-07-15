#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }
namespace Epic::OnlineServices::Mods { class UninstallModOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A6F490)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A6F410)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A6F2D0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_SET_MOD_OFFSET UNITYSDK_OFFSET(0x3A6F390)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A6F400)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int UninstallModOptionsInternal_TypeDefinitionIndex = 43452;

	struct alignas(8) UninstallModOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Mod; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Mod(::Epic::OnlineServices::Mods::ModIdentifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModIdentifier*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_SET_MOD_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Mods::UninstallModOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UninstallModOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
