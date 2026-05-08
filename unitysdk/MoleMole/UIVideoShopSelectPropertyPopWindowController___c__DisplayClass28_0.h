#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVideoShopSelectPropertyPopWindowController; }
namespace MoleMole { class UIVideoShopSelectPropertyTypeRowWidgetController; }

#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCFBC0)
#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__INITBASEPROPERTYITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xEBCFBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoShopSelectPropertyPopWindowController___c__DisplayClass28_0_TypeDefinitionIndex = 66736;

	class UIVideoShopSelectPropertyPopWindowController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::UIVideoShopSelectPropertyTypeRowWidgetController* itemCtrl; // 0x10
		::MoleMole::UIVideoShopSelectPropertyPopWindowController* __4__this; // 0x18
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
