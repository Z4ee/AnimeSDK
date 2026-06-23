#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
template <typename T> class Class_0_16E4307DCC419505_153;

#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_GET_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x16A86990)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16A869B0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_SET_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x16A869A0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A85E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_TopWidgetController_ViewModel_TypeDefinitionIndex = 60843;

	class UIFlowerMain_TopWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _ShowTips_k__BackingField; // 0x60

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_ShowTips()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_GET_SHOWTIPS_OFFSET))(this);
		}

		::System::Void set_ShowTips(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_SET_SHOWTIPS_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
