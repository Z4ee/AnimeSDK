#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_38082A0AFC8105A8;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_GETQUESTDESCRIPTIONSUFFIX_OFFSET UNITYSDK_OFFSET(0x14C36060)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C349E0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C34A70)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C34700)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C34970)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKENDANIM_OFFSET UNITYSDK_OFFSET(0x14C35C10)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKSTARTANIM_OFFSET UNITYSDK_OFFSET(0x14C35B10)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKSWITCHANIM_OFFSET UNITYSDK_OFFSET(0x14C356D0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_REFRESHQUESTTRACKVIEW_OFFSET UNITYSDK_OFFSET(0x14C34D40)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SETFADEOUTSTATE_OFFSET UNITYSDK_OFFSET(0x14C34AF0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWCURRENTMISSIONFINISHANDSWITCH_OFFSET UNITYSDK_OFFSET(0x14C358E0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDHIDE_OFFSET UNITYSDK_OFFSET(0x14C35480)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDSETTOTRACKQUEST_OFFSET UNITYSDK_OFFSET(0x14C34BB0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDSWITCHTOCURRENT_OFFSET UNITYSDK_OFFSET(0x14C35600)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_STOPQUESTTRACKANIM_OFFSET UNITYSDK_OFFSET(0x14C35A10)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_UPDATEMISSIONCONTENTFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x14C350A0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_UPDATEMISSIONCONTENTFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x14C35E10)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C36630)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C365D0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__REFRESHQUESTTRACKVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0x14C367A0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C36890)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C36920)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C369B0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C36A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController_TypeDefinitionIndex = 84189;

	class UIMainCityMissionWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_ConditionKeyMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMissionWidgetController_TypeDefinitionIndex)->GetStaticField(0x4B1D0);
		}
		static ::System::String** StaticGet_OtherConditionKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMissionWidgetController_TypeDefinitionIndex)->GetStaticField(0x4B1D8);
		}
		::Class_2_38082A0AFC8105A8* _view; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle _trackQuestAnimHandle; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle _updateMissionContentHandle; // 0x2CC
		::UnityEngine::UI::VerticalLayoutGroup* missionLayout; // 0x2D0
		::System::Single missionMinSize; // 0x2D8
		::DG::Tweening::Tweener* missionSizeTween; // 0x2E0
		::UnityEngine::RectTransform* MissionContent; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetFadeOutState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SETFADEOUTSTATE_OFFSET))(this);
		}

		::System::Void ShowMissionFinishAndSetToTrackQuest(::System::Int32 finishQuestID, ::System::Int32 trackQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDSETTOTRACKQUEST_OFFSET))(this, finishQuestID, trackQuestID);
		}

		::System::Void ShowMissionFinishAndHide(::System::Int32 finishQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDHIDE_OFFSET))(this, finishQuestID);
		}

		::System::Void ShowMissionFinishAndSwitchToCurrent(::System::Int32 finishQuestID, ::System::Int32 orginalQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDSWITCHTOCURRENT_OFFSET))(this, finishQuestID, orginalQuestID);
		}

		::System::Void ShowCurrentMissionFinishAndSwitch(::System::Int32 questId, ::System::Boolean playSound, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWCURRENTMISSIONFINISHANDSWITCH_OFFSET))(this, questId, playSound, callback);
		}

		::System::Void StopQuestTrackAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_STOPQUESTTRACKANIM_OFFSET))(this);
		}

		::System::Void PlayQuestTrackStartAnim(::System::Int32 questId, ::System::Boolean playSound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKSTARTANIM_OFFSET))(this, questId, playSound);
		}

		::System::Void PlayQuestTrackEndAnim(::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKENDANIM_OFFSET))(this, questId);
		}

		::System::Void PlayQuestTrackSwitchAnim(::System::Int32 questId, ::System::Boolean playSound, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKSWITCHANIM_OFFSET))(this, questId, playSound, callback);
		}

		::System::Void UpdateMissionContentFadeInAnimation(::System::Boolean resetLayout, ::System::Boolean fromMinSize, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_UPDATEMISSIONCONTENTFADEINANIMATION_OFFSET))(this, resetLayout, fromMinSize, callback);
		}

		::System::Void UpdateMissionContentFadeOutAnimation(::System::Boolean resetLayout, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_UPDATEMISSIONCONTENTFADEOUTANIMATION_OFFSET))(this, resetLayout, callback);
		}

		static ::System::String* GetQuestDescriptionSuffix(::System::Int32 descQuestId)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_GETQUESTDESCRIPTIONSUFFIX_OFFSET))(descQuestId);
		}

		::System::Void RefreshQuestTrackView(::System::Int32 descQuestId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_REFRESHQUESTTRACKVIEW_OFFSET))(this, descQuestId);
		}

		::System::Void _RefreshQuestTrackView_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__REFRESHQUESTTRACKVIEW_B__19_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
