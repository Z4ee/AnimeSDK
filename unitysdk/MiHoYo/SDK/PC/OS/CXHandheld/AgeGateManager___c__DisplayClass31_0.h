#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class AgeGateManager; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateAgeAppealOptionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65DA40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_0__PROCESSAGEGATETICKET_B__2_OFFSET UNITYSDK_OFFSET(0x1A660CA0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass31_0_TypeDefinitionIndex = 8664;

	class AgeGateManager___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateAgeAppealOptionDialog* dialog; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessAgeGateTicket_b__2(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_0__PROCESSAGEGATETICKET_B__2_OFFSET))(this, a1);
		}
	};
}
