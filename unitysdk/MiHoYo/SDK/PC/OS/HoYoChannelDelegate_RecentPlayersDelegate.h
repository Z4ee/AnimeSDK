#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD7FC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD8000)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD7A30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD7A10)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RecentPlayersDelegate_TypeDefinitionIndex = 20663;

	class HoYoChannelDelegate_RecentPlayersDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
