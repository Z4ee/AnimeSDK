#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/CreateDeviceIdCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA29CC00)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA29CBE0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA29CBC0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA29CEA0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA29CBF0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA29CC20)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA29CBD0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA29CFC0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CreateDeviceIdCallbackInfo_TypeDefinitionIndex = 43075;

	class CreateDeviceIdCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
