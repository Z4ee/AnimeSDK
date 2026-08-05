#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15A424D0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15A424C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyPageController_ViewModel_TypeDefinitionIndex = 47037;

	class UISuibianTempleBuddyPageController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
