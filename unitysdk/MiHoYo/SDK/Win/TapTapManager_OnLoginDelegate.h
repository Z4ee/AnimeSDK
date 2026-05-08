#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::Win { class TapTapToken; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA6BB90)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA6BC20)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA6B810)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA6B800)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int TapTapManager_OnLoginDelegate_TypeDefinitionIndex = 19952;

	class TapTapManager_OnLoginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::Win::TapTapToken* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::Win::TapTapToken*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_INVOKE_OFFSET))(this, retcode, message, accessToken);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::Win::TapTapToken* accessToken, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::Win::TapTapToken*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_BEGININVOKE_OFFSET))(this, retcode, message, accessToken, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
