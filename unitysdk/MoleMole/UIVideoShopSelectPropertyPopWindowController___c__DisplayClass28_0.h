#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVideoShopSelectPropertyPopWindowController; }
namespace MoleMole { class UIVideoShopSelectPropertyTypeRowWidgetController; }

#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1089A1C0)
#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__INITBASEPROPERTYITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x1089A1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoShopSelectPropertyPopWindowController___c__DisplayClass28_0_TypeDefinitionIndex = 56559;

	class UIVideoShopSelectPropertyPopWindowController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::UIVideoShopSelectPropertyPopWindowController* __4__this; // 0x10
		::MoleMole::UIVideoShopSelectPropertyTypeRowWidgetController* itemCtrl; // 0x18
		::System::Int32 baseProperty; // 0x20
		::System::Int32 index; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitBasePropertyItems_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__INITBASEPROPERTYITEMS_B__0_OFFSET))(this);
		}
	};
}
