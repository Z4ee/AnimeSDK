#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18460B90)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18460BD0)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18460B80)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18460B00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_AsyncShowPaymentWindowDelegate_TypeDefinitionIndex = 7654;

	class WeGameDelegate_AsyncShowPaymentWindowDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCSHOWPAYMENTWINDOWDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
