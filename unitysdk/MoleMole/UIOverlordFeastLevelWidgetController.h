#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIOverlordFeastLevelWidgetController_LevelIconState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7085AB20EBA3F193;
namespace MoleMole { class MonoUIOverlordFeastLevelConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOPLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x12E06C70)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOREFRESHVIEWWITHLEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0x12E06960)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOREFRESHVIEWWITHOUTLEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0x12E06120)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETLEVELICONSTATE_OFFSET UNITYSDK_OFFSET(0x12E06F60)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETNUMIMGPATH_OFFSET UNITYSDK_OFFSET(0x12E06FC0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETREMAPPEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x12E07280)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E05E00)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x12E05F10)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E05E90)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E05D00)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E05D90)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x12E06A60)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12E06060)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x12E071C0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E07300)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__DOREFRESHVIEWWITHOUTLEVELUPGRADE_B__9_0_OFFSET UNITYSDK_OFFSET(0x12E07360)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__DOREFRESHVIEWWITHOUTLEVELUPGRADE_G__GETRAWIMAGEPATH_9_1_OFFSET UNITYSDK_OFFSET(0x12E070F0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E073C0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x12E07450)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E07460)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E074F0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E07580)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastLevelWidgetController_TypeDefinitionIndex = 81863;

	class UIOverlordFeastLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7085AB20EBA3F193* _view; // 0x2B8
		::MoleMole::MonoUIOverlordFeastLevelConfig* _config; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 curLevel, ::System::Single curProgress, ::System::Int32 prvLevel, ::System::Single prvProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, curLevel, curProgress, prvLevel, prvProgress);
		}

		::System::Void PlayProgressAnim(::System::Single prvProgress, ::System::Single curProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET))(this, prvProgress, curProgress);
		}

		::System::Void DoRefreshViewWithoutLevelUpgrade(::System::Int32 level, ::System::Single prvProgress, ::System::Single curProgress, ::System::Boolean playAnim, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOREFRESHVIEWWITHOUTLEVELUPGRADE_OFFSET))(this, level, prvProgress, curProgress, playAnim, onFinish);
		}

		::System::Void DoRefreshViewWithLevelUpgrade(::System::Int32 curLevel, ::System::Single curProgress, ::System::Int32 prvLevel, ::System::Single prvProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOREFRESHVIEWWITHLEVELUPGRADE_OFFSET))(this, curLevel, curProgress, prvLevel, prvProgress);
		}

		::System::Single GetRemappedProgress(::System::Single progressVal)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETREMAPPEDPROGRESS_OFFSET))(this, progressVal);
		}

		::MoleMole::UIOverlordFeastLevelWidgetController_LevelIconState GetLevelIconState(::System::Int32 level)
		{
			return ((::MoleMole::UIOverlordFeastLevelWidgetController_LevelIconState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETLEVELICONSTATE_OFFSET))(this, level);
		}

		::System::String* GetNumImgPath(::MoleMole::UIOverlordFeastLevelWidgetController_LevelIconState state, ::System::Int32 num)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIOverlordFeastLevelWidgetController_LevelIconState, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETNUMIMGPATH_OFFSET))(this, state, num);
		}

		::System::Void DoPlayProgressAnim(::System::Single prvProgress, ::System::Single curProgress, ::System::Single duration, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOPLAYPROGRESSANIM_OFFSET))(this, prvProgress, curProgress, duration, onFinish);
		}

		::System::Void SetProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, progress);
		}

		::System::Void _DoRefreshViewWithoutLevelUpgrade_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__DOREFRESHVIEWWITHOUTLEVELUPGRADE_B__9_0_OFFSET))(this);
		}

		static ::System::String* _DoRefreshViewWithoutLevelUpgrade_g__GetRawImagePath_9_1(::System::Int32 num)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__DOREFRESHVIEWWITHOUTLEVELUPGRADE_G__GETRAWIMAGEPATH_9_1_OFFSET))(num);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
