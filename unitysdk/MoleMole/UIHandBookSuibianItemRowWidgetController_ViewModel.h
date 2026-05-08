#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_0_16E4307DCC419505_103;

#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15259520)
#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15259510)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianItemRowWidgetController_ViewModel_TypeDefinitionIndex = 60960;

	class UIHandBookSuibianItemRowWidgetController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
