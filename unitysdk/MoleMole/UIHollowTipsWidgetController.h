#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIHollowTipsWidgetController_ProgressRedirect.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_43BD383C98B4C0C5_36;
class Class_2_D6646C12B5D25CB4;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ADDONCLOSE_OFFSET UNITYSDK_OFFSET(0x186DC460)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_CLOSETIP_OFFSET UNITYSDK_OFFSET(0x186D9A60)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_CLOSEWIDGETWITHFADE_OFFSET UNITYSDK_OFFSET(0x186D9720)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_DOANIMATION_OFFSET UNITYSDK_OFFSET(0x186D9B70)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_LOADREALFINISHICON_OFFSET UNITYSDK_OFFSET(0x186DA440)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186D98A0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x186D99C0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186D9930)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186D9510)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SETCLOSEACTION_OFFSET UNITYSDK_OFFSET(0x186DC410)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWCHALLENGE_OFFSET UNITYSDK_OFFSET(0x186DA680)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET UNITYSDK_OFFSET(0x186DBF60)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_1_OFFSET UNITYSDK_OFFSET(0x186DA570)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_2_OFFSET UNITYSDK_OFFSET(0x186DC370)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET UNITYSDK_OFFSET(0x186DA040)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET UNITYSDK_OFFSET(0x186D9B10)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186DC510)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER__SHOWHOLLOWNORMALTIPS_B__14_0_OFFSET UNITYSDK_OFFSET(0x186DC580)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER__SHOWHOLLOWTIPS_B__10_0_OFFSET UNITYSDK_OFFSET(0x186DC570)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186DC590)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x186DC620)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186DC630)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DC6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTipsWidgetController_TypeDefinitionIndex = 43158;

	class UIHollowTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D6646C12B5D25CB4* _view; // 0x2C0
		::System::Single missionMinSize; // 0x2C8
		::DG::Tweening::Tweener* missionSizeTween; // 0x2D0
		::UnityEngine::RectTransform* MissionContent; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle _updateMissionContentHandle; // 0x2E0
		::UnityEngine::UI::HorizontalLayoutGroup* _verticalLayoutGroup; // 0x2E8
		::Class_1_43BD383C98B4C0C5_36* _data; // 0x2F0
		::System::Action* _closeCallback; // 0x2F8
		::System::Action* _onCloseCallback; // 0x300
		::Foundation::Coroutine::CoroutineHandle autoCloseHandle; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void CloseWidgetWithFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_CLOSEWIDGETWITHFADE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void CloseTip(::System::Boolean blend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_CLOSETIP_OFFSET))(this, blend);
		}

		::System::Void StopAutoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET))(this);
		}

		::System::Void DoAnimation(::UnityEngine::UI::VerticalLayoutGroup* missionLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_DOANIMATION_OFFSET))(this, missionLayout);
		}

		::System::Void ShowHollowTips(::System::String* key, ::System::Boolean showIcon, ::System::Boolean finish, ::UnityEngine::RectTransform* viewHollowTip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET))(this, key, showIcon, finish, viewHollowTip);
		}

		::System::Void ShowHollowTips_1(::UnityEngine::UI::VerticalLayoutGroup* layout, ::Class_1_43BD383C98B4C0C5_36* data, ::UnityEngine::RectTransform* viewHollowTip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_36*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_1_OFFSET))(this, layout, data, viewHollowTip);
		}

		::System::Void ShowHollowTips_2(::UnityEngine::UI::VerticalLayoutGroup* layout, ::Class_1_43BD383C98B4C0C5_36* data, ::UnityEngine::RectTransform* viewHollowTip, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_36*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_2_OFFSET))(this, layout, data, viewHollowTip, playAnim);
		}

		::System::Void ShowHollowChallenge(::UnityEngine::UI::VerticalLayoutGroup* missionLayout, ::Class_1_43BD383C98B4C0C5_36* data, ::UnityEngine::RectTransform* maxTransform, ::MoleMole::UIHollowTipsWidgetController_ProgressRedirect tempProgress)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_36*, ::UnityEngine::RectTransform*, ::MoleMole::UIHollowTipsWidgetController_ProgressRedirect))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWCHALLENGE_OFFSET))(this, missionLayout, data, maxTransform, tempProgress);
		}

		::System::Void ShowHollowNormalTips(::UnityEngine::UI::VerticalLayoutGroup* missionLayout, ::Class_1_43BD383C98B4C0C5_36* data, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_36*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET))(this, missionLayout, data, maxTransform);
		}

		::System::Void LoadRealFinishIcon(::System::Boolean isFinish, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_LOADREALFINISHICON_OFFSET))(this, isFinish, playAnim);
		}

		::System::Void SetCloseAction(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SETCLOSEACTION_OFFSET))(this, callback);
		}

		::System::Void AddOnClose(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ADDONCLOSE_OFFSET))(this, callback);
		}

		::System::Void _ShowHollowTips_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER__SHOWHOLLOWTIPS_B__10_0_OFFSET))(this);
		}

		::System::Void _ShowHollowNormalTips_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER__SHOWHOLLOWNORMALTIPS_B__14_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
