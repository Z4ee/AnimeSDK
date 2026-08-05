#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7B044D15E4826ADC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x1482F5F0)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x1482F600)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1482F610)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCameraRemakePageContext_TypeDefinitionIndex = 50273;

	class ActivityCameraRemakePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_7B044D15E4826ADC _ActivityType_k__BackingField; // 0x28

		::System::Void _ctor(::Enum_3_7B044D15E4826ADC activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7B044D15E4826ADC))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET))(this, activityType);
		}

		::Enum_3_7B044D15E4826ADC get_ActivityType()
		{
			return ((::Enum_3_7B044D15E4826ADC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET))(this);
		}

		::System::Void set_ActivityType(::Enum_3_7B044D15E4826ADC value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7B044D15E4826ADC))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET))(this, value);
		}
	};
}
