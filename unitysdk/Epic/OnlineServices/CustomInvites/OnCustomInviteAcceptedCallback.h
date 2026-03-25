#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::CustomInvites { class OnCustomInviteAcceptedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86334A0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86334D0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8631D00)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8633480)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int OnCustomInviteAcceptedCallback_TypeDefinitionIndex = 36413;

	class OnCustomInviteAcceptedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
