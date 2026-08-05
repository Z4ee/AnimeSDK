#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UICoopMatchPageController_LevelTabStatus.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_88517BC3CFAA5DC5;
class Class_2_C66E4DE78E6562C8;
class Class_2_CA81EEAA0E1B3609;
class Class_3_16D3ED995FE4ECF4;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGrandMarcelAdventureTipsRowWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CHECKTABCLICKWITHTIPS_OFFSET UNITYSDK_OFFSET(0x192C3420)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CHECKUNLOCKPOP_OFFSET UNITYSDK_OFFSET(0x192C49F0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DELTABLEVELNEW_OFFSET UNITYSDK_OFFSET(0x192C3480)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABANIM_OFFSET UNITYSDK_OFFSET(0x192C3B20)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABINDEX_OFFSET UNITYSDK_OFFSET(0x192C3030)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABTYPE_OFFSET UNITYSDK_OFFSET(0x192C2D30)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x192C1B60)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192C1B70)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_INITPLATFORMSETTING_OFFSET UNITYSDK_OFFSET(0x192C27E0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x192C3080)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192C1BE0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONGAMEROOMCHANGEDETAILHANDLE_OFFSET UNITYSDK_OFFSET(0x192C41A0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x192C4930)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x192C5420)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192C1C80)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192C46E0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PLAYTABFADEINANIM_OFFSET UNITYSDK_OFFSET(0x192C3E30)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PLAYTABFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x192C3C60)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_REFRESHTABANIM_OFFSET UNITYSDK_OFFSET(0x192C34E0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x192C2D80)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x192C47C0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0x192C4400)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_STOPSWITCHANIM_OFFSET UNITYSDK_OFFSET(0x192C39F0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_STOPTABANIM_OFFSET UNITYSDK_OFFSET(0x192C4000)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_TIPENDHANDLE_OFFSET UNITYSDK_OFFSET(0x192C4580)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x192C5700)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192C54B0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONPOSTPAGESHOWED_B__32_0_OFFSET UNITYSDK_OFFSET(0x192C6210)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x192C5920)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0x192C5960)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIOPEN_B__31_0_OFFSET UNITYSDK_OFFSET(0x192C60C0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIOPEN_B__31_1_OFFSET UNITYSDK_OFFSET(0x192C61E0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192C6220)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x192C62C0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x192C62D0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192C6390)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192C63A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchPageController_TypeDefinitionIndex = 88186;

	class UICoopMatchPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MoleMole::UICoopMatchPageController_LevelTabStatus, ::Il2CppArray<::System::String*>*>** StaticGet__tabAnimNameDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::MoleMole::UICoopMatchPageController_LevelTabStatus, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopMatchPageController_TypeDefinitionIndex)->GetStaticField(0x51A80);
		}
		::System::Collections::Generic::Dictionary_2<::MoleMole::UICoopMatchPageController_LevelTabStatus, ::MoleMole::UIGeneralNewHintWidgetController*>* _tabNewHintCtrlDict; // 0x318
		::MoleMole::UICoopMatchPageController_LevelTabStatus _activityBattleSubType; // 0x320
		::UnityEngine::Coroutine* _switchAnimCoroutineFadeOut; // 0x328
		::UnityEngine::Coroutine* _switchAnimCoroutineFadeIn; // 0x330
		::System::Int32 _switchAnimIndex; // 0x338
		::MoleMole::UIGrandMarcelAdventureTipsRowWidgetController* tipCtrl; // 0x340
		::System::Collections::Generic::List_1<::System::String*>* _waitTipList; // 0x348
		::Class_1_48D56DACBE4271BC* propertySync; // 0x350
		::Class_2_CA81EEAA0E1B3609* _coopPanelModel; // 0x358
		::Class_2_C66E4DE78E6562C8* _coopPlayModel; // 0x360
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _rewardBtn; // 0x368
		::Class_3_16D3ED995FE4ECF4* _view; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_88517BC3CFAA5DC5* get__viewModel()
		{
			return ((::Class_2_88517BC3CFAA5DC5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::UICoopMatchPageController_LevelTabStatus GetTabType(::System::Int32 tabIndex)
		{
			return ((::MoleMole::UICoopMatchPageController_LevelTabStatus(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABTYPE_OFFSET))(this, tabIndex);
		}

		::System::Int32 GetTabIndex(::MoleMole::UICoopMatchPageController_LevelTabStatus activityBattleSubType)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABINDEX_OFFSET))(this, activityBattleSubType);
		}

		::System::Void OnClickTab(::MoleMole::UICoopMatchPageController_LevelTabStatus activityBattleSubType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, activityBattleSubType);
		}

		::System::Boolean CheckTabClickWithTips(::MoleMole::UICoopMatchPageController_LevelTabStatus subType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CHECKTABCLICKWITHTIPS_OFFSET))(this, subType);
		}

		::System::Void SelectTab(::MoleMole::UICoopMatchPageController_LevelTabStatus activityBattleSubType, ::System::Boolean withAni, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SELECTTAB_OFFSET))(this, activityBattleSubType, withAni, questID);
		}

		::System::Void DelTabLevelNew(::MoleMole::UICoopMatchPageController_LevelTabStatus subType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DELTABLEVELNEW_OFFSET))(this, subType);
		}

		::System::Void RefreshTabAnim(::MoleMole::UICoopMatchPageController_LevelTabStatus oldSubType, ::MoleMole::UICoopMatchPageController_LevelTabStatus newSubType, ::System::Boolean withAni, ::System::Action* fadeOutCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_REFRESHTABANIM_OFFSET))(this, oldSubType, newSubType, withAni, fadeOutCallBack);
		}

		::System::Void PlayTabFadeInAnim(::MoleMole::UICoopMatchPageController_LevelTabStatus subType, ::System::Action* finishCb)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PLAYTABFADEINANIM_OFFSET))(this, subType, finishCb);
		}

		::System::Void PlayTabFadeOutAnim(::MoleMole::UICoopMatchPageController_LevelTabStatus subType, ::System::Action* finishCb)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PLAYTABFADEOUTANIM_OFFSET))(this, subType, finishCb);
		}

		::System::Void StopSwitchAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_STOPSWITCHANIM_OFFSET))(this);
		}

		::System::Void StopTabAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_STOPTABANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetTabAnim(::MoleMole::UICoopMatchPageController_LevelTabStatus subType)
		{
			return ((::UnityEngine::Animation*(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABANIM_OFFSET))(this, subType);
		}

		::System::Void OnGameRoomChangeDetailHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONGAMEROOMCHANGEDETAILHANDLE_OFFSET))(this, obj);
		}

		::System::Void ShowTip(::System::String* mes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SHOWTIP_OFFSET))(this, mes);
		}

		::System::Void TipEndHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_TIPENDHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void CheckUnlockPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CHECKUNLOCKPOP_OFFSET))(this);
		}

		::System::Void InitPlatformSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_INITPLATFORMSETTING_OFFSET))(this);
		}

		::System::Void SetPlatformBtnShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIINIT_B__6_1_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIOPEN_B__31_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__31_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIOPEN_B__31_1_OFFSET))(this);
		}

		::System::Void _OnPostPageShowed_b__32_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONPOSTPAGESHOWED_B__32_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
