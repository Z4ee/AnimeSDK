#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::P2P { class OnIncomingConnectionRequestInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8EDB740)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8EDB770)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8EDB1F0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8EDB1D0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnIncomingConnectionRequestCallback_TypeDefinitionIndex = 41722;

	class OnIncomingConnectionRequestCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
