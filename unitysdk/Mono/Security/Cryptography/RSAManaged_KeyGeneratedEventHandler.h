#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_KEYGENERATEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B64E850)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_KEYGENERATEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B64E890)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_KEYGENERATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B64DC80)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_KEYGENERATEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64E760)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_KeyGeneratedEventHandler_TypeDefinitionIndex = 2305;

	class RSAManaged_KeyGeneratedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_KEYGENERATEDEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_KEYGENERATEDEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::EventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::EventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_KEYGENERATEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_KEYGENERATEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
