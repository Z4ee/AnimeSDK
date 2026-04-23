#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176A6A30)
#define MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176A6AE0)
#define MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17698F70)
#define MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176A6A10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetFrameDelegate_TypeDefinitionIndex = 6879;

	class WebDelegate_SetFrameDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_INVOKE_OFFSET))(this, webView, x, y, width, height);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_BEGININVOKE_OFFSET))(this, webView, x, y, width, height, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
