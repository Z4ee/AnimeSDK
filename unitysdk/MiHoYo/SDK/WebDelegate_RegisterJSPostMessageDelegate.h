#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB5CA60)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB5CAA0)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB5C440)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB5C420)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_RegisterJSPostMessageDelegate_TypeDefinitionIndex = 19616;

	class WebDelegate_RegisterJSPostMessageDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::String* typeString, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_INVOKE_OFFSET))(this, webView, typeString, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::String* typeString, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_BEGININVOKE_OFFSET))(this, webView, typeString, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
