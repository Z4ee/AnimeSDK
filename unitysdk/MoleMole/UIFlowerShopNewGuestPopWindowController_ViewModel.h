#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
template <typename T> class Class_0_16E4307DCC419505_152;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19385A90)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19385A80)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_0_OFFSET UNITYSDK_OFFSET(0x19385C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewGuestPopWindowController_ViewModel_TypeDefinitionIndex = 62739;

	class UIFlowerShopNewGuestPopWindowController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Boolean>* ShowAccess; // 0x80
		::Class_0_16E4307DCC419505_152<::System::Int32>* PopID; // 0x88
		::Class_0_16E4307DCC419505_152<::System::Int32>* AccessID; // 0x90

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
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
