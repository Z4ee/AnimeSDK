#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInitModel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInitResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175A62D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175A6300)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175A5D70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175A5D50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_InitDelegate_TypeDefinitionIndex = 7519;

	class HoYoChannelDelegate_InitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelInitResult* Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel* param)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelInitResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInitModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_INVOKE_OFFSET))(this, param);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel* param, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInitModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, object);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelInitResult* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelInitResult*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
