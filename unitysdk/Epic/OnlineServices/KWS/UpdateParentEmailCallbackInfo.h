#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/UpdateParentEmailCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DCA7700)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DCA76C0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DCA76E0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DCA76A0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DCA78B0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DCA76D0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DCA76F0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DCA7720)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DCA76B0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA7AD0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int UpdateParentEmailCallbackInfo_TypeDefinitionIndex = 36533;

	class UpdateParentEmailCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
