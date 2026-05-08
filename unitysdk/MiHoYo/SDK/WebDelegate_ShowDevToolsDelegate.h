#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SHOWDEVTOOLSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A081A10)
#define MIHOYO_SDK_WEBDELEGATE_SHOWDEVTOOLSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A081A90)
#define MIHOYO_SDK_WEBDELEGATE_SHOWDEVTOOLSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A081420)
#define MIHOYO_SDK_WEBDELEGATE_SHOWDEVTOOLSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A081410)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_ShowDevToolsDelegate_TypeDefinitionIndex = 18707;

	class WebDelegate_ShowDevToolsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SHOWDEVTOOLSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SHOWDEVTOOLSDELEGATE_INVOKE_OFFSET))(this, webView, isShow);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Boolean isShow, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SHOWDEVTOOLSDELEGATE_BEGININVOKE_OFFSET))(this, webView, isShow, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SHOWDEVTOOLSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
