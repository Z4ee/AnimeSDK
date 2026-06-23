#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_60638234271CCDB8_146;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralFilterGroupRowWidgetController; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIQuickSelectPopWindowContext; }

#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1717B820)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMEQUIPPED_OFFSET UNITYSDK_OFFSET(0x1717DBB0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMLEVELUP_OFFSET UNITYSDK_OFFSET(0x1717DC90)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMLOCK_OFFSET UNITYSDK_OFFSET(0x1717DAC0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMTRASH_OFFSET UNITYSDK_OFFSET(0x1717DD80)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1717CD40)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1717DE30)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONRESETBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1717E110)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1717CDD0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1717B830)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1717BA80)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHITEMTYPEROW_OFFSET UNITYSDK_OFFSET(0x1717CE40)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHNUM_OFFSET UNITYSDK_OFFSET(0x1717D470)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1717BC80)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1717E160)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_0_OFFSET UNITYSDK_OFFSET(0x1717E170)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_1_OFFSET UNITYSDK_OFFSET(0x1717E1A0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_2_OFFSET UNITYSDK_OFFSET(0x1717E1F0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_3_OFFSET UNITYSDK_OFFSET(0x1717E240)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_4_OFFSET UNITYSDK_OFFSET(0x1717E290)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_5_OFFSET UNITYSDK_OFFSET(0x1717E2E0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_6_OFFSET UNITYSDK_OFFSET(0x1717E330)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_7_OFFSET UNITYSDK_OFFSET(0x1717E360)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1717E390)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1717E420)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1717E430)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1717E440)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickSelectPopWindowController_TypeDefinitionIndex = 78704;

	class UIQuickSelectPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_146* _view; // 0x318
		::MoleMole::UIQuickSelectPopWindowContext* _context; // 0x320
		::MoleMole::UIGeneralFilterGroupRowWidgetController* _itemTypeWidgetDelete; // 0x328
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetAll; // 0x330
		::MoleMole::UIGeneralFilterGroupRowWidgetController* _itemTypeWidgetRarity; // 0x338
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetB; // 0x340
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetA; // 0x348
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetS; // 0x350
		::System::Boolean isSelectAllDelete; // 0x358
		::System::Boolean isSelectBRarity; // 0x359
		::System::Boolean isSelectARarity; // 0x35A
		::System::Boolean isSelectSRarity; // 0x35B
		::System::Int32 curSelectRarity; // 0x35C
		::MoleMole::UIGeneralToggleWidgetController* _toggle; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshItemTypeRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHITEMTYPEROW_OFFSET))(this);
		}

		::System::Void RefreshNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHNUM_OFFSET))(this);
		}

		::System::Boolean IsItemLock(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMLOCK_OFFSET))(this, itemData);
		}

		::System::Boolean IsItemTrash(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMTRASH_OFFSET))(this, itemData);
		}

		::System::Boolean IsItemEquipped(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMEQUIPPED_OFFSET))(this, itemData);
		}

		::System::Boolean IsItemLevelUp(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMLEVELUP_OFFSET))(this, itemData);
		}

		::System::Void OnOkBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnResetBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONRESETBTNCLICK_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_3_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_4_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_5_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_6_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_7_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
