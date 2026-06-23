#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIMainCityNavigationPageContext_NavOriginType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_CC89A8F7C61A475D;
class Class_2_1A39E1B51756BF41;
class Class_2_534AF681CC2BD5FD_154;
class Class_2_79F6D62CE30E3F8E_65;
class Class_3_C5245CCA4822DD39_7;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpArrowWidgetController; }
namespace MoleMole { class UIMainCityNavigationAreaRowWidgetController; }
namespace MoleMole { class UIMainCityNavigationTeleportRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ADDSCROLLVIEWAREA_OFFSET UNITYSDK_OFFSET(0x169C1AF0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETAREAQUESTINFO_OFFSET UNITYSDK_OFFSET(0x169C3660)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETCENTERITEMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x169C0B70)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETKICHISECTIONINFO_OFFSET UNITYSDK_OFFSET(0x169C3520)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETQUESTPARTNERID_OFFSET UNITYSDK_OFFSET(0x169C3DF0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETSELECTITEM_OFFSET UNITYSDK_OFFSET(0x169C3010)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETSELECTSECTIONID_OFFSET UNITYSDK_OFFSET(0x169C2360)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x169C2CA0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_TRACKHINTTELEPORTINDEX_OFFSET UNITYSDK_OFFSET(0x169C2A10)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x169BF7B0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ISSIDEQUESTINAREA_OFFSET UNITYSDK_OFFSET(0x169C3B80)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x169C0750)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONAREAITEMSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x169BFAA0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x169C3F80)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169BF7C0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONDETAILBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x169C4100)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x169C30E0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x169C3300)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x169BF850)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONMAINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x169C3FD0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x169C09D0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x169C2A30)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169C1BD0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169BFC70)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x169C1C40)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_PLAYNEXTUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x169C2CB0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_REFRESHAREAINFOPANEL_OFFSET UNITYSDK_OFFSET(0x169C29D0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_REFRESHRUNTIMEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x169BFAF0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_SELECTAREA_OFFSET UNITYSDK_OFFSET(0x169C0E30)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_SET_TRACKHINTTELEPORTINDEX_OFFSET UNITYSDK_OFFSET(0x169C2A20)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_STOPUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x169C2F70)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x169C4250)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169C4340)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x169C43D0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x169C4460)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x169C44F0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x169C4580)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169C4640)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169C4650)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x169C4660)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageController_TypeDefinitionIndex = 47560;

	class UIMainCityNavigationPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* NyakichUnLockAni; // 0x0
		::Class_2_79F6D62CE30E3F8E_65* _view; // 0x318
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _roleEmpty; // 0x320
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _roleInfo; // 0x328
		::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* _roleIcon; // 0x330
		::System::Single minScale; // 0x338
		::MoleMole::UIMainCityNavigationPageContext_NavOriginType navType; // 0x33C
		::System::Collections::Generic::List_1<::System::Int32>* areaList; // 0x340
		::MoleMole::UIGeneralPopUpArrowWidgetController* _leftPopupArrowWidget; // 0x348
		::MoleMole::UIGeneralPopUpArrowWidgetController* _rightPopupArrowWidget; // 0x350
		::System::Collections::Generic::List_1<::Class_1_CC89A8F7C61A475D*>* _teleportList; // 0x358
		::System::Int32 _TrackHintTeleportIndex_k__BackingField; // 0x360
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _unlockIndexList; // 0x368
		::MoleMole::UIMainCityNavigationTeleportRowWidgetController* _selectedTeleportCtrl; // 0x370
		::System::Collections::Generic::List_1<::MoleMole::UIMainCityNavigationAreaRowWidgetController*>* _mapList; // 0x378
		::System::Int32 _unlockAreaIndex; // 0x380
		::System::Int32 _curSelectAreaIndex; // 0x384

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnScroll(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single obj)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONSCROLL_OFFSET))(this, moveContext, obj);
		}

		::System::Int32 GetCenterItemDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETCENTERITEMDATAINDEX_OFFSET))(this);
		}

		::MoleMole::UIMainCityNavigationAreaRowWidgetController* AddScrollViewArea(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::UIMainCityNavigationAreaRowWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ADDSCROLLVIEWAREA_OFFSET))(this, arg);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Int32 get_TrackHintTeleportIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_TRACKHINTTELEPORTINDEX_OFFSET))(this);
		}

		::System::Void set_TrackHintTeleportIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_SET_TRACKHINTTELEPORTINDEX_OFFSET))(this, value);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void RefreshRuntimeInputAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_REFRESHRUNTIMEINPUTACTION_OFFSET))(this);
		}

		::System::Boolean PlayNextUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_PLAYNEXTUNLOCKANIMATION_OFFSET))(this);
		}

		::System::Void StopUnlockAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_STOPUNLOCKANIMATION_OFFSET))(this);
		}

		::System::Void OnAreaItemSelectHandle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONAREAITEMSELECTHANDLE_OFFSET))(this, index);
		}

		::MoleMole::UIMainCityNavigationAreaRowWidgetController* GetSelectItem()
		{
			return ((::MoleMole::UIMainCityNavigationAreaRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETSELECTITEM_OFFSET))(this);
		}

		::System::Void SelectArea(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_SELECTAREA_OFFSET))(this, index);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Int32 GetSelectSectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETSELECTSECTIONID_OFFSET))(this);
		}

		::System::Void RefreshAreaInfoPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_REFRESHAREAINFOPANEL_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> GetKichiSectionInfo(::System::Int32 nyaKichiStoreID)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETKICHISECTIONINFO_OFFSET))(nyaKichiStoreID);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*> GetAreaQuestInfo(::Class_2_534AF681CC2BD5FD_154* areaTemplate)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::Class_2_534AF681CC2BD5FD_154*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETAREAQUESTINFO_OFFSET))(areaTemplate);
		}

		static ::System::Boolean IsSideQuestInArea(::System::Int32 questID, ::Class_2_534AF681CC2BD5FD_154* areaTemplate)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Class_2_534AF681CC2BD5FD_154*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ISSIDEQUESTINAREA_OFFSET))(questID, areaTemplate);
		}

		static ::System::Int32 GetQuestPartnerID(::Class_3_C5245CCA4822DD39_7* partnerInfo, ::Class_2_534AF681CC2BD5FD_154* areaTemplate)
		{
			return ((::System::Int32(*)(::Class_3_C5245CCA4822DD39_7*, ::Class_2_534AF681CC2BD5FD_154*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETQUESTPARTNERID_OFFSET))(partnerInfo, areaTemplate);
		}

		::System::Void OnBackBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONBACKBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnMainBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONMAINBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnDetailBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONDETAILBTNCLICKED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
