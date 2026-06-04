#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182538E0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__PROCESSAGEGATETICKET_B__2_OFFSET UNITYSDK_OFFSET(0x182561F0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass30_0_TypeDefinitionIndex = 8717;

	class AgeGateManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x10
		::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* dialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessAgeGateTicket_b__2(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__PROCESSAGEGATETICKET_B__2_OFFSET))(this, a1);
		}
	};
}
