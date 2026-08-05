#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/QueryExternalAccountMappingsCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D382DD0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D382D90)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D382DB0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D382D70)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1D382F80)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D382DA0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D382DC0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1D382DF0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D382D80)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3831A0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int QueryExternalAccountMappingsCallbackInfo_TypeDefinitionIndex = 36771;

	class QueryExternalAccountMappingsCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
