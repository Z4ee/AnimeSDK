#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB346640)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB346690)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xB346630)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xB3465C0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnCreateUserCallbackInternal_TypeDefinitionIndex = 46157;

	class OnCreateUserCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
