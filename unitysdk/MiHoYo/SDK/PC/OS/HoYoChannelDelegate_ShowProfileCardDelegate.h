#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowProfileCardParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowProfileCardResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWPROFILECARDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B337CC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWPROFILECARDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B337D00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWPROFILECARDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B337740)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWPROFILECARDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B337720)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_ShowProfileCardDelegate_TypeDefinitionIndex = 20304;

	class HoYoChannelDelegate_ShowProfileCardDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWPROFILECARDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWPROFILECARDDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWPROFILECARDDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWPROFILECARDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
