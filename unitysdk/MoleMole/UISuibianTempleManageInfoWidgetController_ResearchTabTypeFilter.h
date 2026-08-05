#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EDC2AF1268851C10.h"
#include "unitysdk/System/Object.h"

class Class_2_EF2EC4D8F28BA1A6;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x151214A0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15121490)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_ResearchTabTypeFilter_TypeDefinitionIndex = 40582;

	class UISuibianTempleManageInfoWidgetController_ResearchTabTypeFilter : public ::System::Object
	{
	public:
		::Enum_3_EDC2AF1268851C10 researchTabType; // 0x10

		::System::Void _ctor(::Enum_3_EDC2AF1268851C10 researchTabType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EDC2AF1268851C10))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER__CTOR_OFFSET))(this, researchTabType);
		}

		::System::Boolean Predicate(::Class_2_EF2EC4D8F28BA1A6* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_EF2EC4D8F28BA1A6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
