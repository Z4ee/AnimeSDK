#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3384FC764485EA3.h"
#include "unitysdk/System/Object.h"

class Class_2_1E89A1A01EA84819;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x1268E7A0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1268E790)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_DetailTypeFilter_TypeDefinitionIndex = 44799;

	class UISuibianTempleManageInfoWidgetController_DetailTypeFilter : public ::System::Object
	{
	public:
		::Enum_3_D3384FC764485EA3 detailType; // 0x10

		::System::Void _ctor(::Enum_3_D3384FC764485EA3 detailType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D3384FC764485EA3))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER__CTOR_OFFSET))(this, detailType);
		}

		::System::Boolean Predicate(::Class_2_1E89A1A01EA84819* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1E89A1A01EA84819*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
