#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E57310)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS28_1__PROCESSAGEGATETICKET_B__3_OFFSET UNITYSDK_OFFSET(0x15E573C0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass28_1_TypeDefinitionIndex = 7669;

	class AgeGateManager___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* currentDialog; // 0x10
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessAgeGateTicket_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS28_1__PROCESSAGEGATETICKET_B__3_OFFSET))(this);
		}
	};
}
