#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1602BC00)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1602BC40)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1602B680)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1602B660)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_AsyncShowPaymentWindowDelegate_TypeDefinitionIndex = 6709;

	class WeGameDelegate_AsyncShowPaymentWindowDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* orderId, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_INVOKE_OFFSET))(this, orderId, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* orderId, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_BEGININVOKE_OFFSET))(this, orderId, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
