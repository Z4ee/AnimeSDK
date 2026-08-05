#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/UnlinkAccountCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D829370)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D829330)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D829350)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D829310)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1D829520)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D829340)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D829360)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1D829390)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D829320)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D829740)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int UnlinkAccountCallbackInfo_TypeDefinitionIndex = 36783;

	class UnlinkAccountCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
