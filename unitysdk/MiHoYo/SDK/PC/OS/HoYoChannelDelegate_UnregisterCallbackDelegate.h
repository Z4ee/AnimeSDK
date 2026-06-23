#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelCallbackType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF74D10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF74D80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF74A20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF74A00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_UnregisterCallbackDelegate_TypeDefinitionIndex = 20298;

	class HoYoChannelDelegate_UnregisterCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelCallbackType callbackType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCallbackType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_INVOKE_OFFSET))(this, callbackType);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelCallbackType callbackType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCallbackType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, callbackType, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
