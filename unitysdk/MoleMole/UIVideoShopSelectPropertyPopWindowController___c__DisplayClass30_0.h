#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVideoShopSelectPropertyPopWindowController; }
namespace MoleMole { class UIVideoShopSelectPropertyTypeRowWidgetController; }

#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11335A30)
#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__INITRANDPROPERTYITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x11335A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoShopSelectPropertyPopWindowController___c__DisplayClass30_0_TypeDefinitionIndex = 66738;

	class UIVideoShopSelectPropertyPopWindowController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UIVideoShopSelectPropertyTypeRowWidgetController* itemCtrl; // 0x10
		::MoleMole::UIVideoShopSelectPropertyPopWindowController* __4__this; // 0x18
		::System::Int32 randProperty; // 0x20
		::System::Boolean needSelect; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitRandPropertyItems_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__INITRANDPROPERTYITEMS_B__0_OFFSET))(this);
		}
	};
}
