#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase_UITextInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C376DB68B1C74261;
class Class_1_CC527FA3839977FC;
class Class_2_208CC9941471731A_332;
class Class_2_208CC9941471731A_595;
class Class_2_5F64140FAB2210F3;
class TextureFrameScreenPlayData;
class VideoScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityTimeSlow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_AFTERREFRESHSTAGEONEFRAME_OFFSET UNITYSDK_OFFSET(0x151A9FD0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_CHECKRARITYTV_OFFSET UNITYSDK_OFFSET(0x151AD8D0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_FIRETVEFFECT_OFFSET UNITYSDK_OFFSET(0x151AC2C0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETCURPLAYERCONDITION_OFFSET UNITYSDK_OFFSET(0x151AAA10)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x151A89B0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETRARITYEFFDELAY_OFFSET UNITYSDK_OFFSET(0x151AC960)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETSCREENPLAYDATAFROM_1_OFFSET UNITYSDK_OFFSET(0x151A34A0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETSCREENPLAYDATAFROM_OFFSET UNITYSDK_OFFSET(0x151A3370)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETUIPREFABPATH_OFFSET UNITYSDK_OFFSET(0x151A7EB0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETUITEXTMOVEDISTANE_OFFSET UNITYSDK_OFFSET(0x151A88B0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ANIMACHECKMODE_OFFSET UNITYSDK_OFFSET(0x151A8490)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x151AE370)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURCHARACTERLIGHTTIMELINEGO_OFFSET UNITYSDK_OFFSET(0x151AC140)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURMODEL_OFFSET UNITYSDK_OFFSET(0x151AE390)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0x151A3130)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x151AE3A0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ISANIMATORSPEEDCTRLED_OFFSET UNITYSDK_OFFSET(0x151A7000)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x151AE380)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET UNITYSDK_OFFSET(0x151AE360)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_SHAKEITEMGO_OFFSET UNITYSDK_OFFSET(0x151A2970)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0x151AE350)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET__ISNONGACHA_OFFSET UNITYSDK_OFFSET(0x151A6BA0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLECREATESUMMONS_OFFSET UNITYSDK_OFFSET(0x151A7220)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x151A2C10)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEREMOVESUMMONS_OFFSET UNITYSDK_OFFSET(0x151A66B0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLESUMMONENTITYONCLOSEUPTLCHANGE_OFFSET UNITYSDK_OFFSET(0x151ADE80)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEUITEXTMATONREFRESH_OFFSET UNITYSDK_OFFSET(0x151A85A0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x151A29C0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x151A35C0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x151A23F0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_NEXTITEM_OFFSET UNITYSDK_OFFSET(0x151AA5E0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x151ADDF0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCLOSEUPTLEND_OFFSET UNITYSDK_OFFSET(0x151AE010)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCLOSEUPTLSTART_OFFSET UNITYSDK_OFFSET(0x151ADE30)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONTIMESCALECHANGED_OFFSET UNITYSDK_OFFSET(0x151AD940)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x151A1390)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151A1BA0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151A0F80)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151A1030)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYBLUEPRINT_OFFSET UNITYSDK_OFFSET(0x151A91D0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYCHARACTERLIGHTSTL_OFFSET UNITYSDK_OFFSET(0x151AAD90)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYITEMSHAKE_OFFSET UNITYSDK_OFFSET(0x151AD150)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x151A89F0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSTAGETEXSHEET_OFFSET UNITYSDK_OFFSET(0x151A8BC0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSUMMONSBORNANIMATION_OFFSET UNITYSDK_OFFSET(0x1519D1F0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYTVEFFECTANIMLASTFRAME_OFFSET UNITYSDK_OFFSET(0x151ACDD0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0x151ACBD0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PRELOADITEMSTAGE_OFFSET UNITYSDK_OFFSET(0x151A3610)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REALSHOWCHARACTERLIGHTSV2_OFFSET UNITYSDK_OFFSET(0x151AB350)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REALSHOWCHARACTERLIGHTS_OFFSET UNITYSDK_OFFSET(0x151AAE40)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHITEMSTAGE_1_OFFSET UNITYSDK_OFFSET(0x151A7D00)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHITEMSTAGE_OFFSET UNITYSDK_OFFSET(0x151A36A0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x151A9690)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REMOVECURENTITY_OFFSET UNITYSDK_OFFSET(0x151A6CB0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_RESETUITEXT_1_OFFSET UNITYSDK_OFFSET(0x151A80F0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_RESETUITEXT_OFFSET UNITYSDK_OFFSET(0x151A7FC0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SETSUMMONSTIMESCALE_OFFSET UNITYSDK_OFFSET(0x151A7A90)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SETTVMATPROPERTY_OFFSET UNITYSDK_OFFSET(0x151AD810)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x151AE3B0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPALLTVS_OFFSET UNITYSDK_OFFSET(0x151A90A0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPPLAY_OFFSET UNITYSDK_OFFSET(0x151AAA80)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x151AAD50)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0x151ACF60)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPTV_OFFSET UNITYSDK_OFFSET(0x151A8FD0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATESUMMONSANIMATORMANUALLY_OFFSET UNITYSDK_OFFSET(0x151AE060)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATETVS_OFFSET UNITYSDK_OFFSET(0x151A2A10)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x151A0FD0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x151AE3C0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__REFRESHITEMSTAGE_B__18_0_OFFSET UNITYSDK_OFFSET(0x151AE930)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__REFRESHSTAGE_B__40_0_OFFSET UNITYSDK_OFFSET(0x151AE9A0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x151AE9B0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151AEA70)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151AEA80)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151AEA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStage3DModelControllerBase_TypeDefinitionIndex = 46297;

	class UIGachaStage3DModelControllerBase : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::String* CUTSCENE_SHOWLIGHTS_TL; // 0x0
		// static const ::System::String* CUTSCENE_HIDELIGHTS_TL; // 0x0
		// static const ::System::String* OPEN_TRACK; // 0x0
		// static const ::System::String* CLOSE_TRACK; // 0x0
		// static const ::System::String* Trigger_Gacha_CloseUp_Start; // 0x0
		// static const ::System::String* Trigger_Gacha_CloseUp_End; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _toHideModels; // 0x358
		::System::Int32 _characterTemplateID; // 0x360
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* _loadedSummonGos; // 0x368
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* _usedSummonGos; // 0x370
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _summonEntitys; // 0x378
		::MoleMole::Config::ConfigEntityTimeSlow* _timeSlowConfig; // 0x380
		::Class_1_CC527FA3839977FC* _timeSlowData; // 0x388
		::System::String* PreTexSheetStart_Tv; // 0x390
		::System::String* PreTexSheetLoop_Tv; // 0x398
		::System::String* PreTexSheetEnd_Tv; // 0x3A0
		::System::String* TexSheetStart_Tv; // 0x3A8
		::System::String* TexSheetLoop_Tv; // 0x3B0
		::System::String* TexSheetEnd_Tv; // 0x3B8
		::System::String* AnimationKeyDelay; // 0x3C0
		::System::String* ModelAnimatorCom; // 0x3C8
		::System::String* CamShakeKey; // 0x3D0
		::System::String* CamRotDuration; // 0x3D8
		::System::String* IfRefreshStage; // 0x3E0
		::System::String* AllowToNext; // 0x3E8
		::System::String* AvatarAnimOffset; // 0x3F0
		::System::String* UITextMoveDuration; // 0x3F8
		::System::String* UITextMoveCurve; // 0x400
		::System::String* UITextTwinkleDuration; // 0x408
		::System::String* UITextTwinkleCurve; // 0x410
		::System::String* UITextTwinkleMaxAlpha; // 0x418
		::System::String* UITextSpeedUpScale; // 0x420
		::System::String* UITextFadeOutDelaySpeedUp; // 0x428
		::System::String* UITextFadeInSuspend; // 0x430
		::System::String* UITextFadeInCurve; // 0x438
		::System::String* UITextFadeInMaxAlpha; // 0x440
		::System::String* IsNextItemBtnClicked; // 0x448
		::System::String* ItemNameKey; // 0x450
		::System::String* ItemNameText; // 0x458
		::System::String* ItemNameAnim; // 0x460
		::System::String* UITextUpGo; // 0x468
		::System::String* UITextLeftGo; // 0x470
		::System::String* UITextRightGo; // 0x478
		::System::String* UITextMidGo; // 0x480
		::System::String* RarityEffectPattern; // 0x488
		::System::String* RarityEffectPatternSpecial; // 0x490
		::System::String* StageRarityEffectPattern; // 0x498
		::System::String* CamRarityEffectPattern_Openning; // 0x4A0
		::System::String* CamRarityEffectPattern_ItemStage; // 0x4A8
		::System::String* CamRarityEffectPattern_Common; // 0x4B0
		::System::String* MonoCGCustomGlobalAnimationGo; // 0x4B8
		::System::String* MonoCGCustomGlobalAnimationGo1; // 0x4C0
		::System::String* MonoCGCustomGlobalAnimationGo2; // 0x4C8
		::System::String* CGCustomGlobalAnimationOpenCurve; // 0x4D0
		::System::String* CGCustomGlobalAnimationOpenDuration; // 0x4D8
		::System::String* CGCustomGlobalAnimationCloseCurve; // 0x4E0
		::System::String* CGCustomGlobalAnimationCloseDuration; // 0x4E8
		::System::String* IsRarityS; // 0x4F0
		::System::String* TvRarityEffShowInterval; // 0x4F8
		::System::String* TvRarityEffAnimShowInterval; // 0x500
		::System::String* RaritySPerformInterval; // 0x508
		::System::String* IsRarityTv; // 0x510
		::System::String* TvRarityEffAnim; // 0x518
		::System::String* TvCommonEffAnim_ItemStage; // 0x520
		::System::String* UITextColor; // 0x528
		::System::String* UITextIntensityCurve; // 0x530
		::System::String* UITextIntensityDuration; // 0x538
		::System::String* CamEff_Rotate_Delay; // 0x540
		::System::String* HasRarityS; // 0x548
		::System::String* NeedStopCloseupTL; // 0x550
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _tvRenders; // 0x558
		::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* _screenPlayers; // 0x560
		::System::Collections::Generic::List_1<::TextureFrameScreenPlayData*>* _startScreenDatas; // 0x568
		::System::Collections::Generic::List_1<::TextureFrameScreenPlayData*>* _loopScreenDatas; // 0x570
		::System::Collections::Generic::List_1<::TextureFrameScreenPlayData*>* _endScreenDatas; // 0x578
		::System::Collections::Generic::List_1<::VideoScreenPlayData*>* _startVideoScreenDatas; // 0x580
		::System::Collections::Generic::List_1<::VideoScreenPlayData*>* _loopVideoScreenDatas; // 0x588
		::System::Collections::Generic::List_1<::VideoScreenPlayData*>* _endVideoScreenDatas; // 0x590
		::Class_1_C376DB68B1C74261* _player; // 0x598
		::UnityEngine::Transform* _characterLightsTimelineRoot; // 0x5A0
		::Class_2_208CC9941471731A_595* _itemPerformTemplate; // 0x5A8
		::UnityEngine::GameObject* _curModel; // 0x5B0
		::UnityEngine::Vector3 _startLocalPos; // 0x5B8
		::MoleMole::Battle::Entity* _curEntity; // 0x5C8
		::UnityEngine::GameObject* _contentRootGo; // 0x5D0
		::System::Boolean _IsActive_k__BackingField; // 0x5D8
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* _loadedModels; // 0x5E0
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* _loadedUITextModels; // 0x5E8
		::System::String* _Color; // 0x5F0
		::System::String* _ChannelA; // 0x5F8
		::Class_2_208CC9941471731A_332* _gachaPerformTamplate; // 0x600
		::System::Collections::Generic::List_1<::UnityEngine::Light*>* _allLights; // 0x608
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _loadedCharacterLightsTLs; // 0x610
		::UnityEngine::Playables::PlayableDirector* _curCharacterLightsDirector; // 0x618
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* _loadedTvEffects; // 0x620
		::Class_2_5F64140FAB2210F3* _camClip; // 0x628
		::Foundation::AssetPath _lastModelPrefabPath; // 0x630

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void UpdateTvs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATETVS_OFFSET))(this);
		}

		::TextureFrameScreenPlayData* GetScreenPlayDataFrom(::System::Int32 index, ::System::Collections::Generic::List_1<::TextureFrameScreenPlayData*>* list)
		{
			return ((::TextureFrameScreenPlayData*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::TextureFrameScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETSCREENPLAYDATAFROM_OFFSET))(this, index, list);
		}

		::VideoScreenPlayData* GetScreenPlayDataFrom_1(::System::Int32 index, ::System::Collections::Generic::List_1<::VideoScreenPlayData*>* list)
		{
			return ((::VideoScreenPlayData*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::VideoScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETSCREENPLAYDATAFROM_1_OFFSET))(this, index, list);
		}

		::System::Boolean IsVideoTvIndex(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET))(this, tvIndex);
		}

		::System::Collections::IEnumerator* PreloadItemStage(::System::Action* completeCb, ::Il2CppArray<::Foundation::AssetPath>* preloadAssets)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PRELOADITEMSTAGE_OFFSET))(this, completeCb, preloadAssets);
		}

		::System::Void RefreshItemStage(::System::String* tvVideo, ::System::String* tvTextureSheet, ::Foundation::AssetPath modelPrefabPath, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEulerAngle, ::System::Single size, ::System::Int32 templateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHITEMSTAGE_OFFSET))(this, tvVideo, tvTextureSheet, modelPrefabPath, parent, localPos, localEulerAngle, size, templateID);
		}

		::System::Void RefreshItemStage_1(::System::String* tvVideo, ::System::String* tvTextureSheet, ::System::String* modelPrefabPath, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEulerAngle, ::System::Single size, ::System::Int32 templateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHITEMSTAGE_1_OFFSET))(this, tvVideo, tvTextureSheet, modelPrefabPath, parent, localPos, localEulerAngle, size, templateID);
		}

		::System::Void HandleCreateSummons(::System::Int32 summonerTemplateID, ::UnityEngine::Transform* parent, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLECREATESUMMONS_OFFSET))(this, summonerTemplateID, parent, size);
		}

		::System::Void HandleRemoveSummons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEREMOVESUMMONS_OFFSET))(this);
		}

		::Foundation::AssetPath GetUIPrefabPath(::System::Int32 characterTemplateID, ::MoleMole::Config::EntityType uiEntityType)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETUIPREFABPATH_OFFSET))(this, characterTemplateID, uiEntityType);
		}

		::System::Void RemoveCurEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REMOVECURENTITY_OFFSET))(this);
		}

		::System::Void ResetUIText(::System::Collections::Generic::List_1<::System::String*>* paths, ::System::Collections::Generic::List_1<::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo>* textInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_RESETUITEXT_OFFSET))(this, paths, textInfos);
		}

		::System::Void ResetUIText_1(::System::String* curPath, ::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo curTextInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_RESETUITEXT_1_OFFSET))(this, curPath, curTextInfo);
		}

		::System::Void HandleUITextMatOnRefresh(::UnityEngine::GameObject* targetUITextModel, ::System::String* matsBlackboardKey)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEUITEXTMATONREFRESH_OFFSET))(this, targetUITextModel, matsBlackboardKey);
		}

		::System::Single GetUITextMoveDistane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETUITEXTMOVEDISTANE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLightCutSceneAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET))(this);
		}

		::System::Void PlayStageTexSheetByBlackboard(::System::Int32 index, ::System::String* startTexSheetBlackboard, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTexSheetBlackboard, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTexSheetBlackboard, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET))(this, index, startTexSheetBlackboard, isStartTexSheetVideo, loopTexSheetBlackboard, isLoopTexSheetVideo, endTexSheetBlackboard, isEndTexSheetVideo);
		}

		::System::Void PlayStageTexSheet(::System::Int32 index, ::System::String* startTextureSheet, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTextureSheet, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTextureSheet, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSTAGETEXSHEET_OFFSET))(this, index, startTextureSheet, isStartTexSheetVideo, loopTextureSheet, isLoopTexSheetVideo, endTextureSheet, isEndTexSheetVideo);
		}

		::System::Void StopTv(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPTV_OFFSET))(this, index);
		}

		::System::Void StopAllTvs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPALLTVS_OFFSET))(this);
		}

		::System::Void PlayBlueprint(::System::Single camRotateDuration, ::Class_2_208CC9941471731A_595* tamplate, ::System::Action* blueprintEndCb, ::System::Int32 performedPhaseCount, ::System::Int32 totalPhaseCount, ::System::String* overrideBlueprint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_2_208CC9941471731A_595*, ::System::Action*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYBLUEPRINT_OFFSET))(this, camRotateDuration, tamplate, blueprintEndCb, performedPhaseCount, totalPhaseCount, overrideBlueprint);
		}

		::System::Void RefreshStage(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHSTAGE_OFFSET))(this, active);
		}

		::System::Void AfterRefreshStageOneFrame(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_AFTERREFRESHSTAGEONEFRAME_OFFSET))(this, active);
		}

		::System::Void NextItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_NEXTITEM_OFFSET))(this);
		}

		::System::Boolean GetCurPlayerCondition(::System::String* conditionKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETCURPLAYERCONDITION_OFFSET))(this, conditionKey);
		}

		::System::Void StopPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPPLAY_OFFSET))(this);
		}

		::System::Void StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPSOUND_OFFSET))(this);
		}

		::System::Void PlayCharacterLightsTL(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYCHARACTERLIGHTSTL_OFFSET))(this, isOpen, startOffset);
		}

		::System::Void RealShowCharacterLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REALSHOWCHARACTERLIGHTS_OFFSET))(this);
		}

		::System::Void RealShowCharacterLightsV2(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REALSHOWCHARACTERLIGHTSV2_OFFSET))(this, isOpen, startOffset);
		}

		::UnityEngine::GameObject* get_CurCharacterLightTimelineGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURCHARACTERLIGHTTIMELINEGO_OFFSET))(this);
		}

		::System::Void FireTvEffect(::System::Int32 index, ::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_FIRETVEFFECT_OFFSET))(this, index, effectPattern);
		}

		::System::Void GetRarityEffDelay(::System::Int32 tvIndex, ::System::Single& effDelay, ::System::Single& effAnimDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETRARITYEFFDELAY_OFFSET))(this, tvIndex, effDelay, effAnimDelay);
		}

		::System::Void PlayTvEffectAnim(::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYTVEFFECTANIM_OFFSET))(this, tvIndex, animClipName);
		}

		::System::Void PlayTvEffectAnimLastFrame(::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYTVEFFECTANIMLASTFRAME_OFFSET))(this, tvIndex, animClipName);
		}

		::System::Void StopTvEffectAnim(::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPTVEFFECTANIM_OFFSET))(this, tvIndex, animClipName);
		}

		::System::Void PlayItemShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYITEMSHAKE_OFFSET))(this);
		}

		::System::Void SetTvMatProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SETTVMATPROPERTY_OFFSET))(this);
		}

		::System::Boolean CheckRarityTv(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_CHECKRARITYTV_OFFSET))(this, tvIndex);
		}

		::System::Void OnTimeScaleChanged(::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONTIMESCALECHANGED_OFFSET))(this, timeScale);
		}

		::System::Void OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET))(this);
		}

		::System::Void OnCloseupTLStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCLOSEUPTLSTART_OFFSET))(this);
		}

		::System::Void HandleSummonEntityOnCloseupTLChange(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLESUMMONENTITYONCLOSEUPTLCHANGE_OFFSET))(this, isStart);
		}

		::System::Void OnCloseupTLEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCLOSEUPTLEND_OFFSET))(this);
		}

		::System::Void PlaySummonsBornAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSUMMONSBORNANIMATION_OFFSET))(this);
		}

		::System::Void SetSummonsTimeScale(::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SETSUMMONSTIMESCALE_OFFSET))(this, timeScale);
		}

		::System::Void UpdateSummonsAnimatorManually(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATESUMMONSANIMATORMANUALLY_OFFSET))(this, deltaTime);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::Int32 get_RARITY_TV_INDEX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::Class_1_C376DB68B1C74261* get_Player()
		{
			return ((::Class_1_C376DB68B1C74261*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_PLAYER_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_curModel()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get__isNonGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET__ISNONGACHA_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ShakeItemGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_SHAKEITEMGO_OFFSET))(this);
		}

		::System::Single get_curTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_isAnimatorSpeedCtrled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ISANIMATORSPEEDCTRLED_OFFSET))(this);
		}

		::System::Boolean get_AnimaCheckMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ANIMACHECKMODE_OFFSET))(this);
		}

		::System::Void _RefreshItemStage_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__REFRESHITEMSTAGE_B__18_0_OFFSET))(this);
		}

		::System::Void _RefreshStage_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__REFRESHSTAGE_B__40_0_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
