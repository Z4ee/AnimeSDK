#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB41620)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS8_0__HANDLEAGEGATEFROMERRORCODE_B__1_OFFSET UNITYSDK_OFFSET(0x1BB41630)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass8_0_TypeDefinitionIndex = 20468;

	class AgeGateManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* errorDialog; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateFromErrorCode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS8_0__HANDLEAGEGATEFROMERRORCODE_B__1_OFFSET))(this);
		}
	};
}
