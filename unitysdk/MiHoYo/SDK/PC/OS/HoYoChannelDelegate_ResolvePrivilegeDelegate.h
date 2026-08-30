#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA1FAF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA1FB30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA1FAE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1F9F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_ResolvePrivilegeDelegate_TypeDefinitionIndex = 8495;

	class HoYoChannelDelegate_ResolvePrivilegeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
