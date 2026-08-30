#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D76EF50)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D76EFA0)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D76EF40)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D76EED0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnVerifyIdTokenCallbackInternal_TypeDefinitionIndex = 46246;

	class OnVerifyIdTokenCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
