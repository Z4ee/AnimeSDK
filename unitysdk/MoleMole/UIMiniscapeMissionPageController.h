#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_545;
class Class_2_C8D7DAE5DF055F38;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiniscapeMissionTopTabWidgetController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x1452AB50)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_CANGETREWARDS_OFFSET UNITYSDK_OFFSET(0x1452C4B0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_GETFIRSTALLOWGOIDX_OFFSET UNITYSDK_OFFSET(0x1452BAB0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1452AA60)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_INITTABS_OFFSET UNITYSDK_OFFSET(0x1452AEB0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCHAPTERCHANGE_OFFSET UNITYSDK_OFFSET(0x1452BD50)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCLICKTAKEREWARDS_OFFSET UNITYSDK_OFFSET(0x1452C040)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1452AA70)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1452B780)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1452B540)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1452AB00)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1452AE30)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_REFRESHTAKEALLBTN_OFFSET UNITYSDK_OFFSET(0x1452B9F0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1452BDA0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_0_OFFSET UNITYSDK_OFFSET(0x1452C8C0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_1_OFFSET UNITYSDK_OFFSET(0x1452C940)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_2_OFFSET UNITYSDK_OFFSET(0x1452CEC0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_3_OFFSET UNITYSDK_OFFSET(0x1452CF40)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1452C820)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__INITTABS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1452CF50)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__ONCLICKTAKEREWARDS_B__13_0_OFFSET UNITYSDK_OFFSET(0x1452D210)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1452D220)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1452D2B0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1452D2C0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1452D2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMissionPageController_TypeDefinitionIndex = 43806;

	class UIMiniscapeMissionPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_C8D7DAE5DF055F38* _view; // 0x310
		::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeMissionTopTabWidgetController*>* _tabBtns; // 0x318
		::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_545*>* _chapterConfigs; // 0x320
		::System::Int32 _curIdx; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* _questGroups; // 0x330
		::System::Int32 _curQuestGroupIdx; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONTAKEREWARD_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Int32 GetFirstAllowGoIdx(::System::Collections::Generic::List_1<::System::Int32>* quests)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_GETFIRSTALLOWGOIDX_OFFSET))(this, quests);
		}

		::System::Void InitTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_INITTABS_OFFSET))(this);
		}

		::System::Void OnChapterChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCHAPTERCHANGE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnClickTakeRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCLICKTAKEREWARDS_OFFSET))(this);
		}

		::System::Boolean CanGetRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_CANGETREWARDS_OFFSET))(this);
		}

		::System::Void RefreshTakeAllBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_REFRESHTAKEALLBTN_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _Bind_b__8_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_0_OFFSET))(this, reference);
		}

		::System::Void _Bind_b__8_1(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_1_OFFSET))(this, idx);
		}

		::MoleMole::ScrollViewItemWidgetController* _Bind_b__8_2(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_2_OFFSET))(this, reference);
		}

		::System::Void _Bind_b__8_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_3_OFFSET))(this, args);
		}

		::System::Void _InitTabs_b__10_0(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__INITTABS_B__10_0_OFFSET))(this, idx);
		}

		::System::Void _OnClickTakeRewards_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__ONCLICKTAKEREWARDS_B__13_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
