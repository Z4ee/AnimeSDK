#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC9C70)
#define MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC9CB0)
#define MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC9C60)
#define MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC9BE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_WebEventDelegate_TypeDefinitionIndex = 7733;

	class SDKDelegate_WebEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
