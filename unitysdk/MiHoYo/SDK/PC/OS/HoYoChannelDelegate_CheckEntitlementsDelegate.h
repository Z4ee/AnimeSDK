#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175A5120)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175A5160)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175A4BA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175A4B80)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_CheckEntitlementsDelegate_TypeDefinitionIndex = 7524;

	class HoYoChannelDelegate_CheckEntitlementsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
