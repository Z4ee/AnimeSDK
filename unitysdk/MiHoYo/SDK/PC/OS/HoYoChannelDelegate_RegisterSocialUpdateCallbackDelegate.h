#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelSocialUpdateResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERSOCIALUPDATECALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE0DE70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERSOCIALUPDATECALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE0DEA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERSOCIALUPDATECALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE0D950)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERSOCIALUPDATECALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0D930)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate_TypeDefinitionIndex = 20657;

	class HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERSOCIALUPDATECALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERSOCIALUPDATECALLBACKDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERSOCIALUPDATECALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERSOCIALUPDATECALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
