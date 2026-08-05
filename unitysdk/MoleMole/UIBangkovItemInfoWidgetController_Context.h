#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoScenario.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_548;
class Class_3_0D78EA91F90092C6;
class Class_3_C3F0E3B5AB5977AE_29;
namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197F1210)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovItemInfoWidgetController_Context_TypeDefinitionIndex = 56441;

	class UIBangkovItemInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onClose; // 0x28
		::Class_0_16E4307DCC419505_548* nestHost; // 0x30
		::Class_3_0D78EA91F90092C6* specificItem; // 0x38
		::Class_3_C3F0E3B5AB5977AE_29* bagIndex; // 0x40
		::System::Int32 itemInfoSlotIndex; // 0x48
		::System::Int32 itemId; // 0x4C
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoScenario scenario; // 0x50
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Direction; // 0x54
		::System::Boolean isSearchMode; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
