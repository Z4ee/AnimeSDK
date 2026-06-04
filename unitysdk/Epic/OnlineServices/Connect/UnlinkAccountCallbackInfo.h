#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/UnlinkAccountCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2A6E10)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2A6DD0)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2A6DF0)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2A6DB0)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2A7210)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2A6DE0)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2A6E00)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2A6E30)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2A6DC0)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A7330)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int UnlinkAccountCallbackInfo_TypeDefinitionIndex = 43145;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
