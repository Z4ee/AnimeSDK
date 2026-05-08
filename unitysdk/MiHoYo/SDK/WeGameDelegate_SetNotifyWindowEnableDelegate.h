#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEGAMEDELEGATE_SETNOTIFYWINDOWENABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19B5F190)
#define MIHOYO_SDK_WEGAMEDELEGATE_SETNOTIFYWINDOWENABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19B5F200)
#define MIHOYO_SDK_WEGAMEDELEGATE_SETNOTIFYWINDOWENABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B5EE20)
#define MIHOYO_SDK_WEGAMEDELEGATE_SETNOTIFYWINDOWENABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B5EE10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_SetNotifyWindowEnableDelegate_TypeDefinitionIndex = 18572;

	class WeGameDelegate_SetNotifyWindowEnableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_SETNOTIFYWINDOWENABLEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_SETNOTIFYWINDOWENABLEDELEGATE_INVOKE_OFFSET))(this, enable);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean enable, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_SETNOTIFYWINDOWENABLEDELEGATE_BEGININVOKE_OFFSET))(this, enable, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_SETNOTIFYWINDOWENABLEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
