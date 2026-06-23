#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B53BF90)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B53C030)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B53B990)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53B970)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_InitDelegate_TypeDefinitionIndex = 19574;

	class WebDelegate_InitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::String* url, ::System::Boolean forceOffScreen, ::System::Int32 animationOptions)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_INVOKE_OFFSET))(this, url, forceOffScreen, animationOptions);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::Boolean forceOffScreen, ::System::Int32 animationOptions, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET))(this, url, forceOffScreen, animationOptions, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
