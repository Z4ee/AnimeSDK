#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175355B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17535610)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17535040)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1752FC60)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_KibanaReportHandlerDelegate_TypeDefinitionIndex = 7332;

	class HoYoPassSDK_KibanaReportHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Il2CppArray<::System::Byte>* content, ::System::UInt64 len)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_INVOKE_OFFSET))(this, content, len);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* content, ::System::UInt64 len, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, content, len, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
