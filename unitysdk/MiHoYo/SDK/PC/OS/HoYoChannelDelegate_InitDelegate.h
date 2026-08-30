#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInitModel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInitResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A274890)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A2748C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A274880)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A274790)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_InitDelegate_TypeDefinitionIndex = 8482;

	class HoYoChannelDelegate_InitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelInitResult* Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelInitResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInitModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInitModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelInitResult* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelInitResult*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
