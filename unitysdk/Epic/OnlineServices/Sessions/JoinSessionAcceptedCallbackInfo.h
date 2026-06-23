#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/JoinSessionAcceptedCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D25FCB0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D25FC50)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D25FC70)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x1D25FC90)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1D25FEB0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D25FC60)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D25FC80)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1D25FCC0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x1D25FCA0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2600F0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int JoinSessionAcceptedCallbackInfo_TypeDefinitionIndex = 35055;

	class JoinSessionAcceptedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::UInt64 _UiEventId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_GET_UIEVENTID_OFFSET))(this);
		}

		::System::Void set_UiEventId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_UIEVENTID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
