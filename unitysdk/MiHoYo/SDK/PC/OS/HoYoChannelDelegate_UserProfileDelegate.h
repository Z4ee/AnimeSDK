#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelUserProfileParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelUserProfileResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_USERPROFILEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD0CF70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_USERPROFILEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD0CFB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_USERPROFILEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD05950)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_USERPROFILEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0CF50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_UserProfileDelegate_TypeDefinitionIndex = 20656;

	class HoYoChannelDelegate_UserProfileDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_USERPROFILEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_USERPROFILEDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_USERPROFILEDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_USERPROFILEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
