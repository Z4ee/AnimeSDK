#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/MoleMole/UISummerEventPrepPageController_ActionType.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F780812A1FAD31A;
class Class_2_A944C35C433158AC;
class Class_2_AE698B0D84539104;
class Class_2_C7387D40D4120A48_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GETFIXEDGYROROTATION_OFFSET UNITYSDK_OFFSET(0x1617F310)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16179380)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET__SPACETYPE_OFFSET UNITYSDK_OFFSET(0x1617E060)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITBIND_OFFSET UNITYSDK_OFFSET(0x161799F0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITREDPOINT_OFFSET UNITYSDK_OFFSET(0x16179FA0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16181320)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16181800)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16179390)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1617D8C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFULLSCREENBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16182020)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONHIDEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1617DA50)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16180AA0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16180E40)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONOPENTIPSPANELBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16180910)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONQUESTCHANGE_OFFSET UNITYSDK_OFFSET(0x16180840)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREFRESHPOPULARITY_OFFSET UNITYSDK_OFFSET(0x16180890)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16181F80)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1617DBF0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1617DC40)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16179420)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1617A690)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16181950)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16181E30)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0x16180F90)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1617A730)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PRECHECKINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x1617D980)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PROCESS_OFFSET UNITYSDK_OFFSET(0x1617FF00)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RECORDBUTTONCLICKACTION_OFFSET UNITYSDK_OFFSET(0x161810C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1617A9F0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RESETATTITUDE_OFFSET UNITYSDK_OFFSET(0x1617D690)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1617DFC0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEDEBUG_OFFSET UNITYSDK_OFFSET(0x1617F2D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEGYRO_OFFSET UNITYSDK_OFFSET(0x1617E1D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1617E160)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x161821C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16182070)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONHIDEBTNCLICK_B__54_0_OFFSET UNITYSDK_OFFSET(0x161823B0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONREWARDBTNCLICK_B__53_0_OFFSET UNITYSDK_OFFSET(0x161821D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16182460)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x161824F0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16182500)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16182510)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16182520)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16182530)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_PRECHECKINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x16182540)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x161825F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventPrepPageController_TypeDefinitionIndex = 51687;

	class UISummerEventPrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Boolean* StaticGet_DebugEnableGyro()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UISummerEventPrepPageController_TypeDefinitionIndex)->GetStaticField(0x13050);
		}
		::Class_2_C7387D40D4120A48_7* _view; // 0x328
		::Class_2_AE698B0D84539104* _model; // 0x330
		::Class_2_A944C35C433158AC* _timelineTask; // 0x338
		::System::Int32 _curMainTaskQuestId; // 0x340
		::System::Int32 _curAliceQuestId; // 0x344
		::System::Int32 _curYuzuhaQuestId; // 0x348
		::System::Boolean _isMainTaskLock; // 0x34C
		::System::Boolean _isAliceLock; // 0x34D
		::System::Boolean _isYuzuhaLock; // 0x34E
		::System::Boolean _isAquariumUnlock; // 0x34F
		::System::Boolean _isSurfUnlock; // 0x350
		::System::Boolean _isShotUnlock; // 0x351
		::System::Boolean _isHide; // 0x352
		::Class_1_5F780812A1FAD31A* GyroscopeInputHandler; // 0x358
		::UnityEngine::Quaternion _lastRotation; // 0x360
		::UnityEngine::Quaternion rotationFromGyro; // 0x370
		::UnityEngine::Plane _lastPlane; // 0x380
		::UnityEngine::Ray _lastRay; // 0x390
		::UnityEngine::Vector3 _lastTargetPoint; // 0x3A8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::RectTransform*, ::UnityEngine::Quaternion>* _defaultRotations; // 0x3B8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::RectTransform*, ::UnityEngine::Vector3>* _defaultPositions; // 0x3C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Boolean PreCheckInputBlock(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PRECHECKINPUTBLOCK_OFFSET))(this, inputAction);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::Foundation::SpaceType get__spaceType()
		{
			return ((::Foundation::SpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET__SPACETYPE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateGyro()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEGYRO_OFFSET))(this);
		}

		::System::Void ResetAttitude()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RESETATTITUDE_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetFixedGyroRotation(::UnityEngine::Quaternion rotate)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GETFIXEDGYROROTATION_OFFSET))(this, rotate);
		}

		::System::Void Process(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector3 axis)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PROCESS_OFFSET))(this, transform, axis);
		}

		::System::Void UpdateDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEDEBUG_OFFSET))(this);
		}

		::System::Void InitBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITBIND_OFFSET))(this);
		}

		::System::Void InitRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITREDPOINT_OFFSET))(this);
		}

		::System::Void PlayTimeline(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PLAYTIMELINE_OFFSET))(this, key);
		}

		::System::Void OnQuestChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONQUESTCHANGE_OFFSET))(this, args);
		}

		::System::Void OnRefreshPopularity(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREFRESHPOPULARITY_OFFSET))(this, args);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnOpenTipsPanelButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONOPENTIPSPANELBUTTONCLICK_OFFSET))(this);
		}

		::System::Void OnMainTaskBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMainTaskLockBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKLOCKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnAliceTaskBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnAliceTaskLockBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKLOCKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnYuzuhaTaskBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnYuzuhaTaskLockBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKLOCKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void OnHideBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONHIDEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnFullScreenBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFULLSCREENBTNCLICK_OFFSET))(this);
		}

		::System::Void OpenMap(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_OPENMAP_OFFSET))(this, questID);
		}

		::System::Void RecordButtonClickAction(::MoleMole::UISummerEventPrepPageController_ActionType actionType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerEventPrepPageController_ActionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RECORDBUTTONCLICKACTION_OFFSET))(this, actionType);
		}

		::System::Void _OnRewardBtnClick_b__53_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONREWARDBTNCLICK_B__53_0_OFFSET))(this);
		}

		::System::Void _OnHideBtnClick_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONHIDEBTNCLICK_B__54_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_PreCheckInputBlock(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_PRECHECKINPUTBLOCK_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
