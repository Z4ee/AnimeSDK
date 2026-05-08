#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETFORWARDBUTTONENABLEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x194CF480)
#define MIHOYO_SDK_WEBDELEGATE_SETFORWARDBUTTONENABLEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x194CF500)
#define MIHOYO_SDK_WEBDELEGATE_SETFORWARDBUTTONENABLEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x194CEE90)
#define MIHOYO_SDK_WEBDELEGATE_SETFORWARDBUTTONENABLEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x194CEE80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetForwardButtonEnabledDelegate_TypeDefinitionIndex = 18698;

	class WebDelegate_SetForwardButtonEnabledDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFORWARDBUTTONENABLEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFORWARDBUTTONENABLEDDELEGATE_INVOKE_OFFSET))(this, webView, enabled);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Boolean enabled, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFORWARDBUTTONENABLEDDELEGATE_BEGININVOKE_OFFSET))(this, webView, enabled, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFORWARDBUTTONENABLEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
