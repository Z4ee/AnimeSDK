#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7FF40)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7FF90)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7FF30)
#define MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7FEC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_QueryIsOffScreenRenderingDelegate_TypeDefinitionIndex = 7812;

	class WebDelegate_QueryIsOffScreenRenderingDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_QUERYISOFFSCREENRENDERINGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
