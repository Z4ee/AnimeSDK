#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/UninstallModCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }

#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B7B7140)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1B7B7100)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B7B70E0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GET_MOD_OFFSET UNITYSDK_OFFSET(0x1B7B7120)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B7B70C0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1B7B73D0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1B7B7110)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B7B70F0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_MOD_OFFSET UNITYSDK_OFFSET(0x1B7B7130)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1B7B7160)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B7B70D0)
#define EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B7510)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int UninstallModCallbackInfo_TypeDefinitionIndex = 35567;

	class UninstallModCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Mods::ModIdentifier* _Mod_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Mods::ModIdentifier* get_Mod()
		{
			return ((::Epic::OnlineServices::Mods::ModIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GET_MOD_OFFSET))(this);
		}

		::System::Void set_Mod(::Epic::OnlineServices::Mods::ModIdentifier* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModIdentifier*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_MOD_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Mods::UninstallModCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Mods::UninstallModCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UNINSTALLMODCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
