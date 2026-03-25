#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15F09C00)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15F09C30)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EF1D70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EEC750)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager_HoYoPassEventHandler_TypeDefinitionIndex = 7288;

	class LoginManager_HoYoPassEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSEVENTHANDLER_INVOKE_OFFSET))(this, args);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSEVENTHANDLER_BEGININVOKE_OFFSET))(this, args, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
