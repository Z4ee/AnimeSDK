#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"
#include "unitysdk/Enum_3_EDC2AF1268851C10.h"
#include "unitysdk/MoleMole/UISuibianDevelopRightWidgetController_DevelopRightState.h"

class Class_0_16E4307DCC419505_103;
class Class_2_49EA731F6D649ADF;
template <typename T> class Class_0_16E4307DCC419505_97;

#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15503920)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET UNITYSDK_OFFSET(0x15503A40)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETRIGHTTABTYPE_OFFSET UNITYSDK_OFFSET(0x155039E0)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15503910)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_0_OFFSET UNITYSDK_OFFSET(0x15503AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_ViewModel_TypeDefinitionIndex = 75261;

	class UISuibianDevelopRightWidgetController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_2_49EA731F6D649ADF* productViewModel; // 0x70
		::Class_0_16E4307DCC419505_97<::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState>* developRightState; // 0x78

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Void SetRightTabType(::Enum_3_EDC2AF1268851C10 developTabType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EDC2AF1268851C10))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETRIGHTTABTYPE_OFFSET))(this, developTabType);
		}

		::System::Void SetProductID(::System::Int32 productID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET))(this, productID);
		}

		::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState _OnCreateProperty_b__3_0()
		{
			return ((::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_0_OFFSET))(this);
		}
	};
}
