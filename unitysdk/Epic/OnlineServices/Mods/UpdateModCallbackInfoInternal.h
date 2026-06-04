#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x14410)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x5AC10)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x5ABA0)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_MOD_OFFSET UNITYSDK_OFFSET(0x5AD20)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int UpdateModCallbackInfoInternal_TypeDefinitionIndex = 42593;

	struct alignas(8) UpdateModCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ClientData; // 0x20
		::System::IntPtr m_Mod; // 0x28

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::Mods::ModIdentifier* get_Mod()
		{
			return ((::Epic::OnlineServices::Mods::ModIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFOINTERNAL_GET_MOD_OFFSET))(this);
		}
	};
}
