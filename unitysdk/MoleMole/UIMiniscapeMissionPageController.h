#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_991;
class Class_2_C8D7DAE5DF055F38;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiniscapeMissionTopTabWidgetController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x17AFA720)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_CANGETREWARDS_OFFSET UNITYSDK_OFFSET(0x17AFC090)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_GETFIRSTALLOWGOIDX_OFFSET UNITYSDK_OFFSET(0x17AFB670)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17AFA630)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_INITTABS_OFFSET UNITYSDK_OFFSET(0x17AFAA80)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCHAPTERCHANGE_OFFSET UNITYSDK_OFFSET(0x17AFB920)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCLICKTAKEREWARDS_OFFSET UNITYSDK_OFFSET(0x17AFBC10)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AFA640)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x17AFB340)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AFB100)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AFA6D0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17AFAA00)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_REFRESHTAKEALLBTN_OFFSET UNITYSDK_OFFSET(0x17AFB5B0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17AFB970)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_0_OFFSET UNITYSDK_OFFSET(0x17AFC4A0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_1_OFFSET UNITYSDK_OFFSET(0x17AFC520)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_2_OFFSET UNITYSDK_OFFSET(0x17AFCAA0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__BIND_B__8_3_OFFSET UNITYSDK_OFFSET(0x17AFCB20)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFC400)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__INITTABS_B__10_0_OFFSET UNITYSDK_OFFSET(0x17AFCB30)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER__ONCLICKTAKEREWARDS_B__13_0_OFFSET UNITYSDK_OFFSET(0x17AFCDF0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AFCE00)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AFCE90)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AFCEA0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17AFCEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMissionPageController_TypeDefinitionIndex = 48948;

	class UIMiniscapeMissionPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_C8D7DAE5DF055F38* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeMissionTopTabWidgetController*>* _tabBtns; // 0x320
		::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_991*>* _chapterConfigs; // 0x328
		::System::Int32 _curIdx; // 0x330
		::System::Collections::Generic::List_1<::System::Int32>* _questGroups; // 0x338
		::System::Int32 _curQuestGroupIdx; // 0x340

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
