#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC8F4E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC8F570)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC882E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F4C0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager_HoYoPassLoginCallbackDelegate_TypeDefinitionIndex = 20066;

	class LoginManager_HoYoPassLoginCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::AccountModel* accountModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_INVOKE_OFFSET))(this, retcode, message, accountModel);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::AccountModel* accountModel, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, retcode, message, accountModel, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSLOGINCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
