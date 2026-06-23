#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/JoinSessionCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C546F20)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C546F00)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C546EE0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C546FD0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C546F10)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C546F40)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C546EF0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C547130)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int JoinSessionCallbackInfo_TypeDefinitionIndex = 35057;

	class JoinSessionCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::JoinSessionCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::JoinSessionCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
