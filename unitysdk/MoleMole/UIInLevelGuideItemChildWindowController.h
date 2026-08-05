#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_5D14E331734C3C6B.h"
#include "unitysdk/Enum_3_AA439AE9E76594AE.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_2_1A39E1B51756BF41;
class Class_2_1CC0E2699D5FB1A6_2;
class Class_3_7472FB6CC4015359;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class ItemStyle; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelGuideItemContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UICircleProgress; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_BINDSPEEDTYPE_OFFSET UNITYSDK_OFFSET(0x19626D20)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_CANPLAYFADEONINIT_OFFSET UNITYSDK_OFFSET(0x196281C0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1962A3C0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETDISTANCEUPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1962C4B0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETGUIDEITEMFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x196285F0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETGUIDEITEMFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x19629F80)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETSELFSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1962C170)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETTARGETSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1962C1E0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_DEFAULT_DISTANCE_UPDATE_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1962C660)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_ETHERBARRIERPROGRESS_OFFSET UNITYSDK_OFFSET(0x19627600)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1962CE70)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x196275F0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x1962B160)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITICONBYCOMPTYPE_OFFSET UNITYSDK_OFFSET(0x1962A9B0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITICON_OFFSET UNITYSDK_OFFSET(0x1962AC00)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x1962AC70)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x19627870)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINCAMERAVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1962A7C0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINFADESTATE_OFFSET UNITYSDK_OFFSET(0x1962B380)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINSCENECAMERABACK_OFFSET UNITYSDK_OFFSET(0x1962C230)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISSHOWARROW_OFFSET UNITYSDK_OFFSET(0x1962A370)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19627790)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19629450)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONETHERBARRIERCHANGE_OFFSET UNITYSDK_OFFSET(0x19628E80)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19629310)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x19629540)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19628F10)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19629150)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19627820)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19627FB0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x19629780)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYWARNINGWITHANIM_OFFSET UNITYSDK_OFFSET(0x19626CA0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYWARNINGWITHTWEEN_OFFSET UNITYSDK_OFFSET(0x19627010)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_REFRESHETHERBARRIERLISTENER_OFFSET UNITYSDK_OFFSET(0x19628740)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_REFRESHETHERBARRIERPROGRESS_OFFSET UNITYSDK_OFFSET(0x196289E0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_REFRESHNEEDHANDLEETHERBARRIERPROGRESS_OFFSET UNITYSDK_OFFSET(0x19628680)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x1962A4D0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETALERTSTAGE_OFFSET UNITYSDK_OFFSET(0x19627430)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETCONTROLVISIBLE_OFFSET UNITYSDK_OFFSET(0x1962C080)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETDISPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1962A090)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETICONWARNING_OFFSET UNITYSDK_OFFSET(0x196272C0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETINIT_OFFSET UNITYSDK_OFFSET(0x19629820)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1962A310)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETSCREENPARAM_OFFSET UNITYSDK_OFFSET(0x1962B3D0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETSTYLE_OFFSET UNITYSDK_OFFSET(0x1962A2B0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x19629950)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1962CE80)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SHOULDUPDATEARROWORTARGATICON_OFFSET UNITYSDK_OFFSET(0x1962C2E0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SHOULDUPDATERECTTRANSFORMANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x1962CDE0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STARTFADE_OFFSET UNITYSDK_OFFSET(0x1962B200)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STOPWARNINGWITHANIM_OFFSET UNITYSDK_OFFSET(0x19626FB0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STOPWARNINGWITHTWEEN_OFFSET UNITYSDK_OFFSET(0x19627210)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x1962B470)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TRYPLAYFADE_OFFSET UNITYSDK_OFFSET(0x19629630)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TRYSETDISTANCETEXT_OFFSET UNITYSDK_OFFSET(0x1962C670)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATEALPHA_OFFSET UNITYSDK_OFFSET(0x1962CCD0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATEARROW_OFFSET UNITYSDK_OFFSET(0x1962B770)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATESELFPOS_OFFSET UNITYSDK_OFFSET(0x1962C9D0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATETARGETICON_OFFSET UNITYSDK_OFFSET(0x1962BC20)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATETEXTPOS_OFFSET UNITYSDK_OFFSET(0x1962CB90)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_WAITARROWINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1962A230)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_WAITINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1962A010)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__BINDSPEEDTYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1962CEC0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__CACHECLEAN_OFFSET UNITYSDK_OFFSET(0x19629030)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1962CE90)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x1962D090)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1962D120)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1962D1B0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1962D240)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1962D300)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1962D310)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1962D320)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideItemChildWindowController_TypeDefinitionIndex = 71977;

	class UIInLevelGuideItemChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* ITEM_WARNING_ANIM; // 0x0
		// static const ::System::String* WarningGuidePointStyleZenkov; // 0x0
		// static const ::System::String* ITEM_FADE_IN; // 0x0
		// static const ::System::String* ITEM_FADE_OUT; // 0x0
		// static const ::System::String* ARROW_FADE_IN; // 0x0
		// static const ::System::String* ARROW_FADE_OUT; // 0x0
		::System::Boolean isWarningState; // 0x318
		::DG::Tweening::Tween* warningTween; // 0x320
		::Enum_3_AA439AE9E76594AE currentWarningType; // 0x328
		::MoleMole::ItemStyle* curStyle; // 0x330
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x338
		::Class_3_7472FB6CC4015359* _hudComponent; // 0x340
		::System::Boolean _needHandleEtherBarrierProgress; // 0x348
		::UnityEngine::UI::Extension::UICircleProgress* _etherBarrierProgress; // 0x350
		::MoleMole::Battle::Entity* _ownerEntity; // 0x358
		::Class_2_1CC0E2699D5FB1A6_2* _view; // 0x360
		::System::Boolean visible; // 0x368
		::System::Boolean controlVisible; // 0x369
		::UnityEngine::RectTransform* rectTransform; // 0x370
		::UnityEngine::RectTransform* arrowTran; // 0x378
		::UnityEngine::RectTransform* targetImgTran; // 0x380
		::UnityEngine::RectTransform* textTrans; // 0x388
		::Class_2_1A39E1B51756BF41* targetIconImg; // 0x390
		::Class_2_1A39E1B51756BF41* arrowIconImg; // 0x398
		::UnityEngine::UI::Extension::UILocalizationText* targetNumText; // 0x3A0
		::UnityEngine::RectTransform* parent; // 0x3A8
		::UnityEngine::GameObject* arrowGameObject; // 0x3B0
		::UnityEngine::UI::Text* distanceText; // 0x3B8
		::System::Single lastShownDistance; // 0x3C0
		::System::Boolean hasShownDistance; // 0x3C4
		::System::Single screenWidth; // 0x3C8
		::System::Single screenHeight; // 0x3CC
		::UnityEngine::Vector2 borderRange; // 0x3D0
		::System::Single hideRadius; // 0x3D8
		::System::Boolean followEntity; // 0x3DC
		::System::Single textTransRa; // 0x3E0
		::System::Single textTransRb; // 0x3E4
		::UnityEngine::Vector3 currentAvatarLastPos; // 0x3E8
		::UnityEngine::Vector3 followTargetLastPos; // 0x3F4
		::UnityEngine::Vector3 cameraLastPos; // 0x400
		::UnityEngine::Vector2 anchorUILastPosition; // 0x40C
		::UnityEngine::Vector2 uiPos; // 0x414
		::UnityEngine::Vector3 followTargetPos; // 0x41C
		::System::Single entityHeight; // 0x428
		::System::Single fadeOutTime; // 0x42C
		::System::Single arrowFadeOutTime; // 0x430
		::System::Single tweenScaleTime; // 0x434
		::System::Single tweenScaleSize; // 0x438
		::System::Single fadeDelta; // 0x43C
		::System::Boolean isFadeState; // 0x440
		::DG::Tweening::Tween* fadeTween; // 0x448
		::UnityEngine::Transform* lockSpineTran; // 0x450
		::System::Action* visiableCallback; // 0x458
		::Foundation::Coroutine::CoroutineHandle _coroutineHandle; // 0x460
		::Foundation::Coroutine::CoroutineHandle _arrowCoroutineHandle; // 0x464
		::System::String* targetPointName; // 0x468
		::System::Boolean displayArrowMod; // 0x470
		::MoleMole::UIInLevelGuideItemContext* context; // 0x478
		::System::Boolean fadeInit; // 0x480
		::System::Boolean fadingOut; // 0x481
		::System::Boolean _NeedCache_k__BackingField; // 0x482

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void PlayWarningWithAnim(::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYWARNINGWITHANIM_OFFSET))(this, speedType, id);
		}

		::System::Void StopWarningWithAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STOPWARNINGWITHANIM_OFFSET))(this);
		}

		::System::Void PlayWarningWithTween(::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYWARNINGWITHTWEEN_OFFSET))(this, speedType, id);
		}

		::System::Void StopWarningWithTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STOPWARNINGWITHTWEEN_OFFSET))(this);
		}

		::System::Void SetIconWarning(::System::Boolean state, ::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id, ::Enum_3_AA439AE9E76594AE warningType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_5D14E331734C3C6B, ::System::UInt32, ::Enum_3_AA439AE9E76594AE))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETICONWARNING_OFFSET))(this, state, speedType, id, warningType);
		}

		::System::Void SetAlertStage(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETALERTSTAGE_OFFSET))(this, active);
		}

		::System::Void BindSpeedType(::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_BINDSPEEDTYPE_OFFSET))(this, speedType, id);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UICircleProgress* get_etherBarrierProgress()
		{
			return ((::UnityEngine::UI::Extension::UICircleProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_ETHERBARRIERPROGRESS_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshNeedHandleEtherBarrierProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_REFRESHNEEDHANDLEETHERBARRIERPROGRESS_OFFSET))(this);
		}

		::System::Void RefreshEtherBarrierListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_REFRESHETHERBARRIERLISTENER_OFFSET))(this);
		}

		::System::Void OnEtherBarrierChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONETHERBARRIERCHANGE_OFFSET))(this, obj);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void TryPlayFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TRYPLAYFADE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::String* overrideFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYFADEIN_OFFSET))(this, overrideFadeIn);
		}

		::System::Void SetInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETINIT_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean isVisible, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETVISIBLE_OFFSET))(this, isVisible, callback);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitInvisible()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_WAITINVISIBLE_OFFSET))(this);
		}

		::System::Void SetDisplayMode(::System::Boolean isArrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETDISPLAYMODE_OFFSET))(this, isArrow);
		}

		::System::Void SetStyle(::MoleMole::ItemStyle* style)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ItemStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETSTYLE_OFFSET))(this, style);
		}

		::System::Void SetOwnerEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETOWNERENTITY_OFFSET))(this, entity);
		}

		::System::Void RefreshEtherBarrierProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_REFRESHETHERBARRIERPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitArrowInvisible()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_WAITARROWINVISIBLE_OFFSET))(this);
		}

		::System::Boolean IsShowArrow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISSHOWARROW_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void Reset(::System::Boolean stopAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_RESET_OFFSET))(this, stopAnimation);
		}

		::System::Boolean IsInCameraViewport(::UnityEngine::Camera* mainCamera, ::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINCAMERAVIEWPORT_OFFSET))(this, mainCamera, position);
		}

		::System::Void InitIconByCompType(::MoleMole::Config::CampType type, ::System::Int32 memberIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITICONBYCOMPTYPE_OFFSET))(this, type, memberIndex);
		}

		::System::Void InitTeamIndex(::System::Int32 memberIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITTEAMINDEX_OFFSET))(this, memberIndex);
		}

		::System::Void InitIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITICON_OFFSET))(this, iconPath);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void StartFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STARTFADE_OFFSET))(this);
		}

		::System::Boolean IsInFadeState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINFADESTATE_OFFSET))(this);
		}

		::System::String* GetGuideItemFadeInAnimation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETGUIDEITEMFADEINANIMATION_OFFSET))(this);
		}

		::System::String* GetGuideItemFadeOutAnimation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETGUIDEITEMFADEOUTANIMATION_OFFSET))(this);
		}

		::System::Void SetScreenParam(::System::Single width, ::System::Single height, ::UnityEngine::Vector2 border, ::System::Single hideRange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETSCREENPARAM_OFFSET))(this, width, height, border, hideRange);
		}

		::System::Boolean Tick(::UnityEngine::Vector3 currPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 cameraForward, ::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TICK_OFFSET))(this, currPos, targetPos, cameraForward, cameraPos);
		}

		::System::Void SetControlVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETCONTROLVISIBLE_OFFSET))(this, visible);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INIT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetSelfScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETSELFSCREENPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetTargetScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETTARGETSCREENPOSITION_OFFSET))(this);
		}

		::System::Boolean IsInSceneCameraBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINSCENECAMERABACK_OFFSET))(this);
		}

		::System::Boolean CanPlayFadeOnInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_CANPLAYFADEONINIT_OFFSET))(this);
		}

		::System::Boolean ShouldUpdateArrowOrTargatIcon(::UnityEngine::Vector3 currPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SHOULDUPDATEARROWORTARGATICON_OFFSET))(this, currPos, targetPos, cameraPos);
		}

		::System::Single GetDistanceUpdateInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETDISTANCEUPDATEINTERVAL_OFFSET))(this);
		}

		::System::Void TrySetDistanceText(::System::Single dis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TRYSETDISTANCETEXT_OFFSET))(this, dis);
		}

		::System::Boolean UpdateArrow(::UnityEngine::Vector3 currPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 cameraForward, ::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATEARROW_OFFSET))(this, currPos, targetPos, cameraForward, cameraPos);
		}

		::System::Void UpdateAlpha(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATEALPHA_OFFSET))(this, distance);
		}

		::System::Void UpdateSelfPos(::UnityEngine::Vector2 uiPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATESELFPOS_OFFSET))(this, uiPos);
		}

		::System::Void UpdateTextPos(::System::Single rad)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATETEXTPOS_OFFSET))(this, rad);
		}

		::System::Boolean ShouldUpdateRectTransformAnchoredPosition(::UnityEngine::Vector2 uiPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SHOULDUPDATERECTTRANSFORMANCHOREDPOSITION_OFFSET))(this, uiPos);
		}

		::System::Boolean UpdateTargetIcon(::UnityEngine::Vector3 currPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 cameraForward, ::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATETARGETICON_OFFSET))(this, currPos, targetPos, cameraForward, cameraPos);
		}

		static ::System::Single get_DEFAULT_DISTANCE_UPDATE_INTERVAL()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_DEFAULT_DISTANCE_UPDATE_INTERVAL_OFFSET))();
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void _CacheClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__CACHECLEAN_OFFSET))(this);
		}

		::System::Void _BindSpeedType_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__BINDSPEEDTYPE_B__10_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
