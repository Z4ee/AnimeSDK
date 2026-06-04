#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETSANDBOXIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18308550)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETSANDBOXIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18308580)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETSANDBOXIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18308540)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETSANDBOXIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183084D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetSandboxIdDelegate_TypeDefinitionIndex = 7623;

	class ConsoleDelegate_GetSandboxIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETSANDBOXIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETSANDBOXIDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETSANDBOXIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETSANDBOXIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
