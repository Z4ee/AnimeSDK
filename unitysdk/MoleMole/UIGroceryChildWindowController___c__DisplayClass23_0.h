#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGroceryChildWindowController; }

#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169D38F0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__DOBUY_B__0_OFFSET UNITYSDK_OFFSET(0x169D3900)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 76224;

	class UIGroceryChildWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGroceryChildWindowController* __4__this; // 0x10
		::System::UInt32 goodsId; // 0x18
		::System::UInt32 tabDataId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoBuy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__DOBUY_B__0_OFFSET))(this);
		}
	};
}
