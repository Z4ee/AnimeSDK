#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/CreateUserCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B7B3800)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1B7B3780)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_ISMINOR_OFFSET UNITYSDK_OFFSET(0x1B7B37E0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0x1B7B37C0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B7B37A0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B7B3760)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1B7B3C30)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1B7B3790)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_ISMINOR_OFFSET UNITYSDK_OFFSET(0x1B7B37F0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0x1B7B37D0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B7B37B0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1B7B3820)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B7B3770)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B3D70)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int CreateUserCallbackInfo_TypeDefinitionIndex = 35836;

	class CreateUserCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _KWSUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28
		::System::Boolean _IsMinor_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_KWSUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_KWSUSERID_OFFSET))(this);
		}

		::System::Void set_KWSUserId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_KWSUSERID_OFFSET))(this, value);
		}

		::System::Boolean get_IsMinor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_ISMINOR_OFFSET))(this);
		}

		::System::Void set_IsMinor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_ISMINOR_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
