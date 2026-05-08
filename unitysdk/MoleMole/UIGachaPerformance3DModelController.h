#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_CameraInfo.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaSkipAllType.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
class Class_1_C376DB68B1C74261;
class Class_2_208CC9941471731A_332;
class Class_2_5F64140FAB2210F3;
class Class_2_60638234271CCDB8_144;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaPerformance3DModelController_CharacterColorCorrectionParams; }
namespace MoleMole { class UIGachaStage3DModelControllerBase; }
namespace MoleMole::Config { class ConfigGachaPerformMisc; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ALLOWTONEXTITEM_OFFSET UNITYSDK_OFFSET(0x157F80A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DISACTIVEALLSHOWLIGHTS_OFFSET UNITYSDK_OFFSET(0x157F8E00)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DOFIREEFFECT_OFFSET UNITYSDK_OFFSET(0x15800560)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DOPLAYCLOSEUPTL_OFFSET UNITYSDK_OFFSET(0x157FD4D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FADEOUTEFFECT_OFFSET UNITYSDK_OFFSET(0x15801590)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRECAMERAEFFECT_OFFSET UNITYSDK_OFFSET(0x15801180)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRESTAGEEFFECT_OFFSET UNITYSDK_OFFSET(0x15800390)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRETVEFFECT_OFFSET UNITYSDK_OFFSET(0x15800250)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GETGAUSSIANBLURTILLING_OFFSET UNITYSDK_OFFSET(0x157F9090)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ANIMACHECKMODE_OFFSET UNITYSDK_OFFSET(0x157F37B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x15804120)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMROTACTIVE_OFFSET UNITYSDK_OFFSET(0x15803E90)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURITEMSTAGECTRLER_OFFSET UNITYSDK_OFFSET(0x15803E80)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0x157F5E30)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_END_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x157F44A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_GACHAPERFORMMISC_OFFSET UNITYSDK_OFFSET(0x157F3730)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISENDINGPERFORMING_OFFSET UNITYSDK_OFFSET(0x15804080)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISFIRSTITEMPERFORMING_OFFSET UNITYSDK_OFFSET(0x157F83D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISLASTITEMPERFORMING_OFFSET UNITYSDK_OFFSET(0x158040D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISMUTESPEEDUP_OFFSET UNITYSDK_OFFSET(0x15803EC0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISNONGACHA_OFFSET UNITYSDK_OFFSET(0x157F3CA0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_NEXTITEMPROTECTTIMER_OFFSET UNITYSDK_OFFSET(0x15803EA0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDCOUNTOFFSET_OFFSET UNITYSDK_OFFSET(0x157F8600)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDPHASECOUNT_OFFSET UNITYSDK_OFFSET(0x15803E60)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYPERFORM_OFFSET UNITYSDK_OFFSET(0x15801F00)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYSPERFORM_OFFSET UNITYSDK_OFFSET(0x15802DD0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEPLAYTEXTSHOTTIMELINE_OFFSET UNITYSDK_OFFSET(0x15803350)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLERESETGAUSSIANBLURPARAMS_OFFSET UNITYSDK_OFFSET(0x15802E10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLETVRARITYSPERFORM_OFFSET UNITYSDK_OFFSET(0x15801C30)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ISSINGLEGACHA_OFFSET UNITYSDK_OFFSET(0x157F8DB0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x157F61E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCAMSHAKEDELAYTIMEUP_OFFSET UNITYSDK_OFFSET(0x157F93F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157F3E90)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONSCREENEFFECTEND_OFFSET UNITYSDK_OFFSET(0x15803080)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONTIMESCALECHANGED_OFFSET UNITYSDK_OFFSET(0x157F9150)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x157F3F50)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157F44E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157F19D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157F38C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x157FA2E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCHARACTERLIGHTSTL_OFFSET UNITYSDK_OFFSET(0x157FE7E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCLOSEUPTL_OFFSET UNITYSDK_OFFSET(0x157FCBC0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYITEMSHAKE_OFFSET UNITYSDK_OFFSET(0x15803130)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYNONGACHACAMFOV_OFFSET UNITYSDK_OFFSET(0x157FCAF0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYPARTICLESYS_OFFSET UNITYSDK_OFFSET(0x15801480)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSCENELIGHTSTL_OFFSET UNITYSDK_OFFSET(0x157FEDB0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSHOWLIGHTSTL_OFFSET UNITYSDK_OFFSET(0x157FE860)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGEROTATESCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x158032A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x157F9CC0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEET_OFFSET UNITYSDK_OFFSET(0x157F9E50)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGE_OFFSET UNITYSDK_OFFSET(0x157F66B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0x158019D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVSCENELIGHTSTL_OFFSET UNITYSDK_OFFSET(0x157FFCF0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_QUICKPLAYOPENNINGTV_OFFSET UNITYSDK_OFFSET(0x157FB080)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_REVERTCAMINFO_OFFSET UNITYSDK_OFFSET(0x157F7F70)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x157F9FE0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATEWEAPON_OFFSET UNITYSDK_OFFSET(0x157FA620)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETRARESOUNDSCOPEVALUE_OFFSET UNITYSDK_OFFSET(0x157F8440)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETSHOWLIGHTSCOLOR_OFFSET UNITYSDK_OFFSET(0x157F8740)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETTVMATPROPERTY_OFFSET UNITYSDK_OFFSET(0x15803190)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_CAMROTACTIVE_OFFSET UNITYSDK_OFFSET(0x157F8BF0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_GACHAPERFORMMISC_OFFSET UNITYSDK_OFFSET(0x15803E70)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_NEXTITEMPROTECTTIMER_OFFSET UNITYSDK_OFFSET(0x15803EB0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SKIPALL_OFFSET UNITYSDK_OFFSET(0x157FA7C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x157F3DB0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLCAMEFFECTS_OFFSET UNITYSDK_OFFSET(0x157FBF00)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLRARITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x157FC030)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x157FC810)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLSTAGEEFFECTS_OFFSET UNITYSDK_OFFSET(0x157FC540)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPCAMERATL_OFFSET UNITYSDK_OFFSET(0x157FB920)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0x158018D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPPARTICLESYS_OFFSET UNITYSDK_OFFSET(0x15801350)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPRARITYSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x157FC670)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0x15801B00)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATENEXTITEMPROTECTTIME_OFFSET UNITYSDK_OFFSET(0x157F6070)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATENONGACHACAMFOV_OFFSET UNITYSDK_OFFSET(0x157F58D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATEROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x157F5410)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x157F4F70)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15804180)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__HANDLEPLAYTEXTSHOTTIMELINE_B__66_0_OFFSET UNITYSDK_OFFSET(0x15804700)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCAMERASHAKE_B__30_0_OFFSET UNITYSDK_OFFSET(0x15804540)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_0_OFFSET UNITYSDK_OFFSET(0x15804630)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_3_OFFSET UNITYSDK_OFFSET(0x15804620)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_4_OFFSET UNITYSDK_OFFSET(0x15804640)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYSHOWLIGHTSTL_B__40_0_OFFSET UNITYSDK_OFFSET(0x158046F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYSTAGE_B__12_1_OFFSET UNITYSDK_OFFSET(0x15804440)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15804710)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x158047A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15804860)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15804870)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15804880)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformance3DModelController_TypeDefinitionIndex = 70350;

	class UIGachaPerformance3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Single* StaticGet_StartRotateCamTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIGachaPerformance3DModelController_TypeDefinitionIndex)->GetStaticField(0xD050);
		}
		// static const ::System::Int32 SHOW_LIGHTS_NUM = 0xC; // 0x0
		// static const ::System::Int32 TO_BIND_SHOW_LIGHTS_NUM = 0x8; // 0x0
		// static const ::System::String* OPEN_TRACK; // 0x0
		// static const ::System::String* CLOSE_TRACK; // 0x0
		// static const ::System::String* GAUSSIAN_BLUR_VOLUME_TRACK; // 0x0
		::Class_2_60638234271CCDB8_144* _view; // 0x358
		::System::String* CamRotDuration; // 0x360
		::System::String* CAM_TRACK; // 0x368
		::System::String* IsAnimationKeyTriggered; // 0x370
		::System::String* IsFirstFewShotsOver; // 0x378
		::System::String* First3TvIntervalTimeScale; // 0x380
		::Class_1_C376DB68B1C74261* _player; // 0x388
		::System::Action* _onPlayEnd; // 0x390
		::System::Collections::Generic::List_1<::System::Int32>* _itemResults; // 0x398
		::System::Boolean _skipAllFromOpenning; // 0x3A0
		::System::Int32 _performedPhaseCount; // 0x3A4
		::System::Int32 _currentPerformanceId; // 0x3A8
		::System::Int32 _totalPhaseCount; // 0x3AC
		::MoleMole::Config::ConfigGachaPerformMisc* _gachaPerformMisc; // 0x3B0
		::Class_2_208CC9941471731A_332* _gachaPerformTamplate; // 0x3B8
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::MoleMole::UIGachaStage3DModelControllerBase*>* _stage3DModelCtrlers; // 0x3C0
		::MoleMole::UIGachaStage3DModelControllerBase* _curTvStageCtrler; // 0x3C8
		::MoleMole::UIGachaStage3DModelControllerBase* _lastItemStageCtrler; // 0x3D0
		::MoleMole::UIGachaStage3DModelControllerBase* _curItemStageCtrler; // 0x3D8
		::System::Boolean _camRotActive; // 0x3E0
		::System::Single _camRotOriginAngle; // 0x3E4
		::System::Single _camRotTimer; // 0x3E8
		::System::Single _camRotTimerStartOffset; // 0x3EC
		::System::Single _rarityScreenEffectTLStartOffset; // 0x3F0
		::UnityEngine::AnimationCurve* _camRotCurve; // 0x3F8
		::System::Single _camRotDuration; // 0x400
		::System::Single _camRotAngle; // 0x404
		::System::Single _triggerStageRefreshAngle; // 0x408
		::System::Boolean _stageRefreshTriggered; // 0x40C
		::UnityEngine::Vector3 _camEuler; // 0x410
		::MoleMole::Config::ConfigHollowChessboardCamera* _camConfig; // 0x420
		::Class_2_5F64140FAB2210F3* _camClip; // 0x428
		::UnityEngine::Camera* _cam; // 0x430
		::System::Single _NextItemProtectTimer_k__BackingField; // 0x438
		::System::Boolean _nextItemTriggered; // 0x43C
		::MoleMole::UIGachaPerformance3DModelController_GachaSkipAllType _skipAllType; // 0x440
		::System::Int32 _firstRaritySItemIndex; // 0x444
		::System::Boolean _isPerformanceStarted; // 0x448
		::System::Boolean _nonGachaCamFovActive; // 0x449
		::System::Single _nonGachaCamFovTimer; // 0x44C
		::UnityEngine::AnimationCurve* _nonGachaCamFovCurve; // 0x450
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _loadedTimelines; // 0x458
		::UnityEngine::Playables::PlayableDirector* _curCloseupDirector; // 0x460
		::MoleMole::UIGachaPerformance3DModelController_CameraInfo _camInfoBeforeTimeline; // 0x468
		::System::Boolean _camInfoBeforeTimelineCached; // 0x490
		::Il2CppArray<::UnityEngine::GameObject*>* _showLights; // 0x498
		::Il2CppArray<::UnityEngine::GameObject*>* _toBindShowLights; // 0x4A0
		::Il2CppArray<::UnityEngine::Color>* _showLightsColorCache; // 0x4A8
		::UnityEngine::Playables::PlayableDirector* _curShowLightsDirector; // 0x4B0
		::UnityEngine::Playables::PlayableDirector* _curSceneLightsDirector; // 0x4B8
		::System::Int32 _allow2NextPerformedCount; // 0x4C0
		::Foundation::Coroutine::CoroutineHandle _setShowLightsColorHandle; // 0x4C4
		::UnityEngine::Rendering::Universal::GaussianBlur* _gaussianBlurComp; // 0x4C8
		::MoleMole::UIGachaPerformance3DModelController_CharacterColorCorrectionParams* _CharacterColorCorrectionParamsCache; // 0x4D0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _loadedEffects; // 0x4D8
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::UnityEngine::GameObject*>* _loadedSceneLightsTLs; // 0x4E0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* _effEffectSimulatorMgrs; // 0x4E8
		::MoleMole::UIGachaPerformance3DModelController_GachaStageType _curStageType; // 0x4F0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Light*, ::System::Boolean>* _cachedDirectionalLightEnabled; // 0x4F8
		::Class_1_8289F2785D9AA990* _camShakeDelayTimer; // 0x500
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>* _rarityTrackGroupNames; // 0x508
		::UnityEngine::Playables::PlayableDirector* _curTextShotDirector; // 0x510
		::UnityEngine::Playables::PlayableDirector* _speedCamera03Director; // 0x518
		::UnityEngine::Playables::PlayableDirector* _screenEffDirector; // 0x520
		::System::Collections::Generic::HashSet_1<::System::String*>* _playedCamEffects; // 0x528
		::System::Collections::Generic::HashSet_1<::System::String*>* _playedStageEffects; // 0x530

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PlayStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGE_OFFSET))(this);
		}

		::System::Int32 get_PerformedCountOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDCOUNTOFFSET_OFFSET))(this);
		}

		::System::Void UpdateRotateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATEROTATECAMERA_OFFSET))(this);
		}

		::System::Void UpdateNextItemProtectTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATENEXTITEMPROTECTTIME_OFFSET))(this);
		}

		::System::Boolean IsSingleGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ISSINGLEGACHA_OFFSET))(this);
		}

		::System::Void UpdateNonGachaCamFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATENONGACHACAMFOV_OFFSET))(this);
		}

		::System::Void DisactiveAllShowLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DISACTIVEALLSHOWLIGHTS_OFFSET))(this);
		}

		::System::Void SetShowLightsColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETSHOWLIGHTSCOLOR_OFFSET))(this);
		}

		::System::Void SetRareSoundScopeValue(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETRARESOUNDSCOPEVALUE_OFFSET))(this, itemID);
		}

		::System::Single GetGaussianBlurTilling()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GETGAUSSIANBLURTILLING_OFFSET))(this);
		}

		::System::Void OnTimeScaleChanged(::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONTIMESCALECHANGED_OFFSET))(this, timeScale);
		}

		::System::Void OnCamShakeDelayTimeUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCAMSHAKEDELAYTIMEUP_OFFSET))(this);
		}

		::System::Void RevertCamInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_REVERTCAMINFO_OFFSET))(this);
		}

		::System::Void StartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void PlayStageTexSheetByBlackboard(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* startTexSheetBlackboard, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTexSheetBlackboard, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTexSheetBlackboard, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET))(this, stageType, tvIndex, startTexSheetBlackboard, isStartTexSheetVideo, loopTexSheetBlackboard, isLoopTexSheetVideo, endTexSheetBlackboard, isEndTexSheetVideo);
		}

		::System::Void PlayStageTexSheet(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* startTexSheet, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTexSheet, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTexSheet, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEET_OFFSET))(this, stageType, tvIndex, startTexSheet, isStartTexSheetVideo, loopTexSheet, isLoopTexSheetVideo, endTexSheet, isEndTexSheetVideo);
		}

		::System::Void RotateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATECAMERA_OFFSET))(this);
		}

		::System::Void PlayCameraShake(::System::String* camShakeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCAMERASHAKE_OFFSET))(this, camShakeKey);
		}

		::System::Void RotateWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATEWEAPON_OFFSET))(this);
		}

		::System::Void AllowToNextItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ALLOWTONEXTITEM_OFFSET))(this);
		}

		::System::Void SkipAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SKIPALL_OFFSET))(this);
		}

		::System::Void StopAllScreenEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLSCREENEFFECTS_OFFSET))(this);
		}

		::System::Void PlayNonGachaCamFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYNONGACHACAMFOV_OFFSET))(this);
		}

		::System::Void PlayCloseupTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCLOSEUPTL_OFFSET))(this);
		}

		::System::Void DoPlayCloseupTL(::System::String* tlName, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* tlStopCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DOPLAYCLOSEUPTL_OFFSET))(this, tlName, tlStopCallback);
		}

		::System::Void StopCameraTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPCAMERATL_OFFSET))(this);
		}

		::System::Void PlayCharacterLightsTL(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCHARACTERLIGHTSTL_OFFSET))(this, isOpen, startOffset);
		}

		::System::Void PlayShowLightsTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSHOWLIGHTSTL_OFFSET))(this);
		}

		::System::Void PlaySceneLightsTL(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSCENELIGHTSTL_OFFSET))(this, isOpen, startOffset);
		}

		::System::Void PlayTvSceneLightsTL(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVSCENELIGHTSTL_OFFSET))(this, isOpen);
		}

		::System::Void QuickPlayOpenningTv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_QUICKPLAYOPENNINGTV_OFFSET))(this);
		}

		::System::Void FireTvEffect(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRETVEFFECT_OFFSET))(this, stageType, tvIndex, effectPattern);
		}

		::System::Void FireStageEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRESTAGEEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void FireCameraEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRECAMERAEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void DoFireEffect(::System::String* effectPattern, ::UnityEngine::Transform* parent, ::System::Boolean forceReactive)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DOFIREEFFECT_OFFSET))(this, effectPattern, parent, forceReactive);
		}

		::System::Void StopParticleSys(::UnityEngine::GameObject* targetEff)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPPARTICLESYS_OFFSET))(this, targetEff);
		}

		::System::Void PlayParticleSys(::UnityEngine::GameObject* targetEff)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYPARTICLESYS_OFFSET))(this, targetEff);
		}

		::System::Void FadeoutEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FADEOUTEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void StopEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void StopAllCamEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLCAMEFFECTS_OFFSET))(this);
		}

		::System::Void StopAllRarityEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLRARITYEFFECTS_OFFSET))(this);
		}

		::System::Void StopAllStageEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLSTAGEEFFECTS_OFFSET))(this);
		}

		::System::Void StopRarityScreenEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPRARITYSCREENEFFECTS_OFFSET))(this);
		}

		::System::Void PlayTvEffectAnim(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVEFFECTANIM_OFFSET))(this, stageType, tvIndex, animClipName);
		}

		::System::Void StopTvEffectAnim(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPTVEFFECTANIM_OFFSET))(this, stageType, tvIndex, animClipName);
		}

		::System::Void HandleTvRaritySPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLETVRARITYSPERFORM_OFFSET))(this);
		}

		::System::Void HandleItemStageRarityPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYPERFORM_OFFSET))(this);
		}

		::System::Void HandleItemStageRaritySPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYSPERFORM_OFFSET))(this);
		}

		::System::Void HandleResetGaussianBlurParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLERESETGAUSSIANBLURPARAMS_OFFSET))(this);
		}

		::System::Void OnScreenEffectEnd(::MoleMole::Config::ScreenEffectType screenEffType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONSCREENEFFECTEND_OFFSET))(this, screenEffType);
		}

		::System::Void PlayItemShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYITEMSHAKE_OFFSET))(this);
		}

		::System::Void SetTvMatProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETTVMATPROPERTY_OFFSET))(this);
		}

		::System::Void PlayStageRotateScreenEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGEROTATESCREENEFFECTS_OFFSET))(this);
		}

		::System::Void HandlePlayTextShotTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEPLAYTEXTSHOTTIMELINE_OFFSET))(this);
		}

		::System::String* get_END_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_END_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Int32 get_PerformedPhaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDPHASECOUNT_OFFSET))(this);
		}

		::MoleMole::Config::ConfigGachaPerformMisc* get_gachaPerformMisc()
		{
			return ((::MoleMole::Config::ConfigGachaPerformMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_GACHAPERFORMMISC_OFFSET))(this);
		}

		::System::Void set_gachaPerformMisc(::MoleMole::Config::ConfigGachaPerformMisc* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformMisc*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_GACHAPERFORMMISC_OFFSET))(this, value);
		}

		::MoleMole::UIGachaStage3DModelControllerBase* get_CurItemStageCtrler()
		{
			return ((::MoleMole::UIGachaStage3DModelControllerBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURITEMSTAGECTRLER_OFFSET))(this);
		}

		::System::Boolean get_camRotActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMROTACTIVE_OFFSET))(this);
		}

		::System::Void set_camRotActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_CAMROTACTIVE_OFFSET))(this, value);
		}

		::System::Single get_NextItemProtectTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_NEXTITEMPROTECTTIMER_OFFSET))(this);
		}

		::System::Void set_NextItemProtectTimer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_NEXTITEMPROTECTTIMER_OFFSET))(this, value);
		}

		::System::Boolean get_isNonGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISNONGACHA_OFFSET))(this);
		}

		::System::Boolean get_AnimaCheckMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ANIMACHECKMODE_OFFSET))(this);
		}

		::System::Single get_curTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_IsMuteSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISMUTESPEEDUP_OFFSET))(this);
		}

		::System::Boolean get_IsEndingPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISENDINGPERFORMING_OFFSET))(this);
		}

		::System::Boolean get_IsFirstItemPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISFIRSTITEMPERFORMING_OFFSET))(this);
		}

		::System::Boolean get_IsLastItemPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISLASTITEMPERFORMING_OFFSET))(this);
		}

		::UnityEngine::Transform* get_CameraTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void _PlayStage_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYSTAGE_B__12_1_OFFSET))(this);
		}

		::System::Void _PlayCameraShake_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCAMERASHAKE_B__30_0_OFFSET))(this);
		}

		::System::Void _PlayCloseupTL_b__36_3(::UnityEngine::Playables::PlayableDirector* director3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_3_OFFSET))(this, director3);
		}

		::System::Void _PlayCloseupTL_b__36_0(::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_0_OFFSET))(this, director);
		}

		::System::Void _PlayCloseupTL_b__36_4(::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_4_OFFSET))(this, director);
		}

		::System::Void _PlayShowLightsTL_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYSHOWLIGHTSTL_B__40_0_OFFSET))(this);
		}

		::System::Void _HandlePlayTextShotTimeline_b__66_0(::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__HANDLEPLAYTEXTSHOTTIMELINE_B__66_0_OFFSET))(this, director);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
