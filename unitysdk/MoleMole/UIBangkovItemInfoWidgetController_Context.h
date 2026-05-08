#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoScenario.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_721;
class Class_3_7A267C1006DF3527;
class Class_3_C3F0E3B5AB5977AE_3;
namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED0C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovItemInfoWidgetController_Context_TypeDefinitionIndex = 77023;

	class UIBangkovItemInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_7A267C1006DF3527* specificItem; // 0x28
		::System::Action* onClose; // 0x30
		::Class_0_16E4307DCC419505_721* nestHost; // 0x38
		::Class_3_C3F0E3B5AB5977AE_3* bagIndex; // 0x40
		::System::Boolean isSearchMode; // 0x48
		::System::Int32 itemInfoSlotIndex; // 0x4C
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Direction; // 0x50
		::System::Int32 itemId; // 0x54
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoScenario scenario; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
