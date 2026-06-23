#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_GET_SELECT_OFFSET UNITYSDK_OFFSET(0x17A77AC0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17A77AE0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_SET_SELECT_OFFSET UNITYSDK_OFFSET(0x17A77AD0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17A76DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTabWidgetController_ViewModel_TypeDefinitionIndex = 56729;

	class UIFlowerMainTabWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _Select_k__BackingField; // 0x60

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_Select()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_GET_SELECT_OFFSET))(this);
		}

		::System::Void set_Select(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_SET_SELECT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
