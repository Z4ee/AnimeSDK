#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
template <typename T> class Class_0_16E4307DCC419505_163;

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x103ECF80)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x103ECF70)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_1_OFFSET UNITYSDK_OFFSET(0x103ED3E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController_ViewModel_TypeDefinitionIndex = 69131;

	class UISuibianTempleSellWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_163<::System::Int32>* smallChangeGainLimit; // 0x60
		::Class_0_16E4307DCC419505_163<::System::Int32>* buddyShowEnergy; // 0x68
		::Class_0_16E4307DCC419505_163<::System::UInt32>* buddyUid; // 0x70

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
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
