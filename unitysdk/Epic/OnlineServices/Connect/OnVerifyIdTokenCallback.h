#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class VerifyIdTokenCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONVERIFYIDTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8E5FD00)
#define EPIC_ONLINESERVICES_CONNECT_ONVERIFYIDTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8E5FD30)
#define EPIC_ONLINESERVICES_CONNECT_ONVERIFYIDTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8E5F7B0)
#define EPIC_ONLINESERVICES_CONNECT_ONVERIFYIDTOKENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8E5F790)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnVerifyIdTokenCallback_TypeDefinitionIndex = 42328;

	class OnVerifyIdTokenCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONVERIFYIDTOKENCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONVERIFYIDTOKENCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONVERIFYIDTOKENCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONVERIFYIDTOKENCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
