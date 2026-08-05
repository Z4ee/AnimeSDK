#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13026FA0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x13026F90)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionBangbooHeadWidgetController_ViewModel_TypeDefinitionIndex = 81023;

	class UISuibianTempleExpeditionBangbooHeadWidgetController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
