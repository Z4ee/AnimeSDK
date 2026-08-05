#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INVITEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C908300)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INVITEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C908340)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INVITEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C907D70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INVITEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C907D50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_InviteDelegate_TypeDefinitionIndex = 20662;

	class HoYoChannelDelegate_InviteDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INVITEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INVITEDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INVITEDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_INVITEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
