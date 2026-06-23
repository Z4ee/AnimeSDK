#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MoleMole/UIHollowResultPageController_RewardOverflowTipsState.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_29;
class Class_1_0D6706375CDAAE8C;
class Class_1_43BD383C98B4C0C5_36;
class Class_1_927FD65E44A20102;
class Class_1_C376DB68B1C74261;
class Class_2_03F4D9B3111E6159;
class Class_2_1A3197598F874EB7;
class Class_2_208CC9941471731A_840_Class_1_0B03404B32AC1242;
class Class_2_79F6D62CE30E3F8E_91;
class Class_3_5011144206928F3A;
class Class_3_6EF456A21AE85EEC_44;
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

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ADDSHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x16BCC2C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x16BCB440)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_BUILDCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x16BCD370)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CALMISSIONRESULTTYPEV2_OFFSET UNITYSDK_OFFSET(0x16BCD830)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CALPREVYOROZUYALV_OFFSET UNITYSDK_OFFSET(0x16BD1A50)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_DOSHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x16BCDED0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_EXITHOLLOW_OFFSET UNITYSDK_OFFSET(0x16BD5A90)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_FINDLIKEAVATARID_OFFSET UNITYSDK_OFFSET(0x16BD5420)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETMEDALNUM_OFFSET UNITYSDK_OFFSET(0x16BC9CF0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETMISSIONRESULT_OFFSET UNITYSDK_OFFSET(0x16BC6EB0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETSOCIALHDDQUESTID_OFFSET UNITYSDK_OFFSET(0x16BC8C50)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETTARGETNUMBYCONDITIONID_OFFSET UNITYSDK_OFFSET(0x16BD5830)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETTVSAFEZONENORMALIZED_OFFSET UNITYSDK_OFFSET(0x16BCD3E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x16BC6F60)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_ISABYSS_OFFSET UNITYSDK_OFFSET(0x16BC7000)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_ISARPEGGIO_OFFSET UNITYSDK_OFFSET(0x16BC70E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16BC6EA0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_HIDEMISSIONTITLE_OFFSET UNITYSDK_OFFSET(0x16BCB860)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITARPEGGIOCURSE_OFFSET UNITYSDK_OFFSET(0x16BC8430)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITCARD_OFFSET UNITYSDK_OFFSET(0x16BC8050)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITCURSE_OFFSET UNITYSDK_OFFSET(0x16BC8580)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITMEDAL_OFFSET UNITYSDK_OFFSET(0x16BD3C80)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITMISSION_OFFSET UNITYSDK_OFFSET(0x16BCF240)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITPROGRESS_OFFSET UNITYSDK_OFFSET(0x16BD1B20)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITRALLY_OFFSET UNITYSDK_OFFSET(0x16BD2AB0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITREWARDS_OFFSET UNITYSDK_OFFSET(0x16BCF2C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITROLE_OFFSET UNITYSDK_OFFSET(0x16BD4AE0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_INITSTATE_OFFSET UNITYSDK_OFFSET(0x16BC7900)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ISLIMBOUNLOCK_OFFSET UNITYSDK_OFFSET(0x16BD5630)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONBEGINRALLYHANDLE_OFFSET UNITYSDK_OFFSET(0x16BC9C00)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONCLICKITEMBTN_OFFSET UNITYSDK_OFFSET(0x16BCE000)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BC6F70)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16BC8AD0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16BCB900)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONITEMGETTIPS_OFFSET UNITYSDK_OFFSET(0x16BD5DB0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16BC6F00)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONPROGRESSOFFSETCHANGED_OFFSET UNITYSDK_OFFSET(0x16BD5FA0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONSAVECARDFINISH_OFFSET UNITYSDK_OFFSET(0x16BCBB20)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16BC71C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONTIPSWIDGETCLOSE_OFFSET UNITYSDK_OFFSET(0x16BCC630)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16BCC6B0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16BCA470)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16BCA340)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_OPENCURSE_OFFSET UNITYSDK_OFFSET(0x16BD4A20)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_OPENTEAMCHANGED_OFFSET UNITYSDK_OFFSET(0x16BC9090)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHBOSSRUSHVIEW_OFFSET UNITYSDK_OFFSET(0x16BCF340)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHCHALLENGEPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x16BCD780)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHCONTROBUTEVIEW_OFFSET UNITYSDK_OFFSET(0x16BD00C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHHACKERACTIVITYVIEW_OFFSET UNITYSDK_OFFSET(0x16BD0A20)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHLEVELTXTVIEW_OFFSET UNITYSDK_OFFSET(0x16BD0E90)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16BCE290)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_RESETCURSECONTENT_OFFSET UNITYSDK_OFFSET(0x16BCD730)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_SHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x16BCC460)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x16BCC0D0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSHOWREWARDOVERFLOWTIPS_OFFSET UNITYSDK_OFFSET(0x16BD5E10)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSTOPEXPUPSOUND_OFFSET UNITYSDK_OFFSET(0x16BCD230)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATECURSEFADE_OFFSET UNITYSDK_OFFSET(0x16BCBD50)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATEHOLLOWICON_OFFSET UNITYSDK_OFFSET(0x16BCB5C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16BCBBF0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_0_OFFSET UNITYSDK_OFFSET(0x16BD7720)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_1_OFFSET UNITYSDK_OFFSET(0x16BD7FF0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_3_OFFSET UNITYSDK_OFFSET(0x16BD7FE0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_4_OFFSET UNITYSDK_OFFSET(0x16BD7ED0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_5_OFFSET UNITYSDK_OFFSET(0x16BD7FD0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD6030)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITSTATE_B__25_0_OFFSET UNITYSDK_OFFSET(0x16BD76F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITSTATE_B__25_1_OFFSET UNITYSDK_OFFSET(0x16BD7700)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONSHOW_B__19_0_OFFSET UNITYSDK_OFFSET(0x16BD63C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONSHOW_B__19_1_OFFSET UNITYSDK_OFFSET(0x16BD7250)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__ONUIOPEN_B__28_0_OFFSET UNITYSDK_OFFSET(0x16BD7710)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__REFRESHLONGFIGHTPROGRESS_OFFSET UNITYSDK_OFFSET(0x16BD2680)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYPLAYPHASEANIM_OFFSET UNITYSDK_OFFSET(0x16BCF120)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYRALLYNEXT_OFFSET UNITYSDK_OFFSET(0x16BC93F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__TRYREQUESTNEXTLAYER_OFFSET UNITYSDK_OFFSET(0x16BC9850)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BD8000)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16BD8090)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16BD8120)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16BD81B0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16BD81C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16BD81D0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16BD81E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_TypeDefinitionIndex = 57526;

	class UIHollowResultPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* MISSION_ROW; // 0x0
		::Il2CppArray<::UnityEngine::Vector3>* worldCorners; // 0x318
		::System::Boolean _isPlayingAfterLoading; // 0x320
		::Il2CppArray<::UnityEngine::Transform*>* emptyBG; // 0x328
		::Il2CppArray<::UnityEngine::UI::Image*>* roleIconList; // 0x330
		::Il2CppArray<::UnityEngine::UI::Text*>* lvList; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectForUI*>* curseEffect; // 0x340
		::MoleMole::UIHollowResultContext* context; // 0x348
		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_36*>* datas; // 0x350
		::MoleMole::UIGeneralAchievementTipsRowWidgetController* current; // 0x358
		::System::Boolean canShowAchievement; // 0x360
		::MoleMole::UIGeneralPhaseProgressWidgetController* _phaseProgressController; // 0x368
		::System::Boolean _isPlayedPhaseAnim; // 0x370
		::System::Boolean _hasLeaveDungeon; // 0x371
		::Class_2_79F6D62CE30E3F8E_91* _view; // 0x378
		::Class_2_1A3197598F874EB7* _questModel; // 0x380
		::Class_2_03F4D9B3111E6159* _itemModel; // 0x388
		::MoleMole::UIHollowChessboardResult3DModelController* _chessboard3DController; // 0x390
		::Class_1_C376DB68B1C74261* _uiAnimScriptMgr; // 0x398
		::Class_3_5011144206928F3A* _dungeonQuestFinishedInfo; // 0x3A0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultPageController_MissionRow*>* _missionItems; // 0x3A8
		::System::Int32 _missionID; // 0x3B0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* caches; // 0x3B8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* cacheQuests; // 0x3C0
		::System::Boolean isFromBack; // 0x3C8
		::System::Boolean _canClickCloseBtn; // 0x3C9
		::System::Boolean _isSend; // 0x3CA
		::System::Boolean _needDestroyMaterial; // 0x3CB
		::System::Boolean _needDestroyRallyMaterial; // 0x3CC
		::System::Boolean _isRefreshViewCalled; // 0x3CD
		::System::Single _maxProgressValue; // 0x3D0
		::System::Single _progressOffset; // 0x3D4
		::System::Single _maxControbutionProgressValue; // 0x3D8
		::System::Single _maxBossrushProgressValue; // 0x3DC
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* showData; // 0x3E0
		::System::Boolean _isBossRushCardSave; // 0x3E8
		::System::Boolean _isDestroy; // 0x3E9
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* hollowItemList; // 0x3F0
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* cardList; // 0x3F8
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* blessList; // 0x400
		::System::Collections::Generic::List_1<::MoleMole::UIHollowProgressCircleRowWidgetController*>* progressCircleCache; // 0x408
		::System::Collections::Generic::List_1<::Class_1_927FD65E44A20102*>* textures; // 0x410
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* imgs; // 0x418
		::MoleMole::UIHollowAchievementDialogWidgetController* AchievementDialog; // 0x420
		::MoleMole::UIInterKnotLevelWidgetController* _interKnotLevel; // 0x428
		::MoleMole::MissionResult _missionResult; // 0x430
		::MoleMole::UIHollowResultPageController_RewardOverflowTipsState _overflowTipsState; // 0x434
		::System::UInt32 _soundExpUpID; // 0x438

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

		::System::Void OnBeginRallyHandle(::Class_0_16E4307DCC419505_29* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ONBEGINRALLYHANDLE_OFFSET))(this, rcvMessage);
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

		::System::Void AddShowAchievement(::Class_1_43BD383C98B4C0C5_36* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_ADDSHOWACHIEVEMENT_OFFSET))(this, data);
		}

		::System::Void TryShowAchievement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_TRYSHOWACHIEVEMENT_OFFSET))(this);
		}

		::System::Void ShowAchievement(::Class_1_43BD383C98B4C0C5_36* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_SHOWACHIEVEMENT_OFFSET))(this, data);
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

		::System::Int32 FindLikeAvatarID(::System::Collections::Generic::IList_1<::Class_3_6EF456A21AE85EEC_44*>* avatarList)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_6EF456A21AE85EEC_44*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_FINDLIKEAVATARID_OFFSET))(this, avatarList);
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

		::System::Int32 GetTargetNumByConditionID(::Class_2_208CC9941471731A_840_Class_1_0B03404B32AC1242* config)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_840_Class_1_0B03404B32AC1242*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_GETTARGETNUMBYCONDITIONID_OFFSET))(this, config);
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

		::System::Void _Bind_b__74_4(::Class_0_16E4307DCC419505_29* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__BIND_B__74_4_OFFSET))(this, rsp);
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
