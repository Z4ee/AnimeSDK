#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/UIMainCityClockWidgetController_ProgressAnimType.h"
#include "unitysdk/MoleMole/UIMainCityClockWidgetController_RefreshReq.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_2CD6915EC12D64B9;
class Class_2_7B15B3118FE590CD_23;
class Class_2_7B15B3118FE590CD_23_Class_2_16AC50F20374540A_1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_CORRECTANIMELEMS_OFFSET UNITYSDK_OFFSET(0x15DBC650)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_DOREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x15DBBEC0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15DBC730)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETPROGRESSANIMCURVE_OFFSET UNITYSDK_OFFSET(0x15DBD580)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETPROGRESSANIMLENGTH_OFFSET UNITYSDK_OFFSET(0x15DBD520)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETSTAGEICON_OFFSET UNITYSDK_OFFSET(0x15DBD840)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GET_ISBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15DBB4F0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_LOADAVATARIMAGE_OFFSET UNITYSDK_OFFSET(0x15DBBC30)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONAFTERPARENTSHOW_OFFSET UNITYSDK_OFFSET(0x15DBCA20)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DBC860)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15DBD0A0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x15DBE740)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15DBC8F0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DBCBD0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15DBB520)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DBBCE0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUNLOCK_OFFSET UNITYSDK_OFFSET(0x15DBE6B0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x15DBD1E0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x15DBD160)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHWEEKDAY_OFFSET UNITYSDK_OFFSET(0x15DBD610)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETCLOCKSTORYEND_OFFSET UNITYSDK_OFFSET(0x15DBD0F0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x15DBCB50)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETDATEKEY_OFFSET UNITYSDK_OFFSET(0x15DBD990)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETFADEOUTDATEKEY_OFFSET UNITYSDK_OFFSET(0x15DBD8F0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SHOWSTAGEICON_OFFSET UNITYSDK_OFFSET(0x15DBD760)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TICKPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x15DBDA30)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TRYPOPTIMEWINDOW_OFFSET UNITYSDK_OFFSET(0x15DBE2F0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TRYREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x15DBCDF0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15DBCCD0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBE820)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__DOREFRESHTIME_G__GETTIMEPROGRESS_43_0_OFFSET UNITYSDK_OFFSET(0x15DBD4E0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_0_OFFSET UNITYSDK_OFFSET(0x15DBE980)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_1_OFFSET UNITYSDK_OFFSET(0x15DBE990)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_2_OFFSET UNITYSDK_OFFSET(0x15DBE9A0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__REFRESHSTAGE_B__44_0_OFFSET UNITYSDK_OFFSET(0x15DBEAB0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__TICKPROGRESSANIM_G__SETARROW_46_0_OFFSET UNITYSDK_OFFSET(0x15DBE260)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONAFTERPARENTSHOW_OFFSET UNITYSDK_OFFSET(0x15DBEB60)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DBEBF0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15DBEC80)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DBED20)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15DBEDB0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DBEE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController_TypeDefinitionIndex = 53260;

	class UIMainCityClockWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single ICON_ANIM_DELAY; // 0x0
		// static const ::System::Single PROGRESS_SPEED; // 0x0
		::Class_2_7B15B3118FE590CD_23* _view; // 0x2B8
		::System::Int32 _dayOfWeek; // 0x2C0
		::System::Int32 _lastDayOfWeek; // 0x2C4
		::System::ValueTuple_2<::System::Int32, ::System::Int32> _hoursMinutes; // 0x2C8
		::System::Int32 _lastStage; // 0x2D0
		::System::Int32 _currentStage; // 0x2D4
		::Struct_2_49ABC235CB23B56F _iconAnimTimer; // 0x2D8
		::Struct_2_49ABC235CB23B56F _refreshDateTimer; // 0x2E8
		::Struct_2_49ABC235CB23B56F _progressAnimTimer; // 0x2F8
		::System::Single _progressAnimCurveReverseTime; // 0x308
		::System::Single _progressAnimCurveFadeOutTime; // 0x30C
		::System::Single _progressAnimStartTime; // 0x310
		::System::Single _timeProgressFrom; // 0x314
		::System::Single _timeProgressTo; // 0x318
		::MoleMole::UIMainCityClockWidgetController_ProgressAnimType _timeProgressAnimType; // 0x31C
		::MoleMole::UIMainCityClockWidgetController_RefreshReq _refreshReq; // 0x320
		::System::Boolean _needCorrectAnim; // 0x32C
		::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>* _animElements; // 0x330
		::Class_1_2CD6915EC12D64B9* _animResetHelper; // 0x338
		::System::Threading::CancellationTokenSource* m_storyEndSource; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBtnInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GET_ISBTNINTERACTABLE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean GetBtnInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETBTNINTERACTABLE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnAfterParentShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONAFTERPARENTSHOW_OFFSET))(this);
		}

		::System::Void SetConsoleActive(::System::Boolean active, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active, force);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid SetClockStoryEnd()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETCLOCKSTORYEND_OFFSET))(this);
		}

		::System::Void RefreshTime(::System::DayOfWeek dayOfWeek, ::System::Int32 hours, ::System::Int32 minutes)
		{
			return ((::System::Void(*)(::PVOID, ::System::DayOfWeek, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHTIME_OFFSET))(this, dayOfWeek, hours, minutes);
		}

		::System::Void TryRefreshTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TRYREFRESHTIME_OFFSET))(this);
		}

		::System::Void DoRefreshTime(::System::DayOfWeek dayOfWeek, ::System::Int32 hours, ::System::Int32 minutes)
		{
			return ((::System::Void(*)(::PVOID, ::System::DayOfWeek, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_DOREFRESHTIME_OFFSET))(this, dayOfWeek, hours, minutes);
		}

		::System::Boolean RefreshStage(::System::Int32 nextStage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHSTAGE_OFFSET))(this, nextStage);
		}

		::System::Void RefreshWeekDay(::System::Int32 lastDayOfWeek)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHWEEKDAY_OFFSET))(this, lastDayOfWeek);
		}

		::System::Void TickProgressAnim(::System::Boolean finished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TICKPROGRESSANIM_OFFSET))(this, finished);
		}

		::UnityEngine::AnimationCurve* GetProgressAnimCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETPROGRESSANIMCURVE_OFFSET))(this);
		}

		::System::Void ShowStageIcon(::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_7B15B3118FE590CD_23_Class_2_16AC50F20374540A_1*>*>* icons, ::System::Int32 stage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_7B15B3118FE590CD_23_Class_2_16AC50F20374540A_1*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SHOWSTAGEICON_OFFSET))(this, icons, stage);
		}

		::Class_2_7B15B3118FE590CD_23_Class_2_16AC50F20374540A_1* GetStageIcon(::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_7B15B3118FE590CD_23_Class_2_16AC50F20374540A_1*>*>* icons, ::System::Int32 stage)
		{
			return ((::Class_2_7B15B3118FE590CD_23_Class_2_16AC50F20374540A_1*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_7B15B3118FE590CD_23_Class_2_16AC50F20374540A_1*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETSTAGEICON_OFFSET))(this, icons, stage);
		}

		::System::Single GetProgressAnimLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETPROGRESSANIMLENGTH_OFFSET))(this);
		}

		::System::Void CorrectAnimElems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_CORRECTANIMELEMS_OFFSET))(this);
		}

		::System::Void SetDateKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETDATEKEY_OFFSET))(this, key);
		}

		::System::Void SetFadeoutDateKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETFADEOUTDATEKEY_OFFSET))(this, key);
		}

		::System::Void TryPopTimeWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TRYPOPTIMEWINDOW_OFFSET))(this);
		}

		::System::Void OnUnlock(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUNLOCK_OFFSET))(this, args);
		}

		::System::Void OnLocalAvatarChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONLOCALAVATARCHANGE_OFFSET))(this, args);
		}

		::System::Void LoadAvatarImage(::System::Int32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_LOADAVATARIMAGE_OFFSET))(this, avatarId);
		}

		::System::Void _OnUIInit_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_1_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__29_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_2_OFFSET))(this);
		}

		static ::System::Single _DoRefreshTime_g__GetTimeProgress_43_0(::System::Single inHours, ::System::Single inMinutes)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__DOREFRESHTIME_G__GETTIMEPROGRESS_43_0_OFFSET))(inHours, inMinutes);
		}

		::System::Void _RefreshStage_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__REFRESHSTAGE_B__44_0_OFFSET))(this);
		}

		::System::Void _TickProgressAnim_g__SetArrow_46_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__TICKPROGRESSANIM_G__SETARROW_46_0_OFFSET))(this, progress);
		}

		::System::Void __base_OnAfterParentShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONAFTERPARENTSHOW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
