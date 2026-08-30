#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A660620)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_1__PROCESSAGEGATETICKET_B__3_OFFSET UNITYSDK_OFFSET(0x1A660E50)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass31_1_TypeDefinitionIndex = 8665;

	class AgeGateManager___c__DisplayClass31_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* currentDialog; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_1__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessAgeGateTicket_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_1__PROCESSAGEGATETICKET_B__3_OFFSET))(this);
		}
	};
}
