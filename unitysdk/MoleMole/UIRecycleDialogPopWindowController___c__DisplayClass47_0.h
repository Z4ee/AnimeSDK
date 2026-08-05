#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
template <typename T> class Class_0_16E4307DCC41950C_17;

#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16905830)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_0__INITUI_B__0_OFFSET UNITYSDK_OFFSET(0x16905840)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogPopWindowController___c__DisplayClass47_0_TypeDefinitionIndex = 67833;

	class UIRecycleDialogPopWindowController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC41950C_17<::Class_1_0D6706375CDAAE8C*>* slotFilterGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitUI_b__0(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_0__INITUI_B__0_OFFSET))(this, index);
		}
	};
}
