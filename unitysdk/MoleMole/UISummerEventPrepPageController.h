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
class Class_2_C7387D40D4120A48_13;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GETFIXEDGYROROTATION_OFFSET UNITYSDK_OFFSET(0x15E9E3D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15E97FF0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET__SPACETYPE_OFFSET UNITYSDK_OFFSET(0x15E9D140)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_HIDECROWDNPCFORTIMELINE_OFFSET UNITYSDK_OFFSET(0x15E994C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITBIND_OFFSET UNITYSDK_OFFSET(0x15E98780)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITREDPOINT_OFFSET UNITYSDK_OFFSET(0x15E98D30)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15EA03A0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15EA0880)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E98000)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x15E9C840)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFULLSCREENBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15EA10A0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONHIDEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15E9C9D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15E9FB20)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15E9FEC0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONOPENTIPSPANELBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x15E9F990)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONQUESTCHANGE_OFFSET UNITYSDK_OFFSET(0x15E9F8C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREFRESHPOPULARITY_OFFSET UNITYSDK_OFFSET(0x15E9F910)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15EA1000)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15E9CB70)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E9CBC0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E98090)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E99420)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15EA09D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15EA0EB0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0x15EA0010)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x15E99610)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PRECHECKINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x15E9C900)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PROCESS_OFFSET UNITYSDK_OFFSET(0x15E9EF80)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RECORDBUTTONCLICKACTION_OFFSET UNITYSDK_OFFSET(0x15EA0140)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15E998D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RESETATTITUDE_OFFSET UNITYSDK_OFFSET(0x15E9C600)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RESTORECROWDNPCFORTIMELINE_OFFSET UNITYSDK_OFFSET(0x15E9CF50)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x15E9D0A0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEDEBUG_OFFSET UNITYSDK_OFFSET(0x15E9E390)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEGYRO_OFFSET UNITYSDK_OFFSET(0x15E9D2B0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15E9D240)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EA1240)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA10F0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONHIDEBTNCLICK_B__56_0_OFFSET UNITYSDK_OFFSET(0x15EA1430)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONREWARDBTNCLICK_B__55_0_OFFSET UNITYSDK_OFFSET(0x15EA1250)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EA14E0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x15EA1570)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15EA1580)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EA1590)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EA15A0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EA15B0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_PRECHECKINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x15EA15C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x15EA1670)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventPrepPageController_TypeDefinitionIndex = 67941;

	class UISummerEventPrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Boolean* StaticGet_DebugEnableGyro()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UISummerEventPrepPageController_TypeDefinitionIndex)->GetStaticField(0x136B0);
		}
		::Class_2_C7387D40D4120A48_13* _view; // 0x328
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

		::System::Void HideCrowdNpcForTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_HIDECROWDNPCFORTIMELINE_OFFSET))(this);
		}

		::System::Void RestoreCrowdNpcForTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RESTORECROWDNPCFORTIMELINE_OFFSET))(this);
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

		::System::Void _OnRewardBtnClick_b__55_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONREWARDBTNCLICK_B__55_0_OFFSET))(this);
		}

		::System::Void _OnHideBtnClick_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONHIDEBTNCLICK_B__56_0_OFFSET))(this);
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
