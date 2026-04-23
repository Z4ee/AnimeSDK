#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHACCOUNTINFORESULTHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175359E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHACCOUNTINFORESULTHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17535A80)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHACCOUNTINFORESULTHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17535640)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHACCOUNTINFORESULTHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175341B0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_RefreshAccountInfoResultHandlerDelegate_TypeDefinitionIndex = 7334;

	class HoYoPassSDK_RefreshAccountInfoResultHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHACCOUNTINFORESULTHANDLERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode code, ::Il2CppArray<::System::Byte>* content, ::System::UInt64 len)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHACCOUNTINFORESULTHANDLERDELEGATE_INVOKE_OFFSET))(this, code, content, len);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode code, ::Il2CppArray<::System::Byte>* content, ::System::UInt64 len, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHACCOUNTINFORESULTHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, code, content, len, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHACCOUNTINFORESULTHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
