#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_38EEFC268F197886_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E52F540)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_38EEFC268F197886_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E52F5D0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_38EEFC268F197886_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E52F220)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_38EEFC268F197886__CTOR_OFFSET UNITYSDK_OFFSET(0x1E52F200)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKBiliBiliInterface_Class_3_38EEFC268F197886_TypeDefinitionIndex = 37348;

	class MiHoYoSDKBiliBiliInterface_Class_3_38EEFC268F197886 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_38EEFC268F197886__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::IntPtr hwnd, ::System::UInt32 lParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_38EEFC268F197886_INVOKE_OFFSET))(this, hwnd, lParam);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr hwnd, ::System::UInt32 lParam, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_38EEFC268F197886_BEGININVOKE_OFFSET))(this, hwnd, lParam, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_38EEFC268F197886_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
