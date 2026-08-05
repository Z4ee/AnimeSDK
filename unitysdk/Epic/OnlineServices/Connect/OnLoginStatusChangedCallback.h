#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class LoginStatusChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONLOGINSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D828D50)
#define EPIC_ONLINESERVICES_CONNECT_ONLOGINSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D828D80)
#define EPIC_ONLINESERVICES_CONNECT_ONLOGINSTATUSCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D828830)
#define EPIC_ONLINESERVICES_CONNECT_ONLOGINSTATUSCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D828810)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnLoginStatusChangedCallback_TypeDefinitionIndex = 36759;

	class OnLoginStatusChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLOGINSTATUSCHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLOGINSTATUSCHANGEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLOGINSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLOGINSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
