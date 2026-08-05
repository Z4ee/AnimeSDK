#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACHIEVEMENTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE0D360)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACHIEVEMENTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE0D3A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACHIEVEMENTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE0CDD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACHIEVEMENTSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0CDB0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_AchievementsDelegate_TypeDefinitionIndex = 20658;

	class HoYoChannelDelegate_AchievementsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACHIEVEMENTSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACHIEVEMENTSDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACHIEVEMENTSDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_ACHIEVEMENTSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
