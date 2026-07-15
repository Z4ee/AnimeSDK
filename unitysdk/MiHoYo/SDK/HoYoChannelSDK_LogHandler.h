#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ACEC850)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ACEC8D0)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ACEC840)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEC7D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_LogHandler_TypeDefinitionIndex = 44799;

	class HoYoChannelSDK_LogHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::HoYoChannelSDK_LogLevel a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoChannelSDK_LogLevel a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
