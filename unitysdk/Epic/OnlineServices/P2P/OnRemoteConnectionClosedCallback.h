#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::P2P { class OnRemoteConnectionClosedInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C4C3330)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C4C3360)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C4C2E30)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C2E10)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnRemoteConnectionClosedCallback_TypeDefinitionIndex = 35520;

	class OnRemoteConnectionClosedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
