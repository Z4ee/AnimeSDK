#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC419505_154;

#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x175D2EF0)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x175D2EE0)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_0_OFFSET UNITYSDK_OFFSET(0x175D3070)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewGuestPopWindowController_ViewModel_TypeDefinitionIndex = 67942;

	class UIFlowerShopNewGuestPopWindowController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_154<::System::Int32>* PopID; // 0x60
		::Class_0_16E4307DCC419505_154<::System::Int32>* AccessID; // 0x68
		::Class_0_16E4307DCC419505_153<::System::Boolean>* ShowAccess; // 0x70

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_0_OFFSET))(this);
		}
	};
}
