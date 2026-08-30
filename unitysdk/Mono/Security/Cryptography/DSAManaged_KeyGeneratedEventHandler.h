#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB68610)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB68650)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB678D0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB68520)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DSAManaged_KeyGeneratedEventHandler_TypeDefinitionIndex = 80;

	class DSAManaged_KeyGeneratedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::EventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::EventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_KEYGENERATEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
