#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03F99CB57102F7C2.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_93287567E916A51C.h"

class Class_1_0020FC1DC87620DD;
class Class_1_07DDA14415B0B616;
class Class_1_0A7EFFA89187955C;
class Class_1_12B8A7C1454839D0;
class Class_1_2B9207E1BEA1F276;
class Class_1_34446AC6D1609636;
class Class_1_3590405E0F4D36CE;
class Class_1_6438A0A8636EB25C;
class Class_1_AA0F71CEA54B5556;
class Class_1_D0671C49EBD0F20F;
class Class_2_75FEAC6E334E604D;
class TextureFrameScreenPlayData;
class VideoLightSync;
namespace MoleMole { class CinemaNpcOffsetSo; }
namespace MoleMole { class ConfigUICinema; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UICinemaGeneralStartTipsWidgetController; }
namespace MoleMole { class UICinemaPlay3DModelController; }
namespace MoleMole { class UICinemaPlayContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CHECKGAMESTART_OFFSET UNITYSDK_OFFSET(0x18A768E0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CINEMATRIGGERSOUND_OFFSET UNITYSDK_OFFSET(0x18A747F0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CLEARPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x18A76B60)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_DESTROYCINEMAEFFECTENTITY_OFFSET UNITYSDK_OFFSET(0x18A73420)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_DESTROYCINEMAVIDEO_OFFSET UNITYSDK_OFFSET(0x18A75510)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GETAVATARPOSEKEYS_OFFSET UNITYSDK_OFFSET(0x18A747B0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x18A76B10)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18A759C0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_INITCINEMAEFFECTENTITY_OFFSET UNITYSDK_OFFSET(0x18A73270)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_INITCINEMAVIDEO_OFFSET UNITYSDK_OFFSET(0x18A75270)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ISDATEPLAY_OFFSET UNITYSDK_OFFSET(0x18A75040)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONCLICKPAGEPAUSE_OFFSET UNITYSDK_OFFSET(0x18A74750)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A759D0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONSOUNDENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18A751D0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONSOUNDFAILEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18A75140)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A762B0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A75A60)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A75E20)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONVIDESTARTED_OFFSET UNITYSDK_OFFSET(0x18A756F0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDARKSURROUNDING_OFFSET UNITYSDK_OFFSET(0x18A73F50)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATEFAIL_OFFSET UNITYSDK_OFFSET(0x18A73A40)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATEFLARE_OFFSET UNITYSDK_OFFSET(0x18A73690)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATESUCCESS_OFFSET UNITYSDK_OFFSET(0x18A73890)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSCREENDOWN_OFFSET UNITYSDK_OFFSET(0x18A742B0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSCREENUP_OFFSET UNITYSDK_OFFSET(0x18A74100)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSINGLEFEVER_OFFSET UNITYSDK_OFFSET(0x18A73DA0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSINGLESUPERBUBBLE_OFFSET UNITYSDK_OFFSET(0x18A73BF0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECT_OFFSET UNITYSDK_OFFSET(0x18A735A0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYSTARTANIM_OFFSET UNITYSDK_OFFSET(0x18A744D0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYTARGETVIDEO_OFFSET UNITYSDK_OFFSET(0x18A75630)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYVIDEOCOLOR_OFFSET UNITYSDK_OFFSET(0x18A75830)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_POSTLEVELGRAPHSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x18A77140)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_SHOWCINEMA_OFFSET UNITYSDK_OFFSET(0x18A76940)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTDEFAULTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x18A76E20)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTDEFAULTLEVELGRAPH_SINGLE_OFFSET UNITYSDK_OFFSET(0x18A76F10)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x18A77000)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTLEVELPROCESS_OFFSET UNITYSDK_OFFSET(0x18A76D60)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTSINGLEPROCESS_OFFSET UNITYSDK_OFFSET(0x18A771A0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPCINEMACOMMONEFFECT_OFFSET UNITYSDK_OFFSET(0x18A74460)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPCINEMASOUND_OFFSET UNITYSDK_OFFSET(0x18A74880)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPLEVELPROCESS_OFFSET UNITYSDK_OFFSET(0x18A76550)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPVIDEOCOLOR_OFFSET UNITYSDK_OFFSET(0x18A755D0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_SYNCCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x18A76680)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_TRIGGERSOUNDFINISHACTION_OFFSET UNITYSDK_OFFSET(0x18A750E0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_TRIGSGERSOUND_OFFSET UNITYSDK_OFFSET(0x18A74A80)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_UPDATEVIDEOCOLORTICK_OFFSET UNITYSDK_OFFSET(0x18A75900)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18A765B0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A772A0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__ONUIOPEN_B__64_0_OFFSET UNITYSDK_OFFSET(0x18A772B0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__ONUIOPEN_B__64_1_OFFSET UNITYSDK_OFFSET(0x18A77400)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__ONUIOPEN_B__64_2_OFFSET UNITYSDK_OFFSET(0x18A77550)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A776A0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A77730)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A77740)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A77750)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayPageController_TypeDefinitionIndex = 75774;

	class UICinemaPlayPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x328
		::MoleMole::UICinemaGeneralStartTipsWidgetController* startTipsController; // 0x330
		::MoleMole::UIInLevelPauseDialogPopWindowController* levelPauseWindow; // 0x338
		::System::String* avatarPoseKey; // 0x340
		::System::Single quickAgentPlayRatio; // 0x348
		::Struct_2_93287567E916A51C param; // 0x350
		::System::UInt32 voicePendingID; // 0x368
		::System::UInt32 effectPendingID; // 0x36C
		::System::String* videoName; // 0x370
		::MoleMole::ScreenPlayer* _screenPlayer; // 0x378
		::TextureFrameScreenPlayData* screenPlayData; // 0x380
		::System::Single videoTime; // 0x388
		::System::Action* colorTickAction; // 0x390
		::VideoLightSync* lightSync; // 0x398
		::System::Int32 lightSyncCount; // 0x3A0
		::Class_2_75FEAC6E334E604D* _view; // 0x3A8
		::MoleMole::UICinemaPlay3DModelController* cinemaModelController; // 0x3B0
		::Class_1_3590405E0F4D36CE* graphHandler; // 0x3B8
		::Class_1_D0671C49EBD0F20F* chatControlHandler; // 0x3C0
		::Class_1_0A7EFFA89187955C* cameraHandler; // 0x3C8
		::Class_1_34446AC6D1609636* galAnimHandler; // 0x3D0
		::Class_1_6438A0A8636EB25C* ongoingHandler; // 0x3D8
		::Class_1_12B8A7C1454839D0* npcHandler; // 0x3E0
		::Class_1_AA0F71CEA54B5556* npcStrategyHandler; // 0x3E8
		::Class_1_0020FC1DC87620DD* activityEffectHandler; // 0x3F0
		::Class_1_07DDA14415B0B616* reviewHandler; // 0x3F8
		::Class_1_2B9207E1BEA1F276* playController; // 0x400
		::MoleMole::UICinemaPlayContext* playCotnext; // 0x408
		::System::Boolean isNPCLoaded; // 0x410
		::System::Boolean isAvatarLoaded; // 0x411
		::System::Boolean isCinemaLoaded; // 0x412
		::Foundation::Coroutine::CoroutineHandle blackGuadHandle; // 0x414

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitCinemaEffectEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_INITCINEMAEFFECTENTITY_OFFSET))(this);
		}

		::System::Void DestroyCinemaEffectEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_DESTROYCINEMAEFFECTENTITY_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffect(::Enum_3_03F99CB57102F7C2 effectType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_03F99CB57102F7C2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECT_OFFSET))(this, effectType);
		}

		::System::Void PlayCinemaCommonEffectDateFlare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATEFLARE_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectDateSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATESUCCESS_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectDateFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATEFAIL_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectSingleSuperBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSINGLESUPERBUBBLE_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectSingleFever()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSINGLEFEVER_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectDarkSurrounding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDARKSURROUNDING_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectScreenUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSCREENUP_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectScreenDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSCREENDOWN_OFFSET))(this);
		}

		::System::Void StopCinemaCommonEffect(::Enum_3_03F99CB57102F7C2 effectType, ::System::Boolean isStopImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_03F99CB57102F7C2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPCINEMACOMMONEFFECT_OFFSET))(this, effectType, isStopImmediately);
		}

		::System::Void PlayStartAnim(::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYSTARTANIM_OFFSET))(this, finishCallback);
		}

		::System::Void OnClickPagePause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONCLICKPAGEPAUSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAvatarPoseKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GETAVATARPOSEKEYS_OFFSET))(this);
		}

		::System::Void CinemaTriggerSound(::Struct_2_93287567E916A51C param)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_93287567E916A51C))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CINEMATRIGGERSOUND_OFFSET))(this, param);
		}

		::System::Void TrigsgerSound(::System::String* actionKey, ::System::String* effectKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_TRIGSGERSOUND_OFFSET))(this, actionKey, effectKey);
		}

		::System::Void OnSoundFailedCallback(::System::UInt32 pendingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONSOUNDFAILEDCALLBACK_OFFSET))(this, pendingId);
		}

		::System::Void OnSoundEndCallback(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONSOUNDENDCALLBACK_OFFSET))(this, pendingId, playingId);
		}

		::System::Void TriggerSoundFinishAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_TRIGGERSOUNDFINISHACTION_OFFSET))(this);
		}

		::System::Void StopCinemaSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPCINEMASOUND_OFFSET))(this);
		}

		::System::Void InitCinemaVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_INITCINEMAVIDEO_OFFSET))(this);
		}

		::System::Void DestroyCinemaVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_DESTROYCINEMAVIDEO_OFFSET))(this);
		}

		::System::Void PlayTargetVideo(::System::String* videoURL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYTARGETVIDEO_OFFSET))(this, videoURL);
		}

		::System::Void OnVideStarted(::MoleMole::IVideoPlayer* videoPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONVIDESTARTED_OFFSET))(this, videoPlayer);
		}

		::System::Void PlayVideoColor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYVIDEOCOLOR_OFFSET))(this, name);
		}

		::System::Void StopVideoColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPVIDEOCOLOR_OFFSET))(this);
		}

		::System::Void UpdateVideoColorTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_UPDATEVIDEOCOLORTICK_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Boolean CheckGameStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CHECKGAMESTART_OFFSET))(this);
		}

		::System::Void ShowCinema()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_SHOWCINEMA_OFFSET))(this);
		}

		::System::Boolean IsDatePlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ISDATEPLAY_OFFSET))(this);
		}

		::Class_2_75FEAC6E334E604D* GetView()
		{
			return ((::Class_2_75FEAC6E334E604D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void ClearPlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CLEARPLAYSTATE_OFFSET))(this);
		}

		::System::Void SyncCameraTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_SYNCCAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void StartLevelProcess(::System::String* graphPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTLEVELPROCESS_OFFSET))(this, graphPath);
		}

		::System::Void StartDefaultLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTDEFAULTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void StartDefaultLevelGraph_Single()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTDEFAULTLEVELGRAPH_SINGLE_OFFSET))(this);
		}

		::System::Void StartGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTGAMEPLAY_OFFSET))(this);
		}

		::System::Void PostLevelGraphStartEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_POSTLEVELGRAPHSTARTEVENT_OFFSET))(this);
		}

		::System::Void StopLevelProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPLEVELPROCESS_OFFSET))(this);
		}

		::System::Void StartSingleProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTSINGLEPROCESS_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__64_0(::MoleMole::CinemaNpcOffsetSo* targetSo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaNpcOffsetSo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__ONUIOPEN_B__64_0_OFFSET))(this, targetSo);
		}

		::System::Void _OnUIOpen_b__64_1(::MoleMole::CinemaNpcOffsetSo* targetSo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaNpcOffsetSo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__ONUIOPEN_B__64_1_OFFSET))(this, targetSo);
		}

		::System::Void _OnUIOpen_b__64_2(::MoleMole::ConfigUICinema* targetSo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__ONUIOPEN_B__64_2_OFFSET))(this, targetSo);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
