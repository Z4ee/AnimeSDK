#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_GET_TESTINT_OFFSET UNITYSDK_OFFSET(0x17D8D750)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17D8D770)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_SET_TESTINT_OFFSET UNITYSDK_OFFSET(0x17D8D760)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8D740)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_LeftWidgetController_ViewModel_TypeDefinitionIndex = 76115;

	class UIFlowerMain_LeftWidgetController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Int32>* _TestInt_k__BackingField; // 0x80

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_164<::System::Int32>* get_TestInt()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_GET_TESTINT_OFFSET))(this);
		}

		::System::Void set_TestInt(::Class_0_16E4307DCC419505_164<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_SET_TESTINT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
