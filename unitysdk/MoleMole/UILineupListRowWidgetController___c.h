#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C32D70)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C32DB0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__ONCLICKDELITEM_B__9_1_OFFSET UNITYSDK_OFFSET(0x14C32DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupListRowWidgetController___c_TypeDefinitionIndex = 47997;

	class UILineupListRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILineupListRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UILineupListRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UILineupListRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F320);
		}
		static ::System::Action** StaticGet___9__9_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILineupListRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F328);
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
