#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x194CFA80)
#define MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x194CFB00)
#define MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x194CF520)
#define MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x194CF510)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetNewWindowTypeDelegate_TypeDefinitionIndex = 18706;

	class WebDelegate_SetNewWindowTypeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_INVOKE_OFFSET))(this, webView, type);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Int32 type, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_BEGININVOKE_OFFSET))(this, webView, type, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
