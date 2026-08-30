#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::P2P { class OnQueryNATTypeCompleteInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF890E0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF89110)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF890D0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF88FE0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnQueryNATTypeCompleteCallback_TypeDefinitionIndex = 45580;

	class OnQueryNATTypeCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
