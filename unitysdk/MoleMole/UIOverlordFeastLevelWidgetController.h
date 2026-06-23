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

#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOPLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x14C69EE0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOREFRESHVIEWWITHLEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0x14C69BD0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_DOREFRESHVIEWWITHOUTLEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0x14C69390)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETLEVELICONSTATE_OFFSET UNITYSDK_OFFSET(0x14C6A1D0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETNUMIMGPATH_OFFSET UNITYSDK_OFFSET(0x14C6A230)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_GETREMAPPEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x14C6A530)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C69070)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14C69180)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C69100)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C68F70)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C69000)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x14C69CD0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14C692D0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x14C6A430)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6A5B0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__DOREFRESHVIEWWITHOUTLEVELUPGRADE_B__9_0_OFFSET UNITYSDK_OFFSET(0x14C6A610)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER__DOREFRESHVIEWWITHOUTLEVELUPGRADE_G__GETRAWIMAGEPATH_9_1_OFFSET UNITYSDK_OFFSET(0x14C6A360)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C6A670)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14C6A700)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C6A710)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C6A7A0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C6A830)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastLevelWidgetController_TypeDefinitionIndex = 48861;

	class UIOverlordFeastLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7085AB20EBA3F193* _view; // 0x2C0
		::MoleMole::MonoUIOverlordFeastLevelConfig* _config; // 0x2C8

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
