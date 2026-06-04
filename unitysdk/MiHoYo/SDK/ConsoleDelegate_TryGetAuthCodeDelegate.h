#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_AuthCodeCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1830A600)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1830A640)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1830A5F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1830A570)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TryGetAuthCodeDelegate_TypeDefinitionIndex = 7596;

	class ConsoleDelegate_TryGetAuthCodeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::MiHoYo::SDK::ConsoleDelegate_AuthCodeCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_AuthCodeCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::MiHoYo::SDK::ConsoleDelegate_AuthCodeCallback* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_AuthCodeCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETAUTHCODEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
