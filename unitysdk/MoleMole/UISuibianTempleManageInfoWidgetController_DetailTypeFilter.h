#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3384FC764485EA3.h"
#include "unitysdk/System/Object.h"

class Class_2_EF2EC4D8F28BA1A6;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x1848CED0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1848CEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_DetailTypeFilter_TypeDefinitionIndex = 40589;

	class UISuibianTempleManageInfoWidgetController_DetailTypeFilter : public ::System::Object
	{
	public:
		::Enum_3_D3384FC764485EA3 detailType; // 0x10

		::System::Void _ctor(::Enum_3_D3384FC764485EA3 detailType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D3384FC764485EA3))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER__CTOR_OFFSET))(this, detailType);
		}

		::System::Boolean Predicate(::Class_2_EF2EC4D8F28BA1A6* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_EF2EC4D8F28BA1A6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
