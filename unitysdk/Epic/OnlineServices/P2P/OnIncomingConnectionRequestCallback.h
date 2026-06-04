#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::P2P { class OnIncomingConnectionRequestInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA30CA00)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA30CA30)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA30C9F0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA30C900)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnIncomingConnectionRequestCallback_TypeDefinitionIndex = 42525;

	class OnIncomingConnectionRequestCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
