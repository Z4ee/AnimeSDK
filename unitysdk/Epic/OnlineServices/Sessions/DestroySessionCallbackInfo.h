#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/DestroySessionCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1942A5B0)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1942A590)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1942A570)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1942A660)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1942A5A0)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1942A5D0)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1942A580)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1942A7C0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int DestroySessionCallbackInfo_TypeDefinitionIndex = 33476;

	class DestroySessionCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
