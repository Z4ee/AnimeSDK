#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EBED80)
#define MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBEDC0)
#define MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x15EBEDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotResultFoodProgressRowWidgetController___c_TypeDefinitionIndex = 63902;

	class UIActivityHotPotResultFoodProgressRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityHotPotResultFoodProgressRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotPotResultFoodProgressRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotResultFoodProgressRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EAA0);
		}
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotResultFoodProgressRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EAA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetDataAndRefreshView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__4_0_OFFSET))(this);
		}
	};
}
