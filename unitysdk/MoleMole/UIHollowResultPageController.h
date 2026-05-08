#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MoleMole/UIHollowResultPageController_RewardOverflowTipsState.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_11;
class Class_1_0D6706375CDAAE8C;
class Class_1_43BD383C98B4C0C5_29;
class Class_1_927FD65E44A20102;
class Class_1_C376DB68B1C74261;
class Class_2_1A3197598F874EB7;
class Class_2_208CC9941471731A_948_Class_1_8D1C9386EB13F463;
class Class_2_79F6D62CE30E3F8E_89;
class Class_2_9D9172C07F82DDAE;
class Class_3_6EF456A21AE85EEC_53;
class Class_3_AE02BC8285203464_6;
namespace MoleMole { class MonoEffectForUI; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralAchievementTipsRowWidgetController; }
namespace MoleMole { class UIGeneralPhaseProgressWidgetController; }
namespace MoleMole { class UIHollowAchievementDialogWidgetController; }
namespace MoleMole { class UIHollowChessboardResult3DModelController; }
namespace MoleMole { class UIHollowProgressCircleRowWidgetController; }
namespace MoleMole { class UIHollowResultContext; }
namespace MoleMole { class UIHollowResultPageController_MissionRow; }
namespace MoleMole { class UIInterKnotLevelWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ADDSHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x15CDEAC0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x15CDDC80)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_BUILDCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x15CDFB20)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CALMISSIONRESULTTYPEV2_OFFSET UNITYSDK_OFFSET(0x15CDFFE0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CALPREVYOROZUYALV_OFFSET UNITYSDK_OFFSET(0x15CE4190)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_DOSHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x15CE0680)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_EXITHOLLOW_OFFSET UNITYSDK_OFFSET(0x15CE81E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_FINDLIKEAVATARID_OFFSET UNITYSDK_OFFSET(0x15CE7B70)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETMEDALNUM_OFFSET UNITYSDK_OFFSET(0x15CDC530)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETMISSIONRESULT_OFFSET UNITYSDK_OFFSET(0x15CD9740)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETSOCIALHDDQUESTID_OFFSET UNITYSDK_OFFSET(0x15CDB4E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETTARGETNUMBYCONDITIONID_OFFSET UNITYSDK_OFFSET(0x15CE7F80)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETTVSAFEZONENORMALIZED_OFFSET UNITYSDK_OFFSET(0x15CDFB90)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x15CD97F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_ISABYSS_OFFSET UNITYSDK_OFFSET(0x15CD9890)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_ISARPEGGIO_OFFSET UNITYSDK_OFFSET(0x15CD9970)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15CD9730)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_HIDEMISSIONTITLE_OFFSET UNITYSDK_OFFSET(0x15CDE0A0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITARPEGGIOCURSE_OFFSET UNITYSDK_OFFSET(0x15CDACC0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITCARD_OFFSET UNITYSDK_OFFSET(0x15CDA8E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITCURSE_OFFSET UNITYSDK_OFFSET(0x15CDAE10)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITMEDAL_OFFSET UNITYSDK_OFFSET(0x15CE63D0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITMISSION_OFFSET UNITYSDK_OFFSET(0x15CE1990)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITPROGRESS_OFFSET UNITYSDK_OFFSET(0x15CE4260)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITRALLY_OFFSET UNITYSDK_OFFSET(0x15CE5200)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITREWARDS_OFFSET UNITYSDK_OFFSET(0x15CE1A10)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITROLE_OFFSET UNITYSDK_OFFSET(0x15CE7220)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITSTATE_OFFSET UNITYSDK_OFFSET(0x15CDA190)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ISLIMBOUNLOCK_OFFSET UNITYSDK_OFFSET(0x15CE7D80)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONBEGINRALLYHANDLE_OFFSET UNITYSDK_OFFSET(0x15CDC440)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONCLICKITEMBTN_OFFSET UNITYSDK_OFFSET(0x15CE07B0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15CD9800)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15CDB360)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15CDE140)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONITEMGETTIPS_OFFSET UNITYSDK_OFFSET(0x15CE8500)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15CD9790)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONPROGRESSOFFSETCHANGED_OFFSET UNITYSDK_OFFSET(0x15CE86F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONSAVECARDFINISH_OFFSET UNITYSDK_OFFSET(0x15CDE320)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15CD9A50)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONTIPSWIDGETCLOSE_OFFSET UNITYSDK_OFFSET(0x15CDEDE0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15CDEE60)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15CDCCB0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15CDCB80)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_OPENCURSE_OFFSET UNITYSDK_OFFSET(0x15CE7160)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_OPENTEAMCHANGED_OFFSET UNITYSDK_OFFSET(0x15CDB920)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHBOSSRUSHVIEW_OFFSET UNITYSDK_OFFSET(0x15CE1A90)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHCHALLENGEPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x15CDFF30)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHCONTROBUTEVIEW_OFFSET UNITYSDK_OFFSET(0x15CE2810)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHHACKERACTIVITYVIEW_OFFSET UNITYSDK_OFFSET(0x15CE3170)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHLEVELTXTVIEW_OFFSET UNITYSDK_OFFSET(0x15CE35E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15CE09F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_RESETCURSECONTENT_OFFSET UNITYSDK_OFFSET(0x15CDFEE0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_SHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x15CDEC60)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x15CDE8D0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSHOWREWARDOVERFLOWTIPS_OFFSET UNITYSDK_OFFSET(0x15CE8560)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSTOPEXPUPSOUND_OFFSET UNITYSDK_OFFSET(0x15CDF9E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATECURSEFADE_OFFSET UNITYSDK_OFFSET(0x15CDE550)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATEHOLLOWICON_OFFSET UNITYSDK_OFFSET(0x15CDDE00)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15CDE3F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_0_OFFSET UNITYSDK_OFFSET(0x15CE9E40)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_1_OFFSET UNITYSDK_OFFSET(0x15CEA710)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_3_OFFSET UNITYSDK_OFFSET(0x15CEA700)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_4_OFFSET UNITYSDK_OFFSET(0x15CEA5F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_5_OFFSET UNITYSDK_OFFSET(0x15CEA6F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE8780)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITSTATE_B__25_0_OFFSET UNITYSDK_OFFSET(0x15CE9E10)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITSTATE_B__25_1_OFFSET UNITYSDK_OFFSET(0x15CE9E20)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONSHOW_B__19_0_OFFSET UNITYSDK_OFFSET(0x15CE8B20)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONSHOW_B__19_1_OFFSET UNITYSDK_OFFSET(0x15CE99C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONUIOPEN_B__28_0_OFFSET UNITYSDK_OFFSET(0x15CE9E30)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__REFRESHLONGFIGHTPROGRESS_OFFSET UNITYSDK_OFFSET(0x15CE4DD0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYPLAYPHASEANIM_OFFSET UNITYSDK_OFFSET(0x15CE1870)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYRALLYNEXT_OFFSET UNITYSDK_OFFSET(0x15CDBC30)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYREQUESTNEXTLAYER_OFFSET UNITYSDK_OFFSET(0x15CDC090)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15CEA720)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15CEA7B0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15CEA840)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15CEA8D0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15CEA8E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15CEA8F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15CEA900)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_TypeDefinitionIndex = 80782;

	class UIHollowResultPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* MISSION_ROW; // 0x0
		::Il2CppArray<::UnityEngine::Vector3>* worldCorners; // 0x310
		::System::Boolean _isPlayingAfterLoading; // 0x318
		::Il2CppArray<::UnityEngine::Transform*>* emptyBG; // 0x320
		::Il2CppArray<::UnityEngine::UI::Image*>* roleIconList; // 0x328
		::Il2CppArray<::UnityEngine::UI::Text*>* lvList; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectForUI*>* curseEffect; // 0x338
		::MoleMole::UIHollowResultContext* context; // 0x340
		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_29*>* datas; // 0x348
		::MoleMole::UIGeneralAchievementTipsRowWidgetController* current; // 0x350
		::System::Boolean canShowAchievement; // 0x358
		::MoleMole::UIGeneralPhaseProgressWidgetController* _phaseProgressController; // 0x360
		::System::Boolean _isPlayedPhaseAnim; // 0x368
		::System::Boolean _hasLeaveDungeon; // 0x369
		::Class_2_79F6D62CE30E3F8E_89* _view; // 0x370
		::Class_2_1A3197598F874EB7* _questModel; // 0x378
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x380
		::MoleMole::UIHollowChessboardResult3DModelController* _chessboard3DController; // 0x388
		::Class_1_C376DB68B1C74261* _uiAnimScriptMgr; // 0x390
		::Class_3_AE02BC8285203464_6* _dungeonQuestFinishedInfo; // 0x398
		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultPageController_MissionRow*>* _missionItems; // 0x3A0
		::System::Int32 _missionID; // 0x3A8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* caches; // 0x3B0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* cacheQuests; // 0x3B8
		::System::Boolean isFromBack; // 0x3C0
		::System::Boolean _canClickCloseBtn; // 0x3C1
		::System::Boolean _isSend; // 0x3C2
		::System::Boolean _needDestroyMaterial; // 0x3C3
		::System::Boolean _needDestroyRallyMaterial; // 0x3C4
		::System::Boolean _isRefreshViewCalled; // 0x3C5
		::System::Single _maxProgressValue; // 0x3C8
		::System::Single _progressOffset; // 0x3CC
		::System::Single _maxControbutionProgressValue; // 0x3D0
		::System::Single _maxBossrushProgressValue; // 0x3D4
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* showData; // 0x3D8
		::System::Boolean _isBossRushCardSave; // 0x3E0
		::System::Boolean _isDestroy; // 0x3E1
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* hollowItemList; // 0x3E8
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* cardList; // 0x3F0
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* blessList; // 0x3F8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowProgressCircleRowWidgetController*>* progressCircleCache; // 0x400
		::System::Collections::Generic::List_1<::Class_1_927FD65E44A20102*>* textures; // 0x408
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* imgs; // 0x410
		::MoleMole::UIHollowAchievementDialogWidgetController* AchievementDialog; // 0x418
		::MoleMole::UIInterKnotLevelWidgetController* _interKnotLevel; // 0x420
		::MoleMole::MissionResult _missionResult; // 0x428
		::MoleMole::UIHollowResultPageController_RewardOverflowTipsState _overflowTipsState; // 0x42C
		::System::UInt32 _soundExpUpID; // 0x430

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MoleMole::MissionResult GetMissionResult()
		{
			return ((::MoleMole::MissionResult(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETMISSIONRESULT_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean get_IsAbyss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_ISABYSS_OFFSET))(this);
		}

		::System::Boolean get_IsArpeggio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_ISARPEGGIO_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean GetSocialHDDQuestID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETSOCIALHDDQUESTID_OFFSET))(this);
		}

		::System::Void OpenTeamChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_OPENTEAMCHANGED_OFFSET))(this);
		}

		::System::Void _TryRallyNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYRALLYNEXT_OFFSET))(this);
		}

		::System::Void _TryRequestNextLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYREQUESTNEXTLAYER_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITSTATE_OFFSET))(this);
		}

		::System::Void OnBeginRallyHandle(::Class_0_16E4307DCC419505_11* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONBEGINRALLYHANDLE_OFFSET))(this, rcvMessage);
		}

		::System::Int32 GetMedalNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETMEDALNUM_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnSaveCardFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONSAVECARDFINISH_OFFSET))(this, args);
		}

		::System::Void UpdateHollowIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATEHOLLOWICON_OFFSET))(this);
		}

		::System::Void HideMissionTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_HIDEMISSIONTITLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void AddShowAchievement(::Class_1_43BD383C98B4C0C5_29* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ADDSHOWACHIEVEMENT_OFFSET))(this, data);
		}

		::System::Void TryShowAchievement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSHOWACHIEVEMENT_OFFSET))(this);
		}

		::System::Void ShowAchievement(::Class_1_43BD383C98B4C0C5_29* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_SHOWACHIEVEMENT_OFFSET))(this, data);
		}

		::System::Void OnTipsWidgetClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONTIPSWIDGETCLOSE_OFFSET))(this);
		}

		::System::Void UpdateCurseFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATECURSEFADE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildChessboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_BUILDCHESSBOARD_OFFSET))(this);
		}

		::UnityEngine::Rect GetTVSafeZoneNormalized()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETTVSAFEZONENORMALIZED_OFFSET))(this);
		}

		::System::Void ResetCurseContent(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_RESETCURSECONTENT_OFFSET))(this, args);
		}

		::System::Void RefreshChallengeProgressView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHCHALLENGEPROGRESSVIEW_OFFSET))(this);
		}

		::System::Void DoShowProgress(::System::Int32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_DOSHOWPROGRESS_OFFSET))(this, progress);
		}

		::MoleMole::MissionResult CalMissionResultTypeV2()
		{
			return ((::MoleMole::MissionResult(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CALMISSIONRESULTTYPEV2_OFFSET))(this);
		}

		::System::Void OnClickItemBtn(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONCLICKITEMBTN_OFFSET))(this, index);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshHackerActivityView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHHACKERACTIVITYVIEW_OFFSET))(this);
		}

		::System::Void RefreshBossRushView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHBOSSRUSHVIEW_OFFSET))(this);
		}

		::System::Void RefreshControbuteView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHCONTROBUTEVIEW_OFFSET))(this);
		}

		::System::Void RefreshLevelTxtView(::System::Int32 curLv, ::System::Int32 prvLv, ::System::Int32 remainExp, ::System::Int32 expNeededForNxtLv, ::System::Int32 prvRemainExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHLEVELTXTVIEW_OFFSET))(this, curLv, prvLv, remainExp, expNeededForNxtLv, prvRemainExp);
		}

		::System::Int32 CalPrevYorozuyaLv(::System::Int32 addedExp, ::System::Int32 remainExp, ::System::Int32 curLv, ::System::Int32& prvRemainExp)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CALPREVYOROZUYALV_OFFSET))(this, addedExp, remainExp, curLv, prvRemainExp);
		}

		::System::Void InitProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITPROGRESS_OFFSET))(this);
		}

		::System::Void _RefreshLongFightProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__REFRESHLONGFIGHTPROGRESS_OFFSET))(this);
		}

		::System::Void _TryPlayPhaseAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYPLAYPHASEANIM_OFFSET))(this);
		}

		::System::Void InitRally(::System::Int32 medalNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITRALLY_OFFSET))(this, medalNum);
		}

		::System::Void InitMedal(::System::Int32 medalNum, ::System::Boolean useSpecial)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITMEDAL_OFFSET))(this, medalNum, useSpecial);
		}

		::System::Void InitCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITCARD_OFFSET))(this);
		}

		::System::Void OpenCurse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_OPENCURSE_OFFSET))(this);
		}

		::System::Void InitArpeggioCurse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITARPEGGIOCURSE_OFFSET))(this);
		}

		::System::Void InitCurse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITCURSE_OFFSET))(this);
		}

		::System::Void InitRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITROLE_OFFSET))(this);
		}

		::System::Int32 FindLikeAvatarID(::System::Collections::Generic::IList_1<::Class_3_6EF456A21AE85EEC_53*>* avatarList)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_6EF456A21AE85EEC_53*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_FINDLIKEAVATARID_OFFSET))(this, avatarList);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* InitRewards()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITREWARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* InitMission()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITMISSION_OFFSET))(this);
		}

		::System::Boolean isLimboUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ISLIMBOUNLOCK_OFFSET))(this);
		}

		::System::Int32 GetTargetNumByConditionID(::Class_2_208CC9941471731A_948_Class_1_8D1C9386EB13F463* config)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_948_Class_1_8D1C9386EB13F463*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETTARGETNUMBYCONDITIONID_OFFSET))(this, config);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void ExitHollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_EXITHOLLOW_OFFSET))(this);
		}

		::System::Void TryStopExpUpSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSTOPEXPUPSOUND_OFFSET))(this);
		}

		::System::Void OnItemGetTips(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONITEMGETTIPS_OFFSET))(this, args);
		}

		::System::Void TryShowRewardOverflowTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSHOWREWARDOVERFLOWTIPS_OFFSET))(this);
		}

		::System::Void OnProgressOffsetChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONPROGRESSOFFSETCHANGED_OFFSET))(this);
		}

		::System::Void _OnShow_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONSHOW_B__19_0_OFFSET))(this);
		}

		::System::Void _OnShow_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONSHOW_B__19_1_OFFSET))(this);
		}

		::System::Void _InitState_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITSTATE_B__25_0_OFFSET))(this);
		}

		::System::Void _InitState_b__25_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITSTATE_B__25_1_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__28_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONUIOPEN_B__28_0_OFFSET))(this, _);
		}

		::System::Void _Bind_b__74_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_0_OFFSET))(this);
		}

		::System::Void _Bind_b__74_4(::Class_0_16E4307DCC419505_11* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_4_OFFSET))(this, rsp);
		}

		::System::Void _Bind_b__74_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_5_OFFSET))(this);
		}

		::System::Void _Bind_b__74_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_3_OFFSET))(this);
		}

		::System::Void _Bind_b__74_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
