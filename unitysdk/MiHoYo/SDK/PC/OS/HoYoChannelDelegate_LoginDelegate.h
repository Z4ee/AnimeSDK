#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19940970)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x199409B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19940960)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19940870)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_LoginDelegate_TypeDefinitionIndex = 8435;

	class HoYoChannelDelegate_LoginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGINDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
