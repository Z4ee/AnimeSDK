#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD386F0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__PROCESSAGEGATETICKET_B__2_OFFSET UNITYSDK_OFFSET(0x1DD38700)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass30_0_TypeDefinitionIndex = 21149;

	class AgeGateManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* dialog; // 0x10
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessAgeGateTicket_b__2(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* currentDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__PROCESSAGEGATETICKET_B__2_OFFSET))(this, currentDialog);
		}
	};
}
