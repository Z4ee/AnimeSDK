#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CFD5460)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CFD54A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CFD4ED0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD4EB0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_ResolvePrivilegeDelegate_TypeDefinitionIndex = 20648;

	class HoYoChannelDelegate_ResolvePrivilegeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RESOLVEPRIVILEGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
