#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DDFF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS28_0__GETSTATISTICS_B__0_OFFSET UNITYSDK_OFFSET(0x1C0DE000)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass28_0_TypeDefinitionIndex = 20270;

	class HoYoChannel___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetStatistics_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS28_0__GETSTATISTICS_B__0_OFFSET))(this, result);
		}
	};
}
