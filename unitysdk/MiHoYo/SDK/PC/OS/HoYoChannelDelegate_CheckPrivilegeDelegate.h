#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A274380)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A2743B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A264FA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A274290)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_CheckPrivilegeDelegate_TypeDefinitionIndex = 8494;

	class HoYoChannelDelegate_CheckPrivilegeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
