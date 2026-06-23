#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::P2P { class OnPeerConnectionEstablishedInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF02F50)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF02F80)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF02A50)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF02A30)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnPeerConnectionEstablishedCallback_TypeDefinitionIndex = 35512;

	class OnPeerConnectionEstablishedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
