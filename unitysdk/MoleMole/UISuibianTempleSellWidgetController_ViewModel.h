#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
template <typename T> class Class_0_16E4307DCC419505_163;

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18897ED0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18897EC0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_1_OFFSET UNITYSDK_OFFSET(0x18898340)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController_ViewModel_TypeDefinitionIndex = 45980;

	class UISuibianTempleSellWidgetController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_163<::System::Int32>* smallChangeGainLimit; // 0x80
		::Class_0_16E4307DCC419505_163<::System::UInt32>* buddyUid; // 0x88
		::Class_0_16E4307DCC419505_163<::System::Int32>* buddyShowEnergy; // 0x90

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__4_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_1_OFFSET))(this);
		}
	};
}
