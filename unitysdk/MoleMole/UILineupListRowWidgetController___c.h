#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B885F0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B88630)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__ONCLICKDELITEM_B__9_1_OFFSET UNITYSDK_OFFSET(0x14B88640)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupListRowWidgetController___c_TypeDefinitionIndex = 52363;

	class UILineupListRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILineupListRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CCF0);
		}
		static ::MoleMole::UILineupListRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UILineupListRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UILineupListRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CCF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickDelItem_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__ONCLICKDELITEM_B__9_1_OFFSET))(this);
		}
	};
}
