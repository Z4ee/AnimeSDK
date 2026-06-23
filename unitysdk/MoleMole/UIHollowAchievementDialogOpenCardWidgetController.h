#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_196927E800C88A86;
class Class_2_36134FF29855BCB0;
namespace MoleMole { class UIBadgeItemIconWidgetChildWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowAchievementCardWidgetV2WidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0x18815BB0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0x18816000)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x188151B0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x188151C0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_INITTABLIST_OFFSET UNITYSDK_OFFSET(0x188155F0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x188153E0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONTABCLICK_OFFSET UNITYSDK_OFFSET(0x18816090)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x188151D0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18815470)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18816300)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x18816530)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0x18816600)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x188166D0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18816760)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18816770)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowAchievementDialogOpenCardWidgetController_TypeDefinitionIndex = 48810;

	class UIHollowAchievementDialogOpenCardWidgetController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_36134FF29855BCB0* _view; // 0x318
		::MoleMole::UIHollowAchievementCardWidgetV2WidgetController* widget; // 0x320
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* currentSelectList; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* badgeMap; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIBadgeItemIconWidgetChildWindowController*>* currentRenderBadegtItem; // 0x338
		::System::Collections::Generic::List_1<::System::String*>* badgeTypeList; // 0x340
		::UnityEngine::UI::Extension::UITabButtonGroup* tabBtns; // 0x348
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* cardList; // 0x350
		::System::Int32 questID; // 0x358
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UI::Extension::UITabButton*>* typeTabs; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::Class_1_196927E800C88A86* GetBadgeMap()
		{
			return ((::Class_1_196927E800C88A86*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* GetCardList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rawCards)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GETCARDLIST_OFFSET))(this, rawCards);
		}

		::System::Void InitTabList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_INITTABLIST_OFFSET))(this);
		}

		::System::Void OnTabClick(::System::String* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONTABCLICK_OFFSET))(this, type);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER__ONUIINIT_B__5_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
