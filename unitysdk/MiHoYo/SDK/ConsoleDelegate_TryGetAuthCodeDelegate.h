#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_AuthCodeCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A994380)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A9943C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A993E00)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A993DE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TryGetAuthCodeDelegate_TypeDefinitionIndex = 19399;

	class ConsoleDelegate_TryGetAuthCodeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* clientId, ::MiHoYo::SDK::ConsoleDelegate_AuthCodeCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_AuthCodeCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_INVOKE_OFFSET))(this, clientId, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* clientId, ::MiHoYo::SDK::ConsoleDelegate_AuthCodeCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_AuthCodeCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_BEGININVOKE_OFFSET))(this, clientId, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
