#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_5DA2E7556103D5A3_399;
class Class_2_468A4FBF2E9F527C;
class Class_2_7B757BE5CE945CFD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_LayerItemRowContext; }
namespace MoleMole { class UIHadalZone_LayerConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_CURRENTLAYERINFOINDEX_OFFSET UNITYSDK_OFFSET(0x182437B0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_CURRENTZONELAYERINFO_OFFSET UNITYSDK_OFFSET(0x182437A0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_UNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x182451D0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_MARKSELECTSTATUS_OFFSET UNITYSDK_OFFSET(0x18243FB0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182438B0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18243DB0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x18245000)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18245240)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18243940)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18243AB0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182437E0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18243840)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONACTIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18244F60)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x18243F60)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONUNLOCKCALLBACK_OFFSET UNITYSDK_OFFSET(0x18244FB0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETPARENTWINDOWFADEINDONEFUNC_OFFSET UNITYSDK_OFFSET(0x18246510)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__CLOSEALLSTATEOBJECTS_OFFSET UNITYSDK_OFFSET(0x18245AE0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__COLLECTSELECTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18244390)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x182467B0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__GETDIGITSPRITE_OFFSET UNITYSDK_OFFSET(0x18244E70)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__ISINMODEA_OFFSET UNITYSDK_OFFSET(0x18243F10)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__TRYPLAYUNLOCKLAYERANIM_OFFSET UNITYSDK_OFFSET(0x18245C40)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__TRYSHOWTRACKICON_OFFSET UNITYSDK_OFFSET(0x18246270)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__UNLOCLAYERCOROUTINE_OFFSET UNITYSDK_OFFSET(0x18246560)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__UPDATESTATELAYERINFO_OFFSET UNITYSDK_OFFSET(0x18244620)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18246810)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x182468A0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x18246930)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x182469C0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18246A60)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18246B00)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18246B90)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18246C20)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___TRYSHOWTRACKICON_G___CHECKTRACK_45_0_OFFSET UNITYSDK_OFFSET(0x182465E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerItemRowV2WidgetController_TypeDefinitionIndex = 68194;

	class UIHadalZone_LayerItemRowV2WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7B757BE5CE945CFD* _view; // 0x2F0
		::Class_1_5DA2E7556103D5A3_399* _zoneInfo; // 0x2F8
		::MoleMole::UIHadalZone_Common_LayerItemRowContext* _curCtx; // 0x300
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _selectedGameObjects; // 0x308
		::System::Boolean _isLocked; // 0x310
		::System::Boolean _isStartState; // 0x311
		::System::Func_1<::System::Boolean>* _isParentFadeInDoneFunc; // 0x318
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x320
		::MoleMole::UIHadalZone_LayerConfig* _layerIteConfig; // 0x328
		::System::Action_1<::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* _onClickItemAction; // 0x330
		::MoleMole::UIHadalZone_LayerConfig* _uiLayerConfig; // 0x338
		::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* _OnItemActiveCallback; // 0x340
		::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* _OnItemUnlockCallback; // 0x348
		::System::String* UNLOCK_ANIM; // 0x350
		::System::String* UNLOCK_ANIM_SPECIAL_LAYER; // 0x358
		::System::String* FADEIN_ANIM; // 0x360
		::Foundation::Coroutine::CoroutineHandle _corNextLayerUnlockHandle; // 0x368
		::System::Boolean _isTryPlayUnlock; // 0x36C
		::UnityEngine::Coroutine* _playUnlockAnimCor; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_5DA2E7556103D5A3_399* get_CurrentZoneLayerInfo()
		{
			return ((::Class_1_5DA2E7556103D5A3_399*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_CURRENTZONELAYERINFO_OFFSET))(this);
		}

		::System::Int32 get_CurrentLayerInfoIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_CURRENTLAYERINFOINDEX_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean _IsInModeA(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__ISINMODEA_OFFSET))(this, index);
		}

		::System::Void SetOnClickCallback(::System::Action_1<::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONCLICKCALLBACK_OFFSET))(this, cb);
		}

		::System::Void MarkSelectStatus(::System::Boolean vSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_MARKSELECTSTATUS_OFFSET))(this, vSelected);
		}

		::System::Void _CollectSelectGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__COLLECTSELECTGAMEOBJECT_OFFSET))(this);
		}

		::System::Void _UpdateStateLayerInfo(::Class_1_5DA2E7556103D5A3_399* infoTemplate, ::UnityEngine::GameObject* targetObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_399*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__UPDATESTATELAYERINFO_OFFSET))(this, infoTemplate, targetObject);
		}

		::UnityEngine::Sprite* _GetDigitSprite(::System::Int32 digit)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__GETDIGITSPRITE_OFFSET))(this, digit);
		}

		::System::Void SetOnActiveCallback(::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* activeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONACTIVECALLBACK_OFFSET))(this, activeCallback);
		}

		::System::Void SetOnUnlockCallback(::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONUNLOCKCALLBACK_OFFSET))(this, cb);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void _CloseAllStateObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__CLOSEALLSTATEOBJECTS_OFFSET))(this);
		}

		::System::Void SetParentWindowFadeInDoneFunc(::System::Func_1<::System::Boolean>* getter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETPARENTWINDOWFADEINDONEFUNC_OFFSET))(this, getter);
		}

		::System::String* get_UnlockAnim()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_UNLOCKANIM_OFFSET))(this);
		}

		::System::Void _TryPlayUnlockLayerAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__TRYPLAYUNLOCKLAYERANIM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _UnlocLayerCoroutine()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__UNLOCLAYERCOROUTINE_OFFSET))(this);
		}

		::System::Void _TryShowTrackIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__TRYSHOWTRACKICON_OFFSET))(this);
		}

		::System::Boolean __TryShowTrackIcon_g___CheckTrack_45_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___TRYSHOWTRACKICON_G___CHECKTRACK_45_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
