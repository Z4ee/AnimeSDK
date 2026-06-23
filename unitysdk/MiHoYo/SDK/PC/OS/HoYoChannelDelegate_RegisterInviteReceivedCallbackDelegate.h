#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteReceivedResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9DD740)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9DD770)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9DD240)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DD220)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate_TypeDefinitionIndex = 20317;

	class HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERINVITERECEIVEDCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
