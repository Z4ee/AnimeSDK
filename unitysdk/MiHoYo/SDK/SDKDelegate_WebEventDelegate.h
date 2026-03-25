#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15FEEB20)
#define MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15FEEB60)
#define MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15FEE5A0)
#define MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEE580)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_WebEventDelegate_TypeDefinitionIndex = 6782;

	class SDKDelegate_WebEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* f, ::System::String* p)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_INVOKE_OFFSET))(this, f, p);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* f, ::System::String* p, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_BEGININVOKE_OFFSET))(this, f, p, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBEVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
