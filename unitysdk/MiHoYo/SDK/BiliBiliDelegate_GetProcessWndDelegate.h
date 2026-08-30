#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1A4740)
#define MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1A4770)
#define MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1A4730)
#define MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A46C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_GetProcessWndDelegate_TypeDefinitionIndex = 7558;

	class BiliBiliDelegate_GetProcessWndDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
