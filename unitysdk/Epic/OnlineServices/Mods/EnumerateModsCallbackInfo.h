#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/EnumerateModsCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x869C970)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x869C930)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x869C910)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x869C8F0)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x869C950)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x869CDD0)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x869C940)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x869C920)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x869C990)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x869C900)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x869C960)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x869CF00)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int EnumerateModsCallbackInfo_TypeDefinitionIndex = 35937;

	class EnumerateModsCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Mods::ModEnumerationType _Type_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Mods::ModEnumerationType get_Type()
		{
			return ((::Epic::OnlineServices::Mods::ModEnumerationType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_TYPE_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
