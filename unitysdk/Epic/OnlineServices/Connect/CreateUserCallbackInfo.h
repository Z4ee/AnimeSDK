#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/CreateUserCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA29D3E0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA29D3A0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA29D3C0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA29D380)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA29D7E0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA29D3B0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA29D3D0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA29D400)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA29D390)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA29D900)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CreateUserCallbackInfo_TypeDefinitionIndex = 43079;

	class CreateUserCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::CreateUserCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::CreateUserCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSERCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
