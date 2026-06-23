#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/Enum_3_EDC2AF1268851C10.h"
#include "unitysdk/MoleMole/UISuibianDevelopRightWidgetController_DevelopRightState.h"

class Class_0_16E4307DCC419505_139;
class Class_2_49EA731F6D649ADF;
template <typename T> class Class_0_16E4307DCC419505_163;

#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x103D9610)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET UNITYSDK_OFFSET(0x103D9730)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETRIGHTTABTYPE_OFFSET UNITYSDK_OFFSET(0x103D96D0)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x103D9600)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_0_OFFSET UNITYSDK_OFFSET(0x103D97A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_ViewModel_TypeDefinitionIndex = 77779;

	class UISuibianDevelopRightWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_163<::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState>* developRightState; // 0x60
		::Class_2_49EA731F6D649ADF* productViewModel; // 0x68

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
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
