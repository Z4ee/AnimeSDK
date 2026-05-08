#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_0_16E4307DCC419505_103;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_GET_TESTINT_OFFSET UNITYSDK_OFFSET(0x158F7460)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x158F7480)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_SET_TESTINT_OFFSET UNITYSDK_OFFSET(0x158F7470)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x158F7450)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_LeftWidgetController_ViewModel_TypeDefinitionIndex = 40622;

	class UIFlowerMain_LeftWidgetController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_12<::System::Int32>* _TestInt_k__BackingField; // 0x70

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC41950C_12<::System::Int32>* get_TestInt()
		{
			return ((::Class_0_16E4307DCC41950C_12<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_GET_TESTINT_OFFSET))(this);
		}

		::System::Void set_TestInt(::Class_0_16E4307DCC41950C_12<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_12<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_SET_TESTINT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
