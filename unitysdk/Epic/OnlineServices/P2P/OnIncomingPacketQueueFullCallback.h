#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::P2P { class OnIncomingPacketQueueFullInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86A9040)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86A9070)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86A8AF0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86A8AD0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnIncomingPacketQueueFullCallback_TypeDefinitionIndex = 35900;

	class OnIncomingPacketQueueFullCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
