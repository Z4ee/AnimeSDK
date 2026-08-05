#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxStatisticEntry; }

#define MIHOYO_SDK_PC_OS_XBOXSTATISTICSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA12700)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxStatisticsExtension_TypeDefinitionIndex = 20773;

	class XboxStatisticsExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::XboxStatisticEntry*>* stats; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXSTATISTICSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
