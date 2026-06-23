#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UINewsStandPuzzleGameWidgetController; }
namespace MoleMole { class UINewsStandPuzzlePageController; }

#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CHECKCOMPLETE_B__1_OFFSET UNITYSDK_OFFSET(0x178C6840)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178C6830)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzleGameWidgetController___c__DisplayClass52_0_TypeDefinitionIndex = 52454;

	class UINewsStandPuzzleGameWidgetController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::MoleMole::UINewsStandPuzzlePageController* pa; // 0x10
		::MoleMole::UINewsStandPuzzleGameWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckComplete_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CHECKCOMPLETE_B__1_OFFSET))(this);
		}
	};
}
