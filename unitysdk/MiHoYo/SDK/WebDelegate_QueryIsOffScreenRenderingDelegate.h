#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x160415E0)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16041610)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16041330)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16041310)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_QueryIsOffScreenRenderingDelegate_TypeDefinitionIndex = 6860;

	class WebDelegate_QueryIsOffScreenRenderingDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
