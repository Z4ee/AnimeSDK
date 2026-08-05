#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EF2EC4D8F28BA1A6;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x160F00A0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x160F0280)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_ProductTypeFilter_TypeDefinitionIndex = 40584;

	class UISuibianTempleManageInfoWidgetController_ProductTypeFilter : public ::System::Object
	{
	public:
		::System::Int32 ProductType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate(::Class_2_EF2EC4D8F28BA1A6* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_EF2EC4D8F28BA1A6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
