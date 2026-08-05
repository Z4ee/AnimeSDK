#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4AF1C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4AF200)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4AEC30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AEC10)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_StatisticsDelegate_TypeDefinitionIndex = 20659;

	class HoYoChannelDelegate_StatisticsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_STATISTICSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
