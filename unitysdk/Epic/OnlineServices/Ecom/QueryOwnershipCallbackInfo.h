#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/QueryOwnershipCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class ItemOwnership; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A7FF350)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A7FF2F0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_ITEMOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x1A7FF330)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A7FF310)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A7FF2D0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1A7FF9B0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A7FF300)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_ITEMOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x1A7FF340)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A7FF320)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1A7FF370)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A7FF2E0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FFAF0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipCallbackInfo_TypeDefinitionIndex = 34434;

	class QueryOwnershipCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>* _ItemOwnership_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>* get_ItemOwnership()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_ITEMOWNERSHIP_OFFSET))(this);
		}

		::System::Void set_ItemOwnership(::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_ITEMOWNERSHIP_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
