#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_LayerInfoData.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"

class Class_1_7A0999DD62F5BF03;
class Class_2_79AE422BA06F6D26_100;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIBossChallengeBadgeRowWidgetController; }
namespace MoleMole { class UIBossChallengeInfoWidgetController; }
namespace MoleMole { class UIBossChallengeInfoWidgetController_UIBossChallengeInfoWidgetControllerContext; }
namespace MoleMole { class UIBossChallengePageRowWidgetController; }
namespace MoleMole { class UIBossChallengeRewardDialogPopWindowController; }
namespace MoleMole { class UIBossChallengeTabBtnsWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_BOSSCHALLENGEDIRECTTOLAYER_OFFSET UNITYSDK_OFFSET(0x16D5D9D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_CLEARRANKDATATIMEHANDLE_OFFSET UNITYSDK_OFFSET(0x16D57880)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_CLOSEINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x16D5AF50)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GETACTIVEBOSSIMGANIM_OFFSET UNITYSDK_OFFSET(0x16D5D1E0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GETACTIVEBOSSIMG_OFFSET UNITYSDK_OFFSET(0x16D5D160)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GETNEARESTNEXTREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x16D5A860)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_ACTIVELAYERCTRLERLIST_OFFSET UNITYSDK_OFFSET(0x16D5D100)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x16D57AD0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16D57AC0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GODIRECTTOBOSSCHALLENGEINFO_OFFSET UNITYSDK_OFFSET(0x16D5DA40)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITENDTIMER_OFFSET UNITYSDK_OFFSET(0x16D5BDA0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITZONE_OFFSET UNITYSDK_OFFSET(0x16D59590)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ISPLAYTYPEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x16D5A2F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16D5D260)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBOSSCHALLENGEINFOWIDGETVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x16D5E300)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCLICKREWARDBTN_OFFSET UNITYSDK_OFFSET(0x16D5AA50)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCLICKSHOPBTN_OFFSET UNITYSDK_OFFSET(0x16D5A700)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D57AE0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16D5D500)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONLAYERITEMCLICK_OFFSET UNITYSDK_OFFSET(0x16D5D0A0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONMAINCITYBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16D5D3D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16D5DDB0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16D5D590)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETSUCCESS_OFFSET UNITYSDK_OFFSET(0x16D5CC50)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSELECTLAYER_OFFSET UNITYSDK_OFFSET(0x16D5B1F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16D587F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D586F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D57B70)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENHISTORYPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x16D5E650)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENORREFRESHINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x16D5AC30)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENRANKINFO_OFFSET UNITYSDK_OFFSET(0x16D57910)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_PLAYBACKTOPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x16D5E570)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_PLAYMONSTERCARDSWITCHIN_OFFSET UNITYSDK_OFFSET(0x16D5CBA0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_RECORDPAGEEXPOSE_OFFSET UNITYSDK_OFFSET(0x16D59FA0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x16D58990)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHGUIDEBTN_OFFSET UNITYSDK_OFFSET(0x16D5C510)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHMEDALANDHISTORY_OFFSET UNITYSDK_OFFSET(0x16D5B0F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x16D58C30)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHSHOPBTNSTATE_OFFSET UNITYSDK_OFFSET(0x16D5A440)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONEFORCURRENTMODE_OFFSET UNITYSDK_OFFSET(0x16D59860)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONERANK_OFFSET UNITYSDK_OFFSET(0x16D572F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONESCORE_OFFSET UNITYSDK_OFFSET(0x16D57450)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SETRANKDATATIMEHANDLE_OFFSET UNITYSDK_OFFSET(0x16D575F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SETUPREWARDBTNGROUP_OFFSET UNITYSDK_OFFSET(0x16D58240)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SHOWSTARNUMINFO_OFFSET UNITYSDK_OFFSET(0x16D5C1B0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SWITCHMODE_OFFSET UNITYSDK_OFFSET(0x16D5C8C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x16D59390)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_TRYPOPHARDUNLOCKTIP_OFFSET UNITYSDK_OFFSET(0x16D5A120)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5E8C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONCLICKSHOPBTN_B__59_0_OFFSET UNITYSDK_OFFSET(0x16D5EFB0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONOKBTNCLICK_B__83_0_OFFSET UNITYSDK_OFFSET(0x16D5F0A0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_0_OFFSET UNITYSDK_OFFSET(0x16D5EBE0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_1_OFFSET UNITYSDK_OFFSET(0x16D5ED00)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_2_OFFSET UNITYSDK_OFFSET(0x16D5EE20)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_3_OFFSET UNITYSDK_OFFSET(0x16D5EF90)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_4_OFFSET UNITYSDK_OFFSET(0x16D5EFA0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__REFRESHZONERANK_B__0_0_OFFSET UNITYSDK_OFFSET(0x16D5EA60)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D5F3D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16D5F460)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D5F470)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D5F480)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x16D5F490)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController_TypeDefinitionIndex = 49467;

	class UIBossChallengePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 RewardBtnSite = 0x0; // 0x0
		// static const ::System::Int32 ShopBtnSite = 0x1; // 0x0
		// static const ::System::String* FRAMETEXTURE_HARD_REWARD; // 0x0
		// static const ::System::String* FRAMETEXTURE_HARD_NORMAL; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_CHANGE_R_TO_L; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_CHANGE_L_TO_R; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_BM_FADE_OUT; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_BM_FADE_IN; // 0x0
		// static const ::System::String* MONSTER_CARD_SWITCH_IN; // 0x0
		// static const ::System::String* BACK_TO_PAGE_FADE_IN; // 0x0
		// static const ::System::String* SHARE_PANEL_FADE_IN; // 0x0
		// static const ::System::Int32 HardUnlockTipId = 0x1E8DE7; // 0x0
		// static const ::System::String* ShopBtnTitleKey; // 0x0
		::Struct_2_49ABC235CB23B56F _refreshRankTimerHandle; // 0x318
		::Class_2_79AE422BA06F6D26_100* _view; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageRowWidgetController*>* _normalLayerCtrlerList; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageRowWidgetController*>* _hardLayerCtrlerList; // 0x338
		::System::Int32 _zoneID; // 0x340
		::System::Int32 _normalZoneID; // 0x344
		::System::Int32 _hardZoneID; // 0x348
		::Enum_3_DB663931210BBC27_38 _currentPlayType; // 0x34C
		::MoleMole::UIBossChallengeTabBtnsWidgetController* _tabBtnsCtrler; // 0x350
		::System::Boolean _tabBtnsVisible; // 0x358
		::MoleMole::UIBossChallengePageController_LayerInfoData _selectedLayer; // 0x35C
		::MoleMole::UIBossChallengePageController_LayerInfoData _lastNormalLayer; // 0x364
		::MoleMole::UIBossChallengePageController_LayerInfoData _lastHardLayer; // 0x36C
		::System::Boolean _hasNormalLayerSelection; // 0x374
		::System::Boolean _hasHardLayerSelection; // 0x375
		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageController_LayerInfoData>* _layerScrollDataList; // 0x378
		::MoleMole::UIBossChallengeInfoWidgetController* _bossChallengeInfoWidget; // 0x380
		::MoleMole::UIActivityCompRewardBtnGroupWidgetController* _rewardBtnGroup; // 0x388
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _shopBtn; // 0x390
		::System::Collections::Generic::Dictionary_2<::UnityEngine::RectTransform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*>* _loadedPortraits; // 0x398
		::UnityEngine::GameObject* _lastPortrait; // 0x3A0
		::System::Boolean _isPageAnimationPlayed; // 0x3A8
		::MoleMole::UIBossChallengeInfoWidgetController_UIBossChallengeInfoWidgetControllerContext* _bossChallengeInfoWidgetControllerContext; // 0x3B0
		::MoleMole::UIBossChallengeRewardDialogPopWindowController* _bossChallengeRewardCtrler; // 0x3B8
		::System::Boolean _isInfoWidgetVisible; // 0x3C0
		::System::Int32 _shopBtnTargetTabId; // 0x3C4
		::MoleMole::UIBossChallengeBadgeRowWidgetController* _badgeRow; // 0x3C8

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

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void InitZone(::System::Int32 zoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITZONE_OFFSET))(this, zoneID);
		}

		::System::Void TryPopHardUnlockTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_TRYPOPHARDUNLOCKTIP_OFFSET))(this);
		}

		::System::Boolean IsPlayTypeAvailable(::Enum_3_DB663931210BBC27_38 playType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DB663931210BBC27_38))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ISPLAYTYPEAVAILABLE_OFFSET))(this, playType);
		}

		::System::Void SetupRewardBtnGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SETUPREWARDBTNGROUP_OFFSET))(this);
		}

		::System::Void OnClickShopBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCLICKSHOPBTN_OFFSET))(this);
		}

		::System::Void RefreshShopBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHSHOPBTNSTATE_OFFSET))(this);
		}

		static ::System::Int64 GetNearestNextRefreshTime(::Il2CppArray<::Class_1_7A0999DD62F5BF03*>* tabs)
		{
			return ((::System::Int64(*)(::Il2CppArray<::Class_1_7A0999DD62F5BF03*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GETNEARESTNEXTREFRESHTIME_OFFSET))(tabs);
		}

		::System::Void OnClickRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCLICKREWARDBTN_OFFSET))(this);
		}

		::System::Void OpenOrRefreshInfoWidget(::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENORREFRESHINFOWIDGET_OFFSET))(this, layerIndex);
		}

		::System::Void CloseInfoWidget(::System::Boolean refreshMedalAndHistory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_CLOSEINFOWIDGET_OFFSET))(this, refreshMedalAndHistory);
		}

		::System::Void RefreshZoneForCurrentMode(::System::Boolean withTabAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONEFORCURRENTMODE_OFFSET))(this, withTabAni);
		}

		::System::Void SwitchMode(::Enum_3_DB663931210BBC27_38 target)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_38))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SWITCHMODE_OFFSET))(this, target);
		}

		::System::Void PlayMonsterCardSwitchIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_PLAYMONSTERCARDSWITCHIN_OFFSET))(this);
		}

		::System::Void RecordPageExpose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_RECORDPAGEEXPOSE_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageRowWidgetController*>* get_ActiveLayerCtrlerList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageRowWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_ACTIVELAYERCTRLERLIST_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetActiveBossImg()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GETACTIVEBOSSIMG_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* GetActiveBossImgAnim()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GETACTIVEBOSSIMGANIM_OFFSET))(this);
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

		::System::Void PlayBackToPageFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_PLAYBACKTOPAGEFADEIN_OFFSET))(this);
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

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__48_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_0_OFFSET))(this, reference);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__48_1(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_1_OFFSET))(this, reference);
		}

		::System::Void _OnUIInit_b__48_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__48_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_3_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__48_4(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__48_4_OFFSET))(this, args);
		}

		::System::Void _OnClickShopBtn_b__59_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONCLICKSHOPBTN_B__59_0_OFFSET))(this);
		}

		::System::Void _OnOkBtnClick_b__83_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONOKBTNCLICK_B__83_0_OFFSET))(this);
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

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
