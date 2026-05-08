#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA49120)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_2__PROCESSAGEGATETICKET_B__5_OFFSET UNITYSDK_OFFSET(0x1AA49130)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass30_2_TypeDefinitionIndex = 19643;

	class AgeGateManager___c__DisplayClass30_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* currentDialog; // 0x10
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_2__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessAgeGateTicket_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_2__PROCESSAGEGATETICKET_B__5_OFFSET))(this);
		}
	};
}
