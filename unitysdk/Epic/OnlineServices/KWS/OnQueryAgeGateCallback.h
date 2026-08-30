#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class QueryAgeGateCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB374600)
#define EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB374630)
#define EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3740B0)
#define EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB374510)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnQueryAgeGateCallback_TypeDefinitionIndex = 45914;

	class OnQueryAgeGateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYAGEGATECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
