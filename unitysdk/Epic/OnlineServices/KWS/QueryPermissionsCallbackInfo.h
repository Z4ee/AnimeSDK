#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/QueryPermissionsCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E5D2290)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1E5D21F0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x1E5D2250)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_ISMINOR_OFFSET UNITYSDK_OFFSET(0x1E5D2270)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0x1E5D2230)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E5D2210)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E5D21D0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1E5D2C10)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1E5D2200)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x1E5D2260)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_ISMINOR_OFFSET UNITYSDK_OFFSET(0x1E5D2280)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0x1E5D2240)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E5D2220)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1E5D22B0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E5D21E0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2D60)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryPermissionsCallbackInfo_TypeDefinitionIndex = 36525;

	class QueryPermissionsCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _DateOfBirth_k__BackingField; // 0x18
		::System::String* _KWSUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x30
		::System::Boolean _IsMinor_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_KWSUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_KWSUSERID_OFFSET))(this);
		}

		::System::Void set_KWSUserId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_KWSUSERID_OFFSET))(this, value);
		}

		::System::String* get_DateOfBirth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_DATEOFBIRTH_OFFSET))(this);
		}

		::System::Void set_DateOfBirth(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_DATEOFBIRTH_OFFSET))(this, value);
		}

		::System::Boolean get_IsMinor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_ISMINOR_OFFSET))(this);
		}

		::System::Void set_IsMinor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_ISMINOR_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
