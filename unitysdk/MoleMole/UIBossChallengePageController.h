#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_LayerInfoData.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"

class Class_2_79AE422BA06F6D26_18;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBossChallengeBadgeRowWidgetController; }
namespace MoleMole { class UIBossChallengeInfoWidgetController; }
namespace MoleMole { class UIBossChallengeInfoWidgetController_UIBossChallengeInfoWidgetControllerContext; }
namespace MoleMole { class UIBossChallengePageRowWidgetController; }
namespace MoleMole { class UIBossChallengeRewardDialogPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_BOSSCHALLENGEDIRECTTOLAYER_OFFSET UNITYSDK_OFFSET(0x142D4BC0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_CLEARRANKDATATIMEHANDLE_OFFSET UNITYSDK_OFFSET(0x142D11F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x142D1320)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x142D1310)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GODIRECTTOBOSSCHALLENGEINFO_OFFSET UNITYSDK_OFFSET(0x142D4C30)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITENDTIMER_OFFSET UNITYSDK_OFFSET(0x142D29C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITZONE_OFFSET UNITYSDK_OFFSET(0x142D24D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x142D40F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBOSSCHALLENGEINFOWIDGETVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x142D5820)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x142D1330)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x142D44C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONLAYERITEMCLICK_OFFSET UNITYSDK_OFFSET(0x142D2960)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONMAINCITYBTNCLICK_OFFSET UNITYSDK_OFFSET(0x142D4390)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x142D5200)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETBTNCLICK_OFFSET UNITYSDK_OFFSET(0x142D47D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETSUCCESS_OFFSET UNITYSDK_OFFSET(0x142D3460)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSELECTLAYER_OFFSET UNITYSDK_OFFSET(0x142D37E0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x142D1BD0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x142D1AD0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x142D13C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENHISTORYPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x142D5970)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENRANKINFO_OFFSET UNITYSDK_OFFSET(0x142D1280)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x142D1D50)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHGUIDEBTN_OFFSET UNITYSDK_OFFSET(0x142D30C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHMEDALANDHISTORY_OFFSET UNITYSDK_OFFSET(0x142D4290)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x142D2130)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONERANK_OFFSET UNITYSDK_OFFSET(0x142D0C20)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONESCORE_OFFSET UNITYSDK_OFFSET(0x142D0D80)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SETRANKDATATIMEHANDLE_OFFSET UNITYSDK_OFFSET(0x142D0F60)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SHOWSTARNUMINFO_OFFSET UNITYSDK_OFFSET(0x142D2DC0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x142D5B70)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONOKBTNCLICK_B__44_0_OFFSET UNITYSDK_OFFSET(0x142D6230)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__30_0_OFFSET UNITYSDK_OFFSET(0x142D5E60)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__30_1_OFFSET UNITYSDK_OFFSET(0x142D5F80)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__30_2_OFFSET UNITYSDK_OFFSET(0x142D60F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__30_3_OFFSET UNITYSDK_OFFSET(0x142D6220)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__REFRESHZONERANK_B__0_0_OFFSET UNITYSDK_OFFSET(0x142D5CB0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x142D6560)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x142D65F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x142D6600)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x142D6610)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController_TypeDefinitionIndex = 56293;

	class UIBossChallengePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* BOSS_CHALLENGE_PAGE_CHANGE_R_TO_L; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_CHANGE_L_TO_R; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_BM_FADE_OUT; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_BM_FADE_IN; // 0x0
		::Struct_2_49ABC235CB23B56F _refreshRankTimerHandle; // 0x310
		::Class_2_79AE422BA06F6D26_18* _view; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageRowWidgetController*>* _layerCtrlerList; // 0x328
		::System::Int32 _zoneID; // 0x330
		::MoleMole::UIBossChallengePageController_LayerInfoData _selectedLayer; // 0x334
		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageController_LayerInfoData>* _layerScrollDataList; // 0x340
		::MoleMole::UIBossChallengeInfoWidgetController* _bossChallengeInfoWidget; // 0x348
		::MoleMole::UIGeneralRewardListBtnWidgetController* _rewardBtnCtrler; // 0x350
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _loadedPortrait; // 0x358
		::UnityEngine::GameObject* _lastPortrait; // 0x360
		::System::Boolean _isPageAnimationPlayed; // 0x368
		::MoleMole::UIGeneralRewardListBtnWidgetController* _rewardListBtnWidgetCtrler; // 0x370
		::MoleMole::UIBossChallengeInfoWidgetController_UIBossChallengeInfoWidgetControllerContext* _bossChallengeInfoWidgetControllerContext; // 0x378
		::MoleMole::UIBossChallengeRewardDialogPopWindowController* _bossChallengeRewardCtrler; // 0x380
		::MoleMole::UIBossChallengeBadgeRowWidgetController* _badgeRow; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshZoneRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONERANK_OFFSET))(this);
		}

		::System::Void RefreshZoneScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONESCORE_OFFSET))(this);
		}

		::System::Void SetRankDataTimeHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SETRANKDATATIMEHANDLE_OFFSET))(this);
		}

		::System::Void ClearRankDataTimeHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_CLEARRANKDATATIMEHANDLE_OFFSET))(this);
		}

		::System::Void OpenRankInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENRANKINFO_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitZone(::System::Int32 zoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITZONE_OFFSET))(this, zoneID);
		}

		::System::Void OnResetSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETSUCCESS_OFFSET))(this);
		}

		::System::Void RefreshRewardState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHREWARDSTATE_OFFSET))(this);
		}

		::System::Void OnLayerItemClick(::MoleMole::UIBossChallengePageRowWidgetController* clickedLayerItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONLAYERITEMCLICK_OFFSET))(this, clickedLayerItem);
		}

		::System::Void OnSelectLayer(::MoleMole::UIBossChallengePageController_LayerInfoData layerData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSELECTLAYER_OFFSET))(this, layerData);
		}

		::System::Void OnBackBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBACKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMainCityBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONMAINCITYBTNCLICK_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnResetBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETBTNCLICK_OFFSET))(this);
		}

		::System::Void BossChallengeDirectToLayer(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_BOSSCHALLENGEDIRECTTOLAYER_OFFSET))(this, args);
		}

		::System::Void GoDirectToBossChallengeInfo(::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GODIRECTTOBOSSCHALLENGEINFO_OFFSET))(this, layerIndex);
		}

		::System::Void OnOkBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void InitEndTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITENDTIMER_OFFSET))(this);
		}

		::System::Void ShowStarNumInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SHOWSTARNUMINFO_OFFSET))(this);
		}

		::System::Void RefreshButtonText(::System::Boolean bossChallengeInfoWidgetVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHBUTTONTEXT_OFFSET))(this, bossChallengeInfoWidgetVisible);
		}

		::System::Void OnBossChallengeInfoWidgetVisibleChanged(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBOSSCHALLENGEINFOWIDGETVISIBLECHANGED_OFFSET))(this, isVisible);
		}

		::System::Void RefreshMedalAndHistory(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHMEDALANDHISTORY_OFFSET))(this, show);
		}

		::System::Void OpenHistoryPopWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENHISTORYPOPWINDOW_OFFSET))(this);
		}

		::System::Void RefreshGuideBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHGUIDEBTN_OFFSET))(this);
		}

		::System::Void _RefreshZoneRank_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__REFRESHZONERANK_B__0_0_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__30_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__30_0_OFFSET))(this, reference);
		}

		::System::Void _OnUIInit_b__30_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__30_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__30_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__30_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__30_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__30_3_OFFSET))(this, args);
		}

		::System::Void _OnOkBtnClick_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONOKBTNCLICK_B__44_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
