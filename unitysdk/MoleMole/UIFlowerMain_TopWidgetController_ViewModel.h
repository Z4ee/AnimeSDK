#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_0_16E4307DCC419505_103;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_GET_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x149CC290)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x149CC2B0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_SET_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x149CC2A0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x149CB780)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_TopWidgetController_ViewModel_TypeDefinitionIndex = 76536;

	class UIFlowerMain_TopWidgetController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_12<::System::Boolean>* _ShowTips_k__BackingField; // 0x70

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC41950C_12<::System::Boolean>* get_ShowTips()
		{
			return ((::Class_0_16E4307DCC41950C_12<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_GET_SHOWTIPS_OFFSET))(this);
		}

		::System::Void set_ShowTips(::Class_0_16E4307DCC41950C_12<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_12<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_SET_SHOWTIPS_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
