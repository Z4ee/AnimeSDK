#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;

#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1696F7A0)
#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1696F790)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianItemRowWidgetController_ViewModel_TypeDefinitionIndex = 86780;

	class UIHandBookSuibianItemRowWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
