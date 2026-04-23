#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176A6700)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176A6740)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x176A1600)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176A66E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetBackButtonActionDelegate_TypeDefinitionIndex = 6877;

	class WebDelegate_SetBackButtonActionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Func_1<::System::Boolean>* func)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_INVOKE_OFFSET))(this, webView, func);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Func_1<::System::Boolean>* func, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Func_1<::System::Boolean>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_BEGININVOKE_OFFSET))(this, webView, func, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
