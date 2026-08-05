#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGSTRATEGYHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D767BA0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGSTRATEGYHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D767C10)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGSTRATEGYHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7678A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGSTRATEGYHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D767880)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_LogStrategyHandlerDelegate_TypeDefinitionIndex = 20408;

	class HoYoPassSDK_LogStrategyHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGSTRATEGYHANDLERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 strategy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGSTRATEGYHANDLERDELEGATE_INVOKE_OFFSET))(this, strategy);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 strategy, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGSTRATEGYHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, strategy, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGSTRATEGYHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
