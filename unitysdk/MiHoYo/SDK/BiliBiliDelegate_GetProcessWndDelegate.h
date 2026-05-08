#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A3F4240)
#define MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A3F4270)
#define MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A3F3FA0)
#define MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F3F90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_GetProcessWndDelegate_TypeDefinitionIndex = 18483;

	class BiliBiliDelegate_GetProcessWndDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_GETPROCESSWNDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
