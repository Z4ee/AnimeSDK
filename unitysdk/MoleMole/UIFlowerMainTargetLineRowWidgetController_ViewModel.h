#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_0_16E4307DCC419505_103;

#define MOLEMOLE_UIFLOWERMAINTARGETLINEROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1518E590)
#define MOLEMOLE_UIFLOWERMAINTARGETLINEROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1518E580)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTargetLineRowWidgetController_ViewModel_TypeDefinitionIndex = 50755;

	class UIFlowerMainTargetLineRowWidgetController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETLINEROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETLINEROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
