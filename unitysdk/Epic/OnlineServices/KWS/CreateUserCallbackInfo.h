#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/CreateUserCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2CE190)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2CE110)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_ISMINOR_OFFSET UNITYSDK_OFFSET(0xA2CE170)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0xA2CE150)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2CE130)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2CE0F0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2CE8A0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2CE120)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_ISMINOR_OFFSET UNITYSDK_OFFSET(0xA2CE180)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0xA2CE160)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2CE140)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2CE1B0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2CE100)
#define EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2CE9D0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int CreateUserCallbackInfo_TypeDefinitionIndex = 42857;

	class CreateUserCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _KWSUserId_k__BackingField; // 0x20
		::System::Boolean _IsMinor_k__BackingField; // 0x28
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_KWSUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_KWSUSERID_OFFSET))(this);
		}

		::System::Void set_KWSUserId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_KWSUSERID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMinor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GET_ISMINOR_OFFSET))(this);
		}

		::System::Void set_IsMinor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_ISMINOR_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSERCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
