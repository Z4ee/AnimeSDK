#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D3D25D0)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3D2640)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D3D2250)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D2230)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_QueryIsOffScreenRenderingDelegate_TypeDefinitionIndex = 19967;

	class WebDelegate_QueryIsOffScreenRenderingDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Boolean forceOffScreen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_INVOKE_OFFSET))(this, forceOffScreen);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean forceOffScreen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_BEGININVOKE_OFFSET))(this, forceOffScreen, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
