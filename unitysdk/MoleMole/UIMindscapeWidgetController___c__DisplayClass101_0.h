#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMindscapeWidgetController; }

#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_0__CHANGETABSTATE_B__2_OFFSET UNITYSDK_OFFSET(0x1574DB00)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_0__CHANGETABSTATE_B__3_OFFSET UNITYSDK_OFFSET(0x1574E070)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_0__CHANGETABSTATE_G__DOCHANGE_0_OFFSET UNITYSDK_OFFSET(0x1574DB70)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1574DAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController___c__DisplayClass101_0_TypeDefinitionIndex = 43475;

	class UIMindscapeWidgetController___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMindscapeWidgetController* __4__this; // 0x10
		::System::Int32 fadeIndex; // 0x18
		::System::Boolean nextState; // 0x1C
		::System::Boolean nowState; // 0x1D
		::System::Boolean withAni; // 0x1E
		::System::Int32 obj; // 0x20
		::System::Int32 nextIndex; // 0x24
		::System::Int32 fadeOutIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeTabState_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_0__CHANGETABSTATE_B__2_OFFSET))(this);
		}

		::System::Void _ChangeTabState_g__DoChange_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_0__CHANGETABSTATE_G__DOCHANGE_0_OFFSET))(this);
		}

		::System::Void _ChangeTabState_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_0__CHANGETABSTATE_B__3_OFFSET))(this);
		}
	};
}
