#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9FB3D0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9FB360)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_MOD_OFFSET UNITYSDK_OFFSET(0x9FB4E0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x325570)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int UninstallModCallbackInfoInternal_TypeDefinitionIndex = 36227;

	struct alignas(8) UninstallModCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ClientData; // 0x20
		::System::IntPtr m_Mod; // 0x28

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::Mods::ModIdentifier* get_Mod()
		{
			return ((::Epic::OnlineServices::Mods::ModIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFOINTERNAL_GET_MOD_OFFSET))(this);
		}
	};
}
