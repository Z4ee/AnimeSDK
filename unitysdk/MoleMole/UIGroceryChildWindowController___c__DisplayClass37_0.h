#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A0999DD62F5BF03;
namespace MoleMole { class UIGroceryChildWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1466BEE0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__0_OFFSET UNITYSDK_OFFSET(0x1466BEF0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__1_OFFSET UNITYSDK_OFFSET(0x1466BFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildWindowController___c__DisplayClass37_0_TypeDefinitionIndex = 54567;

	class UIGroceryChildWindowController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGroceryChildWindowController* __4__this; // 0x10
		::Class_1_7A0999DD62F5BF03* curTabData; // 0x18
		::System::Action_1<::Class_1_7A0999DD62F5BF03*>* __9__1; // 0x20

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
