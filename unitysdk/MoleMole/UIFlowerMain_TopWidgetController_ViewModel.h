#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_GET_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x187FF720)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x187FF740)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_SET_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x187FF730)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x187FEC20)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_TopWidgetController_ViewModel_TypeDefinitionIndex = 71069;

	class UIFlowerMain_TopWidgetController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _ShowTips_k__BackingField; // 0x80

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_ShowTips()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_GET_SHOWTIPS_OFFSET))(this);
		}

		::System::Void set_ShowTips(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_SET_SHOWTIPS_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
