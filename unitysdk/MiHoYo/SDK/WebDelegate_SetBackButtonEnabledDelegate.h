#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A529450)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A5294D0)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A528E60)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A528E50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetBackButtonEnabledDelegate_TypeDefinitionIndex = 18697;

	class WebDelegate_SetBackButtonEnabledDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_INVOKE_OFFSET))(this, webView, enabled);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Boolean enabled, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_BEGININVOKE_OFFSET))(this, webView, enabled, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
