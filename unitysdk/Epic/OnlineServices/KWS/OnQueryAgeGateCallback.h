#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class QueryAgeGateCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A802260)
#define EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A802290)
#define EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A801D60)
#define EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A801D50)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnQueryAgeGateCallback_TypeDefinitionIndex = 34287;

	class OnQueryAgeGateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
