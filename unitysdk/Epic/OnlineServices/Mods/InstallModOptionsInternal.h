#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class InstallModOptions; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x549B0)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x54940)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x54750)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_MOD_OFFSET UNITYSDK_OFFSET(0x54810)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x54930)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_REMOVEAFTEREXIT_OFFSET UNITYSDK_OFFSET(0x54880)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int InstallModOptionsInternal_TypeDefinitionIndex = 41770;

	struct alignas(8) InstallModOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Mod; // 0x20
		::System::Int32 m_RemoveAfterExit; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Mod(::Epic::OnlineServices::Mods::ModIdentifier* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModIdentifier*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_MOD_OFFSET))(this, value);
		}

		::System::Void set_RemoveAfterExit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_REMOVEAFTEREXIT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Mods::InstallModOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::InstallModOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
