#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_USERUNTIMEFONTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D8C10)
#define MIHOYO_SDK_SDKDELEGATE_USERUNTIMEFONTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D8C40)
#define MIHOYO_SDK_SDKDELEGATE_USERUNTIMEFONTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D8980)
#define MIHOYO_SDK_SDKDELEGATE_USERUNTIMEFONTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D8960)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_UseRuntimeFontDelegate_TypeDefinitionIndex = 19895;

	class SDKDelegate_UseRuntimeFontDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_USERUNTIMEFONTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_USERUNTIMEFONTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_USERUNTIMEFONTDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_USERUNTIMEFONTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
