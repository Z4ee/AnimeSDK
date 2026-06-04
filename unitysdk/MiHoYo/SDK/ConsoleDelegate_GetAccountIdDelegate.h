#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18307BE0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18307C10)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18307BD0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18307B60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetAccountIdDelegate_TypeDefinitionIndex = 7570;

	class ConsoleDelegate_GetAccountIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTIDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
