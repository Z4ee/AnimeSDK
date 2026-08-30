#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/QueryPermissionsCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DFE0D80)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DFE0CE0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x1DFE0D40)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_ISMINOR_OFFSET UNITYSDK_OFFSET(0x1DFE0D60)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0x1DFE0D20)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFE0D00)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DFE0CC0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DFE1700)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DFE0CF0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x1DFE0D50)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_ISMINOR_OFFSET UNITYSDK_OFFSET(0x1DFE0D70)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0x1DFE0D30)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFE0D10)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DFE0DA0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DFE0CD0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE1840)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryPermissionsCallbackInfo_TypeDefinitionIndex = 45930;

	class QueryPermissionsCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _KWSUserId_k__BackingField; // 0x20
		::System::String* _DateOfBirth_k__BackingField; // 0x28
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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_KWSUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_KWSUSERID_OFFSET))(this);
		}

		::System::Void set_KWSUserId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_KWSUSERID_OFFSET))(this, a1);
		}

		::System::String* get_DateOfBirth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_DATEOFBIRTH_OFFSET))(this);
		}

		::System::Void set_DateOfBirth(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_DATEOFBIRTH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMinor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GET_ISMINOR_OFFSET))(this);
		}

		::System::Void set_IsMinor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_ISMINOR_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
