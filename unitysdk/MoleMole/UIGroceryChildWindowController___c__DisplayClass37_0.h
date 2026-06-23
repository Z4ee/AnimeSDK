#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A0999DD62F5BF03;
namespace MoleMole { class UIGroceryChildWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1467D420)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__0_OFFSET UNITYSDK_OFFSET(0x1467D430)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__1_OFFSET UNITYSDK_OFFSET(0x1467D4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildWindowController___c__DisplayClass37_0_TypeDefinitionIndex = 76222;

	class UIGroceryChildWindowController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::Class_1_7A0999DD62F5BF03* curTabData; // 0x10
		::System::Action_1<::Class_1_7A0999DD62F5BF03*>* __9__1; // 0x18
		::MoleMole::UIGroceryChildWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCostRefreshShop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__0_OFFSET))(this);
		}

		::System::Void _OnCostRefreshShop_b__1(::Class_1_7A0999DD62F5BF03* shopData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__1_OFFSET))(this, shopData);
		}
	};
}
