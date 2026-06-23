#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/UpdateModCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }

#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B611CE0)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1B611CA0)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B611C80)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GET_MOD_OFFSET UNITYSDK_OFFSET(0x1B611CC0)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B611C60)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1B611F70)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1B611CB0)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B611C90)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_MOD_OFFSET UNITYSDK_OFFSET(0x1B611CD0)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1B611D00)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B611C70)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6120B0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int UpdateModCallbackInfo_TypeDefinitionIndex = 35571;

	class UpdateModCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Mods::ModIdentifier* _Mod_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Mods::ModIdentifier* get_Mod()
		{
			return ((::Epic::OnlineServices::Mods::ModIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GET_MOD_OFFSET))(this);
		}

		::System::Void set_Mod(::Epic::OnlineServices::Mods::ModIdentifier* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModIdentifier*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_MOD_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Mods::UpdateModCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Mods::UpdateModCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
