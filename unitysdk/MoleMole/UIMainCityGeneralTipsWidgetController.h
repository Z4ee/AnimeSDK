#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_38082A0AFC8105A8_1;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCityGeneralTipsWidgetController_Context; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178422E0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17842370)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178423D0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17841BC0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17841E40)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x17842820)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x17841F30)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_SETFADEOUTSTATE_OFFSET UNITYSDK_OFFSET(0x17842C40)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_SHOWMISSIONFINISHANDHIDE_OFFSET UNITYSDK_OFFSET(0x17842170)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_STOPANIM_OFFSET UNITYSDK_OFFSET(0x17842D00)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_UPDATECONTENTFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x17842450)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_UPDATECONTENTFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x178429F0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17842E00)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER__PLAYFADEOUTANIM_B__9_0_OFFSET UNITYSDK_OFFSET(0x17842EB0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER__SHOWMISSIONFINISHANDHIDE_B__8_0_OFFSET UNITYSDK_OFFSET(0x17842E60)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER__SHOWMISSIONFINISHANDHIDE_B__8_1_OFFSET UNITYSDK_OFFSET(0x17842EA0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17842F40)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17842FD0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17842FE0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17843070)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17843100)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGeneralTipsWidgetController_TypeDefinitionIndex = 73241;

	class UIMainCityGeneralTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_38082A0AFC8105A8_1* _view; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle _trackQuestAnimHandle; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle _updateMissionContentHandle; // 0x2CC
		::UnityEngine::UI::VerticalLayoutGroup* missionLayout; // 0x2D0
		::System::Single missionMinSize; // 0x2D8
		::DG::Tweening::Tweener* missionSizeTween; // 0x2E0
		::UnityEngine::RectTransform* MissionContent; // 0x2E8
		::MoleMole::UIMainCityGeneralTipsWidgetController_Context* _context; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetContent(::System::String* key, ::System::Boolean isText, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_SETCONTENT_OFFSET))(this, key, isText, maxTransform);
		}

		::System::Void ShowMissionFinishAndHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_SHOWMISSIONFINISHANDHIDE_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Void SetFadeOutState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_SETFADEOUTSTATE_OFFSET))(this);
		}

		::System::Void StopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_STOPANIM_OFFSET))(this);
		}

		::System::Void UpdateContentFadeInAnimation(::System::Boolean resetLayout, ::System::Boolean fromMinSize, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_UPDATECONTENTFADEINANIMATION_OFFSET))(this, resetLayout, fromMinSize, callback);
		}

		::System::Void UpdateContentFadeOutAnimation(::System::Boolean resetLayout, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_UPDATECONTENTFADEOUTANIMATION_OFFSET))(this, resetLayout, callback);
		}

		::System::Void _ShowMissionFinishAndHide_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER__SHOWMISSIONFINISHANDHIDE_B__8_0_OFFSET))(this);
		}

		::System::Void _ShowMissionFinishAndHide_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER__SHOWMISSIONFINISHANDHIDE_B__8_1_OFFSET))(this);
		}

		::System::Void _PlayFadeOutAnim_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER__PLAYFADEOUTANIM_B__9_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
