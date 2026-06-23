#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoScenario.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_347;
class Class_3_7A267C1006DF3527_1;
class Class_3_C3F0E3B5AB5977AE;
namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A504E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovItemInfoWidgetController_Context_TypeDefinitionIndex = 44857;

	class UIBangkovItemInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_347* nestHost; // 0x28
		::System::Action* onClose; // 0x30
		::Class_3_C3F0E3B5AB5977AE* bagIndex; // 0x38
		::Class_3_7A267C1006DF3527_1* specificItem; // 0x40
		::System::Int32 itemId; // 0x48
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoScenario scenario; // 0x4C
		::System::Int32 itemInfoSlotIndex; // 0x50
		::System::Boolean isSearchMode; // 0x54
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Direction; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
