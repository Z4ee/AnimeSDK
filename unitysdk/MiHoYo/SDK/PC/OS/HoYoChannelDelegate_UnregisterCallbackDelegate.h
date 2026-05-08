#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x199A4BF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x199A4C60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x199A48F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x199A48E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_UnregisterCallbackDelegate_TypeDefinitionIndex = 19355;

	class HoYoChannelDelegate_UnregisterCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 callbackType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_INVOKE_OFFSET))(this, callbackType);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 callbackType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, callbackType, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_UNREGISTERCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
