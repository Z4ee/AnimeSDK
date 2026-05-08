#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A066B80)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS7_0__HANDLEAGEGATEFROMERRORCODE_B__1_OFFSET UNITYSDK_OFFSET(0x1A066B90)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass7_0_TypeDefinitionIndex = 19639;

	class AgeGateManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* currentDialog; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateFromErrorCode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS7_0__HANDLEAGEGATEFROMERRORCODE_B__1_OFFSET))(this);
		}
	};
}
