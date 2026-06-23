#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1880BEC0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___C__DISPLAYCLASS1_0__REFRESHVIEWWITHMODEL_B__0_OFFSET UNITYSDK_OFFSET(0x1880BED0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___C__DISPLAYCLASS1_0__REFRESHVIEWWITHMODEL_B__1_OFFSET UNITYSDK_OFFSET(0x1880C080)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetControllerWithModel___c__DisplayClass1_0_TypeDefinitionIndex = 42803;

	class UIGeneralToggleWidgetControllerWithModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralToggleWidgetControllerWithModel* __4__this; // 0x10
		::Class_0_16E4307DCC419505_165<::System::Boolean>* model; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshViewWithModel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___C__DISPLAYCLASS1_0__REFRESHVIEWWITHMODEL_B__0_OFFSET))(this);
		}

		::System::Void _RefreshViewWithModel_b__1(::System::Boolean value, ::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___C__DISPLAYCLASS1_0__REFRESHVIEWWITHMODEL_B__1_OFFSET))(this, value, _);
		}
	};
}
