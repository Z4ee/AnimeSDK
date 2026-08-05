#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD7440)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD7480)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD6EB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD6E90)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_LeaderboardDelegate_TypeDefinitionIndex = 20660;

	class HoYoChannelDelegate_LeaderboardDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
