#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthStatusResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A2750D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A275100)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A2750C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A275050)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate_TypeDefinitionIndex = 8491;

	class HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
