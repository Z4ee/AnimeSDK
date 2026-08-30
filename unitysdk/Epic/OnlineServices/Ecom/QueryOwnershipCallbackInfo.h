#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/QueryOwnershipCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class ItemOwnership; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xB3658B0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB365850)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_ITEMOWNERSHIP_OFFSET UNITYSDK_OFFSET(0xB365890)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB365870)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB365830)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB365E60)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB365860)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_ITEMOWNERSHIP_OFFSET UNITYSDK_OFFSET(0xB3658A0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB365880)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xB3658D0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB365840)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB365F90)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipCallbackInfo_TypeDefinitionIndex = 46061;

	class QueryOwnershipCallbackInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>* _ItemOwnership_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>* get_ItemOwnership()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GET_ITEMOWNERSHIP_OFFSET))(this);
		}

		::System::Void set_ItemOwnership(::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_ITEMOWNERSHIP_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
