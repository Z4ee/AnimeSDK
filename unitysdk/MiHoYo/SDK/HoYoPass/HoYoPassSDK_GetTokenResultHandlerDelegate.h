#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTOKENRESULTHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB39AD0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTOKENRESULTHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB39B70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTOKENRESULTHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB39740)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTOKENRESULTHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB39720)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_GetTokenResultHandlerDelegate_TypeDefinitionIndex = 20059;

	class HoYoPassSDK_GetTokenResultHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTOKENRESULTHANDLERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode code, ::Il2CppArray<::System::Byte>* token, ::System::UInt64 len)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTOKENRESULTHANDLERDELEGATE_INVOKE_OFFSET))(this, code, token, len);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode code, ::Il2CppArray<::System::Byte>* token, ::System::UInt64 len, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTOKENRESULTHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, code, token, len, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTOKENRESULTHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
