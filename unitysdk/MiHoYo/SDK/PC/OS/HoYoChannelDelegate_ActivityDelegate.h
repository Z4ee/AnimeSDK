#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACTIVITYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CACFBB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACTIVITYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CACFBF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACTIVITYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CACF620)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACTIVITYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CACF600)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_ActivityDelegate_TypeDefinitionIndex = 20661;

	class HoYoChannelDelegate_ActivityDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACTIVITYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACTIVITYDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACTIVITYDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACTIVITYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
