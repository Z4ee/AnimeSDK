#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class CommonShipEngineController;

#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB8902A0)
#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_METHOD_3_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xB890230)
#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB890290)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AirshipSetEngineStateBehaviour_TypeDefinitionIndex = 44606;

	class AirshipSetEngineStateBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::CommonShipEngineController* airshipEngine; // 0x20
		::EAirshipWorkingState workingState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_DD784213055292FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_METHOD_3_DD784213055292FB_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
