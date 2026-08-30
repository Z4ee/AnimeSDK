#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AEA3B10)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AEA3B80)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AE94E80)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA3AA0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager_HoYoPassLoginCallbackDelegate_TypeDefinitionIndex = 8261;

	class LoginManager_HoYoPassLoginCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
