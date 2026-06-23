#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C575F60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C575F90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C575A20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C575A00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_CheckPrivilegeDelegate_TypeDefinitionIndex = 20300;

	class HoYoChannelDelegate_CheckPrivilegeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* param)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_INVOKE_OFFSET))(this, param);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* param, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, object);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKPRIVILEGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
