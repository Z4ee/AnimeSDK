#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E51B010)
#define EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E51B060)
#define EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E51AD00)
#define EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E51ACE0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnDeletePersistentAuthCallbackInternal_TypeDefinitionIndex = 36829;

	class OnDeletePersistentAuthCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
