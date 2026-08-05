#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_218;
class Class_2_8E01ADA29EAEFAEA;
namespace System { class Action; }

#define MOLEMOLE_UISUMMERTIDETREASUREITEMDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x119F9870)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureItemDialogPopWindowController_Context_TypeDefinitionIndex = 43751;

	class UISummerTideTreasureItemDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_218* DropItemConfig; // 0x28
		::Class_2_8E01ADA29EAEFAEA* SeafoodConfig; // 0x30
		::System::Action* OnCloseAction; // 0x38
		::System::Boolean FromReward; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREITEMDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
