#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175A68B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175A68F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175A6330)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175A6310)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_LoginDelegate_TypeDefinitionIndex = 7520;

	class HoYoChannelDelegate_LoginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
