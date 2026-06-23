#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10887270)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x10887260)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionBangbooHeadWidgetController_ViewModel_TypeDefinitionIndex = 59611;

	class UISuibianTempleExpeditionBangbooHeadWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
