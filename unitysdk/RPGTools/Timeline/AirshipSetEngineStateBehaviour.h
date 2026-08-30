#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class CommonShipEngineController;

#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_METHOD_3_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1B52B9C0)
#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52BA20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AirshipSetEngineStateBehaviour_TypeDefinitionIndex = 48295;

	class AirshipSetEngineStateBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::CommonShipEngineController* airshipEngine; // 0x20
		::EAirshipWorkingState workingState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_METHOD_3_EC2B405D0723571D_OFFSET))(this);
		}
	};
}
