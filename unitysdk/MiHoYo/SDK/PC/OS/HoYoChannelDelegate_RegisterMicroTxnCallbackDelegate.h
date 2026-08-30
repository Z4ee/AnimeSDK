#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelMicroTxnResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERMICROTXNCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7C00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERMICROTXNCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7C30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERMICROTXNCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7BF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERMICROTXNCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC7B80)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate_TypeDefinitionIndex = 8489;

	class HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERMICROTXNCALLBACKDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERMICROTXNCALLBACKDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERMICROTXNCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERMICROTXNCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
