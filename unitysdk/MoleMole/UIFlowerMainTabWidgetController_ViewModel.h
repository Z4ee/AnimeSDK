#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_0_16E4307DCC419505_103;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_GET_SELECT_OFFSET UNITYSDK_OFFSET(0x15EF83A0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15EF83C0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_SET_SELECT_OFFSET UNITYSDK_OFFSET(0x15EF83B0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF76B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTabWidgetController_ViewModel_TypeDefinitionIndex = 50932;

	class UIFlowerMainTabWidgetController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::Boolean>* _Select_k__BackingField; // 0x70

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC41950C_13<::System::Boolean>* get_Select()
		{
			return ((::Class_0_16E4307DCC41950C_13<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_GET_SELECT_OFFSET))(this);
		}

		::System::Void set_Select(::Class_0_16E4307DCC41950C_13<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_SET_SELECT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
