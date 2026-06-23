#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_392BAA89F16E9A29;
class Class_2_C245739CDDFB46B4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHandBookTacticsBottomWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_CLICKQUESTTAB_OFFSET UNITYSDK_OFFSET(0x17805E50)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_CLICKQUESTTYPE_OFFSET UNITYSDK_OFFSET(0x178062F0)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x17804B70)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17805610)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17805720)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178056A0)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17804B80)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17804BE0)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17804E00)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17806700)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17806830)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x178068C0)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17806950)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178069E0)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17806A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsWidgetController_TypeDefinitionIndex = 75243;

	class UIHandBookTacticsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_392BAA89F16E9A29* _view; // 0x2C0
		::Class_2_C245739CDDFB46B4* model; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* trainTypeTabIndex; // 0x2D0
		::MoleMole::UIHandBookTacticsBottomWidgetController* ctrl; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 targetModuleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, targetModuleID);
		}

		::System::Void ClickQuestTab(::System::Int32 tabType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_CLICKQUESTTAB_OFFSET))(this, tabType);
		}

		::System::Void ClickQuestType(::System::Int32 trainQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER_CLICKQUESTTYPE_OFFSET))(this, trainQuestID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
