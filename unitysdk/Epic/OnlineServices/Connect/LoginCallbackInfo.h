#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/LoginCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2A1D70)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2A1D10)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0xA2A1D50)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2A1D30)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2A1CF0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2A22C0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2A1D20)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0xA2A1D60)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2A1D40)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2A1D90)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2A1D00)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A23F0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int LoginCallbackInfo_TypeDefinitionIndex = 43103;

	class LoginCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ContinuanceToken* _ContinuanceToken_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken()
		{
			return ((::Epic::OnlineServices::ContinuanceToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_CONTINUANCETOKEN_OFFSET))(this);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_CONTINUANCETOKEN_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
