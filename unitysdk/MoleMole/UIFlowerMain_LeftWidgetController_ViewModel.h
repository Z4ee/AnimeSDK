#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
template <typename T> class Class_0_16E4307DCC419505_153;

#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_GET_TESTINT_OFFSET UNITYSDK_OFFSET(0x17301810)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17301830)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_SET_TESTINT_OFFSET UNITYSDK_OFFSET(0x17301820)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17301800)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_LeftWidgetController_ViewModel_TypeDefinitionIndex = 53031;

	class UIFlowerMain_LeftWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_153<::System::Int32>* _TestInt_k__BackingField; // 0x60

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_153<::System::Int32>* get_TestInt()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_GET_TESTINT_OFFSET))(this);
		}

		::System::Void set_TestInt(::Class_0_16E4307DCC419505_153<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_SET_TESTINT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
