#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC8490)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC84D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC8480)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC8390)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_StatisticsDelegate_TypeDefinitionIndex = 8506;

	class HoYoChannelDelegate_StatisticsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
