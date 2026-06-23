#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MultipleVideoPlayerManager_PlayParam.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MultipleVideoPlayerManager_FadeRuntimeInfo; }
namespace MoleMole { class MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_CLEANALLMANAGERLISTENER_OFFSET UNITYSDK_OFFSET(0x160DD250)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_CLEARVIDEOFINISHPLAYACTION_OFFSET UNITYSDK_OFFSET(0x160DE160)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_COMPAREPLAYPARAMS_OFFSET UNITYSDK_OFFSET(0x160DD8C0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_CREATEUIVIDEOPLAYERHELPER_OFFSET UNITYSDK_OFFSET(0x160DC9D0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GETCURVIDEOTIME_OFFSET UNITYSDK_OFFSET(0x160DCC60)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GETSEQUENCEDURATION_1_OFFSET UNITYSDK_OFFSET(0x160DE320)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GETSEQUENCEDURATION_OFFSET UNITYSDK_OFFSET(0x160DE1B0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_CURRENTVIDEOINFO_OFFSET UNITYSDK_OFFSET(0x160DDC80)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET UNITYSDK_OFFSET(0x160DDBC0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x160DEBB0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x160DEB50)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_ISPREPARING_OFFSET UNITYSDK_OFFSET(0x160DEBC0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_HIDEBACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x160DDA50)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_INITRAWIMAGECONTROLANIMATION_OFFSET UNITYSDK_OFFSET(0x160DE3E0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_INIT_1_OFFSET UNITYSDK_OFFSET(0x160DC0E0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x160DBF00)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160DD770)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONFINISH_OFFSET UNITYSDK_OFFSET(0x160DDF90)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONPREPARED_OFFSET UNITYSDK_OFFSET(0x160DDE70)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONSTART_OFFSET UNITYSDK_OFFSET(0x160DDF40)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x160DD850)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_OVERRIDEONPREPAREDACTION_OFFSET UNITYSDK_OFFSET(0x160DDA00)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYBYINDEX_OFFSET UNITYSDK_OFFSET(0x160DD0B0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x160DD3A0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYNEXTVIDEO_OFFSET UNITYSDK_OFFSET(0x160DDD30)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYRAWIMAGEANIM_OFFSET UNITYSDK_OFFSET(0x160DE800)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAY_OFFSET UNITYSDK_OFFSET(0x160DD000)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PREPARE_OFFSET UNITYSDK_OFFSET(0x160DCD50)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_SETALPHA_OFFSET UNITYSDK_OFFSET(0x160DDAF0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_SETUPSCREENASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x160DCB30)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_SETVIDEOFINISHPLAYACTION_OFFSET UNITYSDK_OFFSET(0x160DE110)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_STOP_OFFSET UNITYSDK_OFFSET(0x160DC750)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x160DD7C0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x160DEBD0)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager_TypeDefinitionIndex = 67961;

	class MultipleVideoPlayerManager : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityEvent* _loopFinished; // 0x10
		::Class_2_FDFE69FE7B72463B* _backgroundImageControlAnimation; // 0x18
		::System::Collections::Generic::List_1<::Class_1_E9529ED64113E4E9*>* _cachedVideoPlayerHelperList; // 0x20
		::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>* _onVideoFinishPlayAction; // 0x28
		::UnityEngine::UI::RawImage* _backgroundImageRawImage; // 0x30
		::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>* _onVideoStartPlayActon; // 0x38
		::UnityEngine::Events::UnityEvent* _finishEvent; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo*>* _videoPlayerBindInfoList; // 0x48
		::UnityEngine::Events::UnityEvent* _videoEnd; // 0x50
		::UnityEngine::UI::RawImage* _foregroundImageRawImage; // 0x58
		::Class_2_FDFE69FE7B72463B* _foregroundImageControlAnimation; // 0x60
		::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* _onFinishedAction; // 0x68
		::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* _onPreparedActon; // 0x70
		::MoleMole::MultipleVideoPlayerManager_FadeRuntimeInfo* _fadeRuntimeInfo; // 0x78
		::System::Int32 _currentVideoPlayerIndex; // 0x80
		::System::Boolean _isPlaying; // 0x84
		::System::Boolean _isInPreparing; // 0x85
		::System::Boolean _autoPlay; // 0x86
		::System::Int32 _preparedCount; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::String* videoGroupKey, ::UnityEngine::GameObject* componentObj, ::UnityEngine::UI::Graphic* uiTarget, ::UnityEngine::UI::RawImage* screen)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::UI::Graphic*, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_INIT_OFFSET))(this, videoGroupKey, componentObj, uiTarget, screen);
		}

		::System::Void Init_1(::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>* videoPlayParams, ::UnityEngine::GameObject* componentObj, ::UnityEngine::UI::Graphic* uiTarget, ::UnityEngine::UI::RawImage* screen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>*, ::UnityEngine::GameObject*, ::UnityEngine::UI::Graphic*, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_INIT_1_OFFSET))(this, videoPlayParams, componentObj, uiTarget, screen);
		}

		::System::Double GetCurVideoTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GETCURVIDEOTIME_OFFSET))(this);
		}

		::System::Void Prepare(::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepared, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onFinished, ::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>* onVideoStartPlayActon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PREPARE_OFFSET))(this, onPrepared, onFinished, onVideoStartPlayActon);
		}

		::System::Void Play(::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAY_OFFSET))(this, onFinished);
		}

		::System::Void PlayByIndex(::System::Int32 index, ::System::Boolean autoPlay, ::System::Action* onVideoEnd, ::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYBYINDEX_OFFSET))(this, index, autoPlay, onVideoEnd, onFinished);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Boolean ComparePlayParams(::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>* videoPlayParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_COMPAREPLAYPARAMS_OFFSET))(this, videoPlayParams);
		}

		::System::Void OverrideOnPreparedAction(::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPreparedActon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_OVERRIDEONPREPAREDACTION_OFFSET))(this, onPreparedActon);
		}

		::System::Void HideBackgroundImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_HIDEBACKGROUNDIMAGE_OFFSET))(this);
		}

		::System::Void PlayInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYINTERNAL_OFFSET))(this);
		}

		::System::Void PlayNextVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYNEXTVIDEO_OFFSET))(this);
		}

		::Class_1_E9529ED64113E4E9* CreateUIVideoPlayerHelper(::UnityEngine::GameObject* componentObj, ::UnityEngine::UI::Graphic* uiTarget, ::UnityEngine::UI::RawImage* screen, ::System::Int32 cachedVideoPlayerIndex)
		{
			return ((::Class_1_E9529ED64113E4E9*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::UI::Graphic*, ::UnityEngine::UI::RawImage*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_CREATEUIVIDEOPLAYERHELPER_OFFSET))(this, componentObj, uiTarget, screen, cachedVideoPlayerIndex);
		}

		::System::Void CleanAllManagerListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_CLEANALLMANAGERLISTENER_OFFSET))(this);
		}

		::System::Void OnPrepared(::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo* videoPlayerRuntimeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONPREPARED_OFFSET))(this, videoPlayerRuntimeInfo);
		}

		::System::Void OnStart(::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo* videoPlayerRuntimeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONSTART_OFFSET))(this, videoPlayerRuntimeInfo);
		}

		::System::Void OnFinish(::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo* videoPlayerRuntimeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONFINISH_OFFSET))(this, videoPlayerRuntimeInfo);
		}

		::System::Void SetVideoFinishPlayAction(::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>* videoFinishAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_SETVIDEOFINISHPLAYACTION_OFFSET))(this, videoFinishAction);
		}

		::System::Void ClearVideoFinishPlayAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_CLEARVIDEOFINISHPLAYACTION_OFFSET))(this);
		}

		::System::UInt64 GetSequenceDuration()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GETSEQUENCEDURATION_OFFSET))(this);
		}

		::System::UInt64 GetSequenceDuration_1(::System::Int32 index)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GETSEQUENCEDURATION_1_OFFSET))(this, index);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_ONUPDATE_OFFSET))(this);
		}

		::System::Void SetAlpha(::System::Boolean isForeground, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_SETALPHA_OFFSET))(this, isForeground, alpha);
		}

		::System::Void SetupScreenAspectRatio(::UnityEngine::UI::RawImage* screen, ::Class_1_E9529ED64113E4E9* videoPlayerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_SETUPSCREENASPECTRATIO_OFFSET))(this, screen, videoPlayerHelper);
		}

		::System::Void InitRawImageControlAnimation(::Class_2_A9A857AD270B9CE1* assetLoadProxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_INITRAWIMAGECONTROLANIMATION_OFFSET))(this, assetLoadProxy);
		}

		::System::Void PlayRawImageAnim(::Class_2_A9A857AD270B9CE1* assetLoadProxy, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYRAWIMAGEANIM_OFFSET))(this, assetLoadProxy, animName);
		}

		::Class_1_E9529ED64113E4E9* get_CurrentVideoPlayerHelper()
		{
			return ((::Class_1_E9529ED64113E4E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET))(this);
		}

		::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo* get_CurrentVideoInfo()
		{
			return ((::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_CURRENTVIDEOINFO_OFFSET))(this);
		}

		::System::Boolean get_IsPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_IsPreparing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_GET_ISPREPARING_OFFSET))(this);
		}
	};
}
