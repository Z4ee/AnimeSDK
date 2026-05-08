#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_D3FBEE9DE3F34F60.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_43BD383C98B4C0C5_29;
class Class_2_78DA3B72B76F4A93;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ADDONCLOSE_OFFSET UNITYSDK_OFFSET(0x149E76E0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_CLOSETIP_OFFSET UNITYSDK_OFFSET(0x149E5F00)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_CLOSEWIDGETWITHFADE_OFFSET UNITYSDK_OFFSET(0x149E6020)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_DOANIMATION_OFFSET UNITYSDK_OFFSET(0x149E6200)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_DOAUTOCLOSE_OFFSET UNITYSDK_OFFSET(0x149E66B0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x149E7790)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITICON_OFFSET UNITYSDK_OFFSET(0x149E7080)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITINFOTEXT_OFFSET UNITYSDK_OFFSET(0x149E6AF0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITPROGRESSICON_OFFSET UNITYSDK_OFFSET(0x149E6DE0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITTIPSPANEL_OFFSET UNITYSDK_OFFSET(0x149E7140)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_LOADREALFINISHICON_OFFSET UNITYSDK_OFFSET(0x149E74A0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149E5720)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x149E57B0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONTIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x149E5860)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x149E5A00)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x149E5960)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149E56C0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x149E5910)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_RESETSIZE_OFFSET UNITYSDK_OFFSET(0x149E5B30)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x149E77A0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET UNITYSDK_OFFSET(0x149E6930)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_1_OFFSET UNITYSDK_OFFSET(0x149E68A0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET UNITYSDK_OFFSET(0x149E67C0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET UNITYSDK_OFFSET(0x149E5FC0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__CACHECLEAN_OFFSET UNITYSDK_OFFSET(0x149E5E30)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x149E77B0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__INITPROGRESSICON_B__19_0_OFFSET UNITYSDK_OFFSET(0x149E7820)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149E7830)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x149E78C0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x149E78F0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x149E7900)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149E7990)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x149E7A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTutorialTipsRowWidgetController_TypeDefinitionIndex = 70277;

	class UIGeneralTutorialTipsRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single MIN_WIDTH; // 0x0
		::Class_2_78DA3B72B76F4A93* _view; // 0x2B8
		::System::Single missionMinSize; // 0x2C0
		::DG::Tweening::Tweener* missionSizeTween; // 0x2C8
		::DG::Tweening::Tweener* closeTween; // 0x2D0
		::UnityEngine::RectTransform* MissionContent; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle _updateMissionContentHandle; // 0x2E0
		::UnityEngine::UI::HorizontalLayoutGroup* _verticalLayoutGroup; // 0x2E8
		::Class_1_43BD383C98B4C0C5_29* _data; // 0x2F0
		::System::Action* _onCloseCallback; // 0x2F8
		::Foundation::Coroutine::CoroutineHandle autoCloseHandle; // 0x300
		::System::Boolean _hasTrigger; // 0x304
		::System::Nullable_1<::MoleMole::InputLogicEventType> _bindLogicEventType; // 0x308
		::System::Boolean _hasClose; // 0x310
		::System::Boolean _NeedCache_k__BackingField; // 0x311

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void ResetSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_RESETSIZE_OFFSET))(this);
		}

		::System::Void CloseTip(::System::Boolean blend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_CLOSETIP_OFFSET))(this, blend);
		}

		::System::Void StopAutoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET))(this);
		}

		::System::Void DoAnimation(::UnityEngine::UI::VerticalLayoutGroup* missionLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_DOANIMATION_OFFSET))(this, missionLayout);
		}

		::System::Void DoAutoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_DOAUTOCLOSE_OFFSET))(this);
		}

		::System::Void CloseWidgetWithFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_CLOSEWIDGETWITHFADE_OFFSET))(this);
		}

		::System::Void ShowHollowTips(::UnityEngine::UI::VerticalLayoutGroup* layout, ::Class_1_43BD383C98B4C0C5_29* data, ::UnityEngine::RectTransform* viewHollowTip, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_29*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET))(this, layout, data, viewHollowTip, playAnim);
		}

		::System::Void ShowHollowTips_1(::UnityEngine::UI::VerticalLayoutGroup* layout, ::Class_1_43BD383C98B4C0C5_29* data, ::UnityEngine::RectTransform* viewHollowTip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_29*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_1_OFFSET))(this, layout, data, viewHollowTip);
		}

		::System::Void ShowHollowNormalTips(::UnityEngine::UI::VerticalLayoutGroup* missionLayout, ::Class_1_43BD383C98B4C0C5_29* data, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_29*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET))(this, missionLayout, data, maxTransform);
		}

		::System::Void InitTipsPanel(::Struct_2_D3FBEE9DE3F34F60& data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D3FBEE9DE3F34F60&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITTIPSPANEL_OFFSET))(this, data);
		}

		::System::Void OnTipButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONTIPBUTTONCLICK_OFFSET))(this);
		}

		::System::Void InitIcon(::Class_1_43BD383C98B4C0C5_29* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITICON_OFFSET))(this, data);
		}

		::System::Void InitProgressIcon(::Class_1_43BD383C98B4C0C5_29* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITPROGRESSICON_OFFSET))(this, data);
		}

		::System::Void InitInfoText(::Class_1_43BD383C98B4C0C5_29* data, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_29*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITINFOTEXT_OFFSET))(this, data, maxTransform);
		}

		::System::Void LoadRealFinishIcon(::System::Boolean isFinish, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_LOADREALFINISHICON_OFFSET))(this, isFinish, playAnim);
		}

		::System::Void AddOnClose(::System::Action* showNextHollowTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ADDONCLOSE_OFFSET))(this, showNextHollowTips);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void _CacheClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__CACHECLEAN_OFFSET))(this);
		}

		::System::Void _InitProgressIcon_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__INITPROGRESSICON_B__19_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
