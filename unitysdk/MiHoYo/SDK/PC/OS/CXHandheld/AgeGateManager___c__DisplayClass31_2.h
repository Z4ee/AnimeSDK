#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CE010)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_2__PROCESSAGEGATETICKET_B__5_OFFSET UNITYSDK_OFFSET(0x1B9CE7F0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass31_2_TypeDefinitionIndex = 8666;

	class AgeGateManager___c__DisplayClass31_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* errorDialog; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_2__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessAgeGateTicket_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS31_2__PROCESSAGEGATETICKET_B__5_OFFSET))(this);
		}
	};
}
