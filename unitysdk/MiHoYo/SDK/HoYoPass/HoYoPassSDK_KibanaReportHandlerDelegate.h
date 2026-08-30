#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83E70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83ED0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83E60)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE83DE0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_KibanaReportHandlerDelegate_TypeDefinitionIndex = 8253;

	class HoYoPassSDK_KibanaReportHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Il2CppArray<::System::Byte>* a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* a1, ::System::UInt64 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_KIBANAREPORTHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
