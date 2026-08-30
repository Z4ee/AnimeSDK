#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxStatisticUpdateEntry; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXSTATISTICSPARAMEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE12A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxStatisticsParamExtension_TypeDefinitionIndex = 8611;

	class XboxStatisticsParamExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* names; // 0x10
		::Il2CppArray<::MiHoYo::SDK::PC::OS::XboxStatisticUpdateEntry*>* stats; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXSTATISTICSPARAMEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
