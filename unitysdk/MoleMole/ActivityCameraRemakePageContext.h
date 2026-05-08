#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A865FEC42C70DCB5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x11C75E50)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x11C75E60)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11C75E70)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCameraRemakePageContext_TypeDefinitionIndex = 55338;

	class ActivityCameraRemakePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A865FEC42C70DCB5 _ActivityType_k__BackingField; // 0x28

		::System::Void _ctor(::Enum_3_A865FEC42C70DCB5 activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A865FEC42C70DCB5))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET))(this, activityType);
		}

		::Enum_3_A865FEC42C70DCB5 get_ActivityType()
		{
			return ((::Enum_3_A865FEC42C70DCB5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET))(this);
		}

		::System::Void set_ActivityType(::Enum_3_A865FEC42C70DCB5 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A865FEC42C70DCB5))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET))(this, value);
		}
	};
}
