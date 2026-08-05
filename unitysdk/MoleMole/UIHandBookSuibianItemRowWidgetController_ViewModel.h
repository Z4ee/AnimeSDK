#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;

#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17DAE2E0)
#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAE2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianItemRowWidgetController_ViewModel_TypeDefinitionIndex = 51719;

	class UIHandBookSuibianItemRowWidgetController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
