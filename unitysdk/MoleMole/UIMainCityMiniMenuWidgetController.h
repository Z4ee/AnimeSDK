#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityMiniMenuWidgetController_EOperateType.h"
#include "unitysdk/MoleMole/UIMainCityMiniMenuWidgetController_SUnlockAnimInfo.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_2CD6915EC12D64B9;
class Class_2_208CC9941471731A_109;
class Class_2_79AE422BA06F6D26_116;
class Class_2_FDFE69FE7B72463B;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_CHECKSHORTCUTTYPE_OFFSET UNITYSDK_OFFSET(0x186483D0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_CLEARFOLDHANDLES_OFFSET UNITYSDK_OFFSET(0x18645370)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_CLEARROOTHANDLES_OFFSET UNITYSDK_OFFSET(0x186453F0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_GACHA_OFFSET UNITYSDK_OFFSET(0x18641C00)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_HB_OFFSET UNITYSDK_OFFSET(0x18641AD0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_ID_OFFSET UNITYSDK_OFFSET(0x18641F90)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_ROLE_OFFSET UNITYSDK_OFFSET(0x18641D30)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_SIDEBAR_OFFSET UNITYSDK_OFFSET(0x18641E60)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GET_CONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x18641A70)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GET_FOLDERANIMATION_OFFSET UNITYSDK_OFFSET(0x18641AB0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GET_ROOTANIMATION_OFFSET UNITYSDK_OFFSET(0x18641A80)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_HASFAIRY_OFFSET UNITYSDK_OFFSET(0x18646920)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_INITSPECIALACTIVITYVIEW_OFFSET UNITYSDK_OFFSET(0x18641A30)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ISBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x186476B0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ISFOLDOUT_OFFSET UNITYSDK_OFFSET(0x18644390)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONCLICKFOLDBTN_OFFSET UNITYSDK_OFFSET(0x18647A30)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONCLICKFUNCID_OFFSET UNITYSDK_OFFSET(0x18647D30)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONCLOSEPOPUPHANDLE_OFFSET UNITYSDK_OFFSET(0x186484C0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18645470)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONFAIRYFINISHHANDLE_OFFSET UNITYSDK_OFFSET(0x18648BB0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONFAIRYHIDE_OFFSET UNITYSDK_OFFSET(0x18648B60)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x186445F0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18645610)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18644570)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONLOGICINPUTQUICKJUMP_OFFSET UNITYSDK_OFFSET(0x186456B0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONNEWBIEFAIRYFINISHHANDLE_OFFSET UNITYSDK_OFFSET(0x18648960)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONOPENPOPHANDLE_OFFSET UNITYSDK_OFFSET(0x18648510)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONREFRESHFOLDERTIMEICON_OFFSET UNITYSDK_OFFSET(0x18648D00)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONREFRESHGACHATIMEICON_OFFSET UNITYSDK_OFFSET(0x18648CB0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONROOTANIMATIONFINISH_OFFSET UNITYSDK_OFFSET(0x18647500)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x186425C0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18645500)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186420E0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONUILOCKCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x186482D0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONUNLOCKHANDLE_OFFSET UNITYSDK_OFFSET(0x18648340)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET UNITYSDK_OFFSET(0x186465A0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_REALSETSHOW_OFFSET UNITYSDK_OFFSET(0x18646BD0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_REFRESHFOLDERTIMEICON_OFFSET UNITYSDK_OFFSET(0x18644240)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_REFRESHGACHATIMEICON_OFFSET UNITYSDK_OFFSET(0x18644100)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_REFRESHNEWBIENOTIFY_OFFSET UNITYSDK_OFFSET(0x18643AE0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x186431D0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_SETFAIRYSTATESHOW_OFFSET UNITYSDK_OFFSET(0x18646620)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_SETFOLDERSTATE_OFFSET UNITYSDK_OFFSET(0x18643370)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_SETMAINCITYSTATESHOW_OFFSET UNITYSDK_OFFSET(0x18646790)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_TRYBLOCKFAIRY_OFFSET UNITYSDK_OFFSET(0x186464D0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18648D50)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18648EA0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18648F30)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18648FC0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18648FF0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18649080)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18649120)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186491B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuWidgetController_TypeDefinitionIndex = 51079;

	class UIMainCityMiniMenuWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_116* _view; // 0x2C0
		::System::Boolean _consoleActive; // 0x2C8
		::Class_1_2CD6915EC12D64B9* _rootAnimationResetHelper; // 0x2D0
		::Class_1_2CD6915EC12D64B9* _folderAnimationResetHelper; // 0x2D8
		::System::Collections::Generic::List_1<::System::Int32>* _newbieAll; // 0x2E0
		::System::Boolean _isFoldout; // 0x2E8
		::System::Boolean _isShow; // 0x2E9
		::System::Boolean _realShow; // 0x2EA
		::System::Boolean _mainCityStateShow; // 0x2EB
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIMainCityMiniMenuButtonWidgetController*>* _buttons; // 0x2F0
		::System::Collections::Generic::List_1<::System::Int32>* _unlockAnimList; // 0x2F8
		::DG::Tweening::Tween* _unlockTweener; // 0x300
		::System::Collections::Generic::Queue_1<::MoleMole::UIMainCityMiniMenuWidgetController_SUnlockAnimInfo>* _waitUnlockId; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitSpecialActivityView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_INITSPECIALACTIVITYVIEW_OFFSET))(this);
		}

		::System::Boolean get_ConsoleActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GET_CONSOLEACTIVE_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* get_rootAnimation()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GET_ROOTANIMATION_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* get_folderAnimation()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GET_FOLDERANIMATION_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* GetNEWBIE_SPECIAL_HB()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_HB_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* GetNEWBIE_SPECIAL_GACHA()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_GACHA_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* GetNEWBIE_SPECIAL_ROLE()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_ROLE_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* GetNEWBIE_SPECIAL_SIDEBAR()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_SIDEBAR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* GetNEWBIE_SPECIAL_ID()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_GETNEWBIE_SPECIAL_ID_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean IsFoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ISFOLDOUT_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshNewbieNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_REFRESHNEWBIENOTIFY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean TryBlockFairy(::System::Boolean isNewbie)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_TRYBLOCKFAIRY_OFFSET))(this, isNewbie);
		}

		::System::Void PlayBlockFairyFadeout(::System::Boolean isNewbie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET))(this, isNewbie);
		}

		::System::Single SetMainCityStateShow(::System::Boolean show, ::System::Boolean playAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_SETMAINCITYSTATESHOW_OFFSET))(this, show, playAnim);
		}

		::System::Single SetFairyStateShow(::System::Boolean show, ::System::Boolean playAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_SETFAIRYSTATESHOW_OFFSET))(this, show, playAnim);
		}

		::System::Single RealSetShow(::System::Boolean show, ::System::Boolean playAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_REALSETSHOW_OFFSET))(this, show, playAnim);
		}

		::System::Void SetFolderState(::System::Boolean isFoldout, ::System::Boolean forceSet, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_SETFOLDERSTATE_OFFSET))(this, isFoldout, forceSet, callback);
		}

		::System::Void OnRootAnimationFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONROOTANIMATIONFINISH_OFFSET))(this);
		}

		::System::Boolean IsBlockInput(::MoleMole::UIMainCityMiniMenuWidgetController_EOperateType operateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMainCityMiniMenuWidgetController_EOperateType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ISBLOCKINPUT_OFFSET))(this, operateType);
		}

		::System::Void OnClickFoldBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONCLICKFOLDBTN_OFFSET))(this);
		}

		::System::Boolean OnClickFuncId(::System::Int32 shortCutFuncId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONCLICKFUNCID_OFFSET))(this, shortCutFuncId);
		}

		::System::Boolean HasFairy(::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_HASFAIRY_OFFSET))(this, ctrl);
		}

		::System::Void OnUILockChangeHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONUILOCKCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnUnlockHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONUNLOCKHANDLE_OFFSET))(this, obj);
		}

		::System::Boolean CheckShortCutType(::Class_2_208CC9941471731A_109* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_109*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_CHECKSHORTCUTTYPE_OFFSET))(this, config);
		}

		::System::Void OnClosePopUpHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONCLOSEPOPUPHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnOpenPopHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONOPENPOPHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnNewbieFairyFinishHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONNEWBIEFAIRYFINISHHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFairyFinishHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONFAIRYFINISHHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFairyHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONFAIRYHIDE_OFFSET))(this);
		}

		::System::Void SetConsoleActive(::System::Boolean active, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active, force);
		}

		::System::Boolean OnLogicInputQuickJump(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONLOGICINPUTQUICKJUMP_OFFSET))(this, inputAction);
		}

		::System::Void ClearFoldHandles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_CLEARFOLDHANDLES_OFFSET))(this);
		}

		::System::Void ClearRootHandles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_CLEARROOTHANDLES_OFFSET))(this);
		}

		::System::Void OnRefreshGachaTimeIcon(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONREFRESHGACHATIMEICON_OFFSET))(this, args);
		}

		::System::Void RefreshGachaTimeIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_REFRESHGACHATIMEICON_OFFSET))(this);
		}

		::System::Void OnRefreshFolderTimeIcon(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_ONREFRESHFOLDERTIMEICON_OFFSET))(this, args);
		}

		::System::Void RefreshFolderTimeIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER_REFRESHFOLDERTIMEICON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
