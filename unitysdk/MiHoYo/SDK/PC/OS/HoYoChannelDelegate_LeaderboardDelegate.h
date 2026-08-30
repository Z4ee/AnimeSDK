#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA1F0E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA1F120)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA14FF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1EFF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_LeaderboardDelegate_TypeDefinitionIndex = 8507;

	class HoYoChannelDelegate_LeaderboardDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LEADERBOARDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
