#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::CustomInvites { class OnCustomInviteReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITERECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19F9BAB0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITERECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19F9BAE0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITERECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19F9B5B0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITERECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9B5A0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int OnCustomInviteReceivedCallback_TypeDefinitionIndex = 34462;

	class OnCustomInviteReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITERECEIVEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITERECEIVEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITERECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITERECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
