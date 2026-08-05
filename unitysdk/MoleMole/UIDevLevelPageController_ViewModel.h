#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;

#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19716060)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19716050)

namespace MoleMole
{
	inline static constexpr unsigned int UIDevLevelPageController_ViewModel_TypeDefinitionIndex = 63871;

	class UIDevLevelPageController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
