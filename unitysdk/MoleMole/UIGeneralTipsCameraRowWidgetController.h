#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_2.h"
#include "unitysdk/Struct_2_D3FBEE9DE3F34F60.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_43BD383C98B4C0C5_36;
class Class_2_2F8BF3DDD6AC7CA9;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class LayoutGroup; }

#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ADDONCLOSE_OFFSET UNITYSDK_OFFSET(0x1845C7A0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_CLOSETIP_1_OFFSET UNITYSDK_OFFSET(0x1845B280)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_CLOSETIP_OFFSET UNITYSDK_OFFSET(0x1845B1B0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_DOANIMATIONFADEOUT_OFFSET UNITYSDK_OFFSET(0x1845AF90)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_DOANIMATION_OFFSET UNITYSDK_OFFSET(0x1845B480)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1845C850)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_HIDECAMERATIPS_OFFSET UNITYSDK_OFFSET(0x1845BB60)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_HIDETIP_OFFSET UNITYSDK_OFFSET(0x1845AE60)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITICON_OFFSET UNITYSDK_OFFSET(0x1845C220)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITINFOTEXT_OFFSET UNITYSDK_OFFSET(0x1845BD70)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITMISSIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1845B2D0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITPROGRESSICON_OFFSET UNITYSDK_OFFSET(0x1845C0A0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITTIPSPANEL_OFFSET UNITYSDK_OFFSET(0x1845C2E0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_LOADREALFINISHICON_OFFSET UNITYSDK_OFFSET(0x1845C640)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1845A690)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1845A720)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONTIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1845A7D0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1845A970)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1845A8D0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1845A630)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1845A880)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_RESETSIZE_OFFSET UNITYSDK_OFFSET(0x1845AAA0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1845C860)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SHOWCAMERATIPS_OFFSET UNITYSDK_OFFSET(0x1845B910)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SHOWEXTRAUI_OFFSET UNITYSDK_OFFSET(0x1845BAF0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET UNITYSDK_OFFSET(0x1845BBB0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET UNITYSDK_OFFSET(0x1845BA60)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET UNITYSDK_OFFSET(0x1845AF30)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER__CACHECLEAN_OFFSET UNITYSDK_OFFSET(0x1845ADA0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1845C870)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER__INITPROGRESSICON_B__24_0_OFFSET UNITYSDK_OFFSET(0x1845C8E0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1845C8F0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1845C980)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1845C9B0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1845C9C0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1845CA50)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1845CAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsCameraRowWidgetController_TypeDefinitionIndex = 43706;

	class UIGeneralTipsCameraRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single MIN_WIDTH; // 0x0
		::Class_2_2F8BF3DDD6AC7CA9* _view; // 0x2C0
		::UnityEngine::Vector2 _MissionContentSizeDelta; // 0x2C8
		::System::Single missionMinSize; // 0x2D0
		::DG::Tweening::Tweener* missionSizeTween; // 0x2D8
		::DG::Tweening::Tweener* closeTween; // 0x2E0
		::UnityEngine::RectTransform* MissionContent; // 0x2E8
		::Foundation::Coroutine::CoroutineHandle _updateMissionContentHandle; // 0x2F0
		::Class_1_43BD383C98B4C0C5_36* _data; // 0x2F8
		::System::Action* _onCloseCallback; // 0x300
		::Foundation::Coroutine::CoroutineHandle autoCloseHandle; // 0x308
		::System::Boolean _hasTrigger; // 0x30C
		::System::Nullable_1<::MoleMole::InputLogicEventType> _bindLogicEventType; // 0x310
		::System::Boolean _hasClose; // 0x318
		::System::Boolean _hasHide; // 0x319
		::System::Boolean _NeedCache_k__BackingField; // 0x31A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void ResetSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_RESETSIZE_OFFSET))(this);
		}

		::System::Void HideTip(::System::Boolean blend, ::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_HIDETIP_OFFSET))(this, blend, cb);
		}

		::System::Void CloseTip(::System::Boolean blend, ::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_CLOSETIP_OFFSET))(this, blend, cb);
		}

		::System::Void CloseTip_1(::System::Boolean blend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_CLOSETIP_1_OFFSET))(this, blend);
		}

		::System::Void StopAutoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET))(this);
		}

		::System::Void InitMissionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITMISSIONCONTENT_OFFSET))(this);
		}

		::System::Void DoAnimation(::UnityEngine::UI::LayoutGroup* missionLayout, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutGroup*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_DOANIMATION_OFFSET))(this, missionLayout, action);
		}

		::System::Void DoAnimationFadeOut(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_DOANIMATIONFADEOUT_OFFSET))(this, action);
		}

		::System::Void ShowCameraTips(::UnityEngine::UI::LayoutGroup* layout, ::Class_1_43BD383C98B4C0C5_36* data, ::Struct_2_B6A3FA7992F9F37E_2 extraContext, ::UnityEngine::RectTransform* viewHollowTip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutGroup*, ::Class_1_43BD383C98B4C0C5_36*, ::Struct_2_B6A3FA7992F9F37E_2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SHOWCAMERATIPS_OFFSET))(this, layout, data, extraContext, viewHollowTip);
		}

		::System::Void HideCameraTips(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_HIDECAMERATIPS_OFFSET))(this, cb);
		}

		::System::Void ShowHollowTips(::UnityEngine::UI::LayoutGroup* layout, ::Class_1_43BD383C98B4C0C5_36* data, ::UnityEngine::RectTransform* viewHollowTip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutGroup*, ::Class_1_43BD383C98B4C0C5_36*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET))(this, layout, data, viewHollowTip);
		}

		::System::Void ShowExtraUI(::Struct_2_B6A3FA7992F9F37E_2 extraContext)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_B6A3FA7992F9F37E_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SHOWEXTRAUI_OFFSET))(this, extraContext);
		}

		::System::Void ShowHollowNormalTips(::UnityEngine::UI::LayoutGroup* missionLayout, ::Class_1_43BD383C98B4C0C5_36* data, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutGroup*, ::Class_1_43BD383C98B4C0C5_36*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET))(this, missionLayout, data, maxTransform);
		}

		::System::Void InitTipsPanel(::Struct_2_D3FBEE9DE3F34F60& data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D3FBEE9DE3F34F60&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITTIPSPANEL_OFFSET))(this, data);
		}

		::System::Void OnTipButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ONTIPBUTTONCLICK_OFFSET))(this);
		}

		::System::Void InitIcon(::Class_1_43BD383C98B4C0C5_36* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITICON_OFFSET))(this, data);
		}

		::System::Void InitProgressIcon(::Class_1_43BD383C98B4C0C5_36* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITPROGRESSICON_OFFSET))(this, data);
		}

		::System::Void InitInfoText(::Class_1_43BD383C98B4C0C5_36* data, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_36*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_INITINFOTEXT_OFFSET))(this, data, maxTransform);
		}

		::System::Void LoadRealFinishIcon(::System::Boolean isFinish, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_LOADREALFINISHICON_OFFSET))(this, isFinish, playAnim);
		}

		::System::Void AddOnClose(::System::Action* showNextHollowTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_ADDONCLOSE_OFFSET))(this, showNextHollowTips);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void _CacheClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER__CACHECLEAN_OFFSET))(this);
		}

		::System::Void _InitProgressIcon_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER__INITPROGRESSICON_B__24_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
