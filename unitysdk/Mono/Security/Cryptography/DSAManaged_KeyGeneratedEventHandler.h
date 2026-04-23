#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x177AE780)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x177AE7C0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x177AD630)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177AE760)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DSAManaged_KeyGeneratedEventHandler_TypeDefinitionIndex = 80;

	class DSAManaged_KeyGeneratedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::EventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::EventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
