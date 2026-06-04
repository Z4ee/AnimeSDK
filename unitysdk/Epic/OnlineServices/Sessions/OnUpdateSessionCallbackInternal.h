#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA0E1FB0)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA0E2000)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xA0E1FA0)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E1F30)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnUpdateSessionCallbackInternal_TypeDefinitionIndex = 42107;

	class OnUpdateSessionCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
