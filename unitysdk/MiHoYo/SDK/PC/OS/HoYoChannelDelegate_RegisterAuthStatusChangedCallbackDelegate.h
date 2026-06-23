#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthStatusResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC94670)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC946A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC94170)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC94150)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate_TypeDefinitionIndex = 20297;

	class HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERAUTHSTATUSCHANGEDCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
