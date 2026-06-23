#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AEF4D15E4700EEA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x134642A0)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x134642B0)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x134642C0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCameraRemakePageContext_TypeDefinitionIndex = 64902;

	class ActivityCameraRemakePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_7AEF4D15E4700EEA _ActivityType_k__BackingField; // 0x28

		::System::Void _ctor(::Enum_3_7AEF4D15E4700EEA activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7AEF4D15E4700EEA))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET))(this, activityType);
		}

		::Enum_3_7AEF4D15E4700EEA get_ActivityType()
		{
			return ((::Enum_3_7AEF4D15E4700EEA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET))(this);
		}

		::System::Void set_ActivityType(::Enum_3_7AEF4D15E4700EEA value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7AEF4D15E4700EEA))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET))(this, value);
		}
	};
}
