#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D56A00)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D56A40)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__58_0_OFFSET UNITYSDK_OFFSET(0x15D56A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c_TypeDefinitionIndex = 76317;

	class UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__58_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x47BA0);
		}
		static ::MoleMole::UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c** StaticGet___9()
		{
			return (::MoleMole::UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x47BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__58_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__58_0_OFFSET))(this);
		}
	};
}
