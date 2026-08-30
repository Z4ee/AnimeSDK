#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteReceivedResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7B40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7B70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7B30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2751D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate_TypeDefinitionIndex = 8511;

	class HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
