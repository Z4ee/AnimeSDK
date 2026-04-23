#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CONSUMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175A5D00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CONSUMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175A5D40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CONSUMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175A5780)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CONSUMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175A5760)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_ConsumeDelegate_TypeDefinitionIndex = 7525;

	class HoYoChannelDelegate_ConsumeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CONSUMEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CONSUMEDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CONSUMEDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CONSUMEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
