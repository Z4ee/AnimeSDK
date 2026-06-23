#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915;
class Class_2_208CC9941471731A_529;
class Class_2_F4B807A3857A9487;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UIWorkBenchInterKnotNoteTutorialWidgetController; }
namespace MoleMole { class UIWorkBenchInterknotNotePageController_Context; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_BINDEVENT_BUTTON_OFFSET UNITYSDK_OFFSET(0x139CA9B0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_BINDEVENT_NOTIFY_OFFSET UNITYSDK_OFFSET(0x139CAB70)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_GETPOPUPSORTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x139CC870)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x139CA8A0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_INITBG_OFFSET UNITYSDK_OFFSET(0x139CBE50)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_INITPOPUPSORTDATA_OFFSET UNITYSDK_OFFSET(0x139CACB0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_INITWIDGET_OFFSET UNITYSDK_OFFSET(0x139CAC10)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_NEEDSHOWINWORKBENCH_OFFSET UNITYSDK_OFFSET(0x139CC780)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x139CA8B0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x139CC2B0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x139CBDA0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x139CBF60)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x139CC240)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x139CA940)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONWORKBENCHDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x139CD610)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_SELECTEDPOPUPSORT_OFFSET UNITYSDK_OFFSET(0x139CCFA0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_SELECTEDPOPUP_OFFSET UNITYSDK_OFFSET(0x139CC4B0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_TAKEREWARDANDDELNEWFROMSERVER_OFFSET UNITYSDK_OFFSET(0x139CC960)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER__BINDEVENT_BUTTON_B__12_0_OFFSET UNITYSDK_OFFSET(0x139CD850)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x139CD840)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x139CD660)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x139CD950)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x139CD9E0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x139CDA70)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x139CDA80)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x139CDB40)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x139CDB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchInterknotNotePageController_TypeDefinitionIndex = 77513;

	class UIWorkBenchInterknotNotePageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_EMPTY_POPUP_GROUP_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController_TypeDefinitionIndex)->GetStaticField(0xF430);
		}
		::Class_2_F4B807A3857A9487* _view; // 0x318
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_529*>* _popUpSortTemplateDatas; // 0x320
		::System::Collections::Generic::List_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>* _popUpGroupDatas; // 0x328
		::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915* _emptyPopUpGroupData; // 0x330
		::System::Nullable_1<::System::Boolean> _isEmpty; // 0x338
		::System::Collections::Generic::Dictionary_2<::Class_2_208CC9941471731A_529*, ::System::Collections::Generic::List_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>*>* _popupGroupDataDic; // 0x340
		::MoleMole::UIWorkBenchInterKnotNoteTutorialWidgetController* _tutorialWidget; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _rightTabControllerList; // 0x350
		::System::Collections::Generic::List_1<::System::UInt32>* _hasReadPopupGroupIDs; // 0x358
		::MoleMole::UIWorkBenchInterknotNotePageController_Context* _context; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONSHOW_OFFSET))(this, context);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		static ::System::Boolean NeedShowInWorkBench(::System::Int32 popupGroupID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_NEEDSHOWINWORKBENCH_OFFSET))(popupGroupID);
		}

		static ::Class_2_208CC9941471731A_529* GetPopUpSortTemplate(::System::Int32 popupGroupID)
		{
			return ((::Class_2_208CC9941471731A_529*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_GETPOPUPSORTTEMPLATE_OFFSET))(popupGroupID);
		}

		::System::Void BindEvent_Button()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_BINDEVENT_BUTTON_OFFSET))(this);
		}

		::System::Void BindEvent_Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_BINDEVENT_NOTIFY_OFFSET))(this);
		}

		::System::Void TakeRewardAndDelNewFromServer(::System::Collections::Generic::IReadOnlyList_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_TAKEREWARDANDDELNEWFROMSERVER_OFFSET))(this, datas);
		}

		::System::Void InitBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_INITBG_OFFSET))(this);
		}

		::System::Void InitWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_INITWIDGET_OFFSET))(this);
		}

		::System::Void InitPopupSortData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_INITPOPUPSORTDATA_OFFSET))(this);
		}

		::System::Void SelectedPopUpSort(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_SELECTEDPOPUPSORT_OFFSET))(this, index);
		}

		::System::Void SelectedPopUp(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_SELECTEDPOPUP_OFFSET))(this, index);
		}

		::System::Void OnWorkBenchDataUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_ONWORKBENCHDATAUPDATE_OFFSET))(this, args);
		}

		::System::Void _BindEvent_Button_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER__BINDEVENT_BUTTON_B__12_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
