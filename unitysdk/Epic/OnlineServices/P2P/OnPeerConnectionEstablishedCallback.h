#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::P2P { class OnPeerConnectionEstablishedInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF885D0)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF88600)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF885C0)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF884D0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnPeerConnectionEstablishedCallback_TypeDefinitionIndex = 45576;

	class OnPeerConnectionEstablishedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
