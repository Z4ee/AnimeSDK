#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::P2P { class OnQueryNATTypeCompleteInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF034B0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF034E0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF02FB0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF02F90)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnQueryNATTypeCompleteCallback_TypeDefinitionIndex = 35516;

	class OnQueryNATTypeCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
