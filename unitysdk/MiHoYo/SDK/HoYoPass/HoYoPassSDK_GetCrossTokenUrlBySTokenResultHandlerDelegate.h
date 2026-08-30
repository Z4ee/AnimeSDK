#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKENRESULTHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83B10)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKENRESULTHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83BB0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKENRESULTHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83AF0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKENRESULTHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE83A80)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_GetCrossTokenUrlBySTokenResultHandlerDelegate_TypeDefinitionIndex = 8257;

	class HoYoPassSDK_GetCrossTokenUrlBySTokenResultHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKENRESULTHANDLERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKENRESULTHANDLERDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKENRESULTHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKENRESULTHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
