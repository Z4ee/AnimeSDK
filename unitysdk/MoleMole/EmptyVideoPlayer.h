#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_21DCD4640D389503_1_Enum_3_61B6B3D4D8E7A2ED.h"
#include "unitysdk/MoleMole/IVideoPlayer.h"
#include "unitysdk/Struct_2_071C692C54C58954.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"

class Class_1_21DCD4640D389503_1;
namespace MoleMole { class VideoPlayerMono; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }

#define MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_ONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x11733940)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_ONSEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x11733A00)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_PLAYFINISH_OFFSET UNITYSDK_OFFSET(0x117339B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_PLAYSTART_OFFSET UNITYSDK_OFFSET(0x11733C50)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CHECKINITMOVIECONTROLLER_OFFSET UNITYSDK_OFFSET(0x117326E0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CHECKLOGVIDEOVALID_OFFSET UNITYSDK_OFFSET(0x11734760)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CLIPCHANGED_OFFSET UNITYSDK_OFFSET(0x11734AC0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_DESTROYMOVIE_OFFSET UNITYSDK_OFFSET(0x11732D50)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GETTARGETRENDER_OFFSET UNITYSDK_OFFSET(0x11735480)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_CLIPDATA_OFFSET UNITYSDK_OFFSET(0x11732610)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x117324C0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x117346D0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x117324A0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x11734050)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x11734070)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x11734030)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x117340E0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISCANRENDER_OFFSET UNITYSDK_OFFSET(0x11733DC0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x11733F90)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x11733990)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x11733DA0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x11733E20)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x11733FF0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x11732CC0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x11733FB0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x11734160)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_SIMULATE_OFFSET UNITYSDK_OFFSET(0x11732630)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x117341A0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x11734140)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x11734180)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x11734130)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x11734010)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x11733F80)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x11733FD0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x11734090)
#define MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLPLAYEND_OFFSET UNITYSDK_OFFSET(0x117330A0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLPREPARED_OFFSET UNITYSDK_OFFSET(0x11733170)
#define MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLSTOP_OFFSET UNITYSDK_OFFSET(0x11732F90)
#define MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALPLAY_OFFSET UNITYSDK_OFFSET(0x11733CA0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ISERROR_OFFSET UNITYSDK_OFFSET(0x11734C20)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ISINITMOVIE_OFFSET UNITYSDK_OFFSET(0x117327C0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ISREADY_OFFSET UNITYSDK_OFFSET(0x11734BA0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ISVIDEOSOURCEVALID_OFFSET UNITYSDK_OFFSET(0x11735710)
#define MOLEMOLE_EMPTYVIDEOPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11734C60)
#define MOLEMOLE_EMPTYVIDEOPLAYER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x11732570)
#define MOLEMOLE_EMPTYVIDEOPLAYER_LOGUPDATE_OFFSET UNITYSDK_OFFSET(0x117324D0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_LOG_OFFSET UNITYSDK_OFFSET(0x11732520)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11735220)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ONLOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x11733120)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ONSTATUSPLAYEND_OFFSET UNITYSDK_OFFSET(0x11733050)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ONSTATUSSTOP_OFFSET UNITYSDK_OFFSET(0x11732F40)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x11733EE0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x11733E80)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x11733B20)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x11733A50)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PRINTONSCREEN_OFFSET UNITYSDK_OFFSET(0x117325C0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_RELEASETEXTURE_OFFSET UNITYSDK_OFFSET(0x11735300)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SEEKFRAME_OFFSET UNITYSDK_OFFSET(0x117346F0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SEEKTIME_OFFSET UNITYSDK_OFFSET(0x117348B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETAUDIOMODENONE_OFFSET UNITYSDK_OFFSET(0x11732800)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x11732A70)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETDEFAULTPARAM_OFFSET UNITYSDK_OFFSET(0x11732920)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETFILEINTERNAL_OFFSET UNITYSDK_OFFSET(0x11732840)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETRENDERPROPERTY_OFFSET UNITYSDK_OFFSET(0x117341B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x117331F0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETURL_OFFSET UNITYSDK_OFFSET(0x11734A40)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETVIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x11734930)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_CLIPDATA_OFFSET UNITYSDK_OFFSET(0x11732620)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x117346E0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x117324B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x11732C60)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x11732CE0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x11733FC0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x11734170)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_SIMULATE_OFFSET UNITYSDK_OFFSET(0x11732640)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x11732C10)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x11734150)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x11734190)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x11733FE0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_STATUSCHANGEEVENTFUNC_OFFSET UNITYSDK_OFFSET(0x11735770)
#define MOLEMOLE_EMPTYVIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x11734A00)
#define MOLEMOLE_EMPTYVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x11735130)
#define MOLEMOLE_EMPTYVIDEOPLAYER_UNSETCALLBACK_OFFSET UNITYSDK_OFFSET(0x11732DA0)
#define MOLEMOLE_EMPTYVIDEOPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11735830)
#define MOLEMOLE_EMPTYVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x11732650)
#define MOLEMOLE_EMPTYVIDEOPLAYER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11735840)

namespace MoleMole
{
	inline static constexpr unsigned int EmptyVideoPlayer_TypeDefinitionIndex = 56105;

	class EmptyVideoPlayer : public ::MoleMole::IVideoPlayer
	{
	public:
		static ::System::UInt32* StaticGet_textureTempCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EmptyVideoPlayer_TypeDefinitionIndex)->GetStaticField(0xE520);
		}
		::UnityEngine::Renderer* _targetMaterialRenderer; // 0x48
		::UnityEngine::RenderTexture* _targetTexture; // 0x50
		::System::String* m_url; // 0x58
		::Class_1_21DCD4640D389503_1* _Simulate_k__BackingField; // 0x60
		::System::String* _targetMaterialProperty; // 0x68
		::UnityEngine::RenderTexture* _texture; // 0x70
		::System::String* m_movieFile; // 0x78
		::System::Single _playbackSpeed; // 0x80
		::UnityEngine::Video::VideoRenderMode _renderMode_k__BackingField; // 0x84
		::System::Boolean _waitForFirstFrame_k__BackingField; // 0x88
		::System::Boolean isStopAndCallPlay; // 0x89
		::System::Boolean m_PrepareInProgress; // 0x8A
		::System::Boolean m_PlayPending; // 0x8B
		::System::Boolean isSeeking; // 0x8C
		::System::Boolean isCallStop; // 0x8D
		::System::Boolean isInitCallback; // 0x8E
		::System::Boolean _isLoop; // 0x8F
		::System::Boolean m_CanStartPlaying; // 0x90
		::System::Boolean _playOnAwake; // 0x91
		::System::Boolean m_CanStartRendering; // 0x92
		::System::Boolean _enabled; // 0x93
		::System::Boolean _isCallPause; // 0x94
		::System::Boolean m_isFileExist; // 0x95
		::System::Boolean isStopAndCallPrepare; // 0x96
		::System::Int32 seekFrame; // 0x98
		::Struct_2_071C692C54C58954 _ClipData_k__BackingField; // 0x9C
		::System::Int64 currentFrameNo; // 0xB0

		::System::Void _ctor(::MoleMole::VideoPlayerMono* mono)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VideoPlayerMono*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER__CTOR_OFFSET))(this, mono);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableUpdateLog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET))();
		}

		static ::System::Void set_EnableUpdateLog(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET))(value);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void LogUpdate(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_LOGUPDATE_OFFSET))(this, msg);
		}

		::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_LOG_OFFSET))(this, msg);
		}

		::System::Void LogError(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_LOGERROR_OFFSET))(this, msg);
		}

		::System::Void PrintOnScreen(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_PRINTONSCREEN_OFFSET))(this, msg);
		}

		::Struct_2_071C692C54C58954 get_ClipData()
		{
			return ((::Struct_2_071C692C54C58954(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_CLIPDATA_OFFSET))(this);
		}

		::System::Void set_ClipData(::Struct_2_071C692C54C58954 value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_071C692C54C58954))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_CLIPDATA_OFFSET))(this, value);
		}

		::Class_1_21DCD4640D389503_1* get_Simulate()
		{
			return ((::Class_1_21DCD4640D389503_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_SIMULATE_OFFSET))(this);
		}

		::System::Void set_Simulate(::Class_1_21DCD4640D389503_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_SIMULATE_OFFSET))(this, value);
		}

		::System::Void CheckInitMovieController(::System::Boolean autoSetURL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_CHECKINITMOVIECONTROLLER_OFFSET))(this, autoSetURL);
		}

		::System::Void SetDefaultParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SETDEFAULTPARAM_OFFSET))(this);
		}

		::System::Boolean isInitMovie()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_ISINITMOVIE_OFFSET))(this);
		}

		::System::Void DestroyMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_DESTROYMOVIE_OFFSET))(this);
		}

		::System::Void SetCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SETCALLBACK_OFFSET))(this);
		}

		::System::Void UnsetCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_UNSETCALLBACK_OFFSET))(this);
		}

		::System::Void OnStatusStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_ONSTATUSSTOP_OFFSET))(this);
		}

		::System::Void OnStatusPlayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_ONSTATUSPLAYEND_OFFSET))(this);
		}

		::System::Void OnLoopPointReached(::Class_1_21DCD4640D389503_1* playback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_ONLOOPPOINTREACHED_OFFSET))(this, playback);
		}

		::System::Void InternalCallPrepared()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLPREPARED_OFFSET))(this);
		}

		::System::Void InternalCallPlayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLPLAYEND_OFFSET))(this);
		}

		::System::Void InternalCallStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLSTOP_OFFSET))(this);
		}

		::System::Void Callback_OnPrepareCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_ONPREPARECOMPLETED_OFFSET))(this);
		}

		::System::Void Callback_PlayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_PLAYSTART_OFFSET))(this);
		}

		::System::Void Callback_PlayFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_PLAYFINISH_OFFSET))(this);
		}

		::System::Void Callback_OnSeekCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_ONSEEKCOMPLETED_OFFSET))(this);
		}

		::System::Void InternalPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALPLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_PAUSE_OFFSET))(this);
		}

		::System::Void Pause_1(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_PAUSE_1_OFFSET))(this, isPause);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_URL_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_isPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Void set_isLooping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_ISLOOPING_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Boolean get_waitForFirstFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET))(this);
		}

		::System::Void set_waitForFirstFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(this, value);
		}

		::System::Double get_length()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_LENGTH_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_TIME_OFFSET))(this);
		}

		::System::Int64 get_frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAME_OFFSET))(this);
		}

		::System::UInt64 get_frameCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_frameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(this, value);
		}

		::System::UInt32 get_width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_WIDTH_OFFSET))(this);
		}

		::System::UInt32 get_height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_HEIGHT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(this, value);
		}

		::UnityEngine::Video::VideoRenderMode get_renderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoRenderMode))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(this);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(this, value);
		}

		::System::String* get_targetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_targetMaterialProperty(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(this, value);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void SeekFrame(::System::Int32 seekFrameNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SEEKFRAME_OFFSET))(this, seekFrameNo);
		}

		::System::Void SeekTime(::System::Double seekTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SEEKTIME_OFFSET))(this, seekTime);
		}

		::System::Void SetAudioModeNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SETAUDIOMODENONE_OFFSET))(this);
		}

		::System::Void SetVideoClip(::UnityEngine::Video::VideoClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SETVIDEOCLIP_OFFSET))(this, clip);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_STEPFORWARD_OFFSET))(this);
		}

		::System::Void SetURL(::System::String* newUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SETURL_OFFSET))(this, newUrl);
		}

		::System::Void SetFileInternal(::System::String* newUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SETFILEINTERNAL_OFFSET))(this, newUrl);
		}

		::System::Boolean IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_ISREADY_OFFSET))(this);
		}

		::System::Boolean IsError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_ISERROR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsCanRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISCANRENDER_OFFSET))(this);
		}

		::UnityEngine::Renderer* GetTargetRender()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_GETTARGETRENDER_OFFSET))(this);
		}

		::System::Void SetRenderProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SETRENDERPROPERTY_OFFSET))(this);
		}

		::System::Void SetRenderTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_SETRENDERTEXTURE_OFFSET))(this);
		}

		::System::Void ReleaseTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_RELEASETEXTURE_OFFSET))(this);
		}

		::System::Void ClipChanged(::System::Boolean forceStop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_CLIPCHANGED_OFFSET))(this, forceStop);
		}

		::System::Boolean IsVideoSourceValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_ISVIDEOSOURCEVALID_OFFSET))(this);
		}

		::System::Boolean CheckLogVideoValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_CHECKLOGVIDEOVALID_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_PREPARE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_STOP_OFFSET))(this);
		}

		::System::Void StatusChangeEventFunc(::Class_1_21DCD4640D389503_1_Enum_3_61B6B3D4D8E7A2ED status)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_1_Enum_3_61B6B3D4D8E7A2ED))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_STATUSCHANGEEVENTFUNC_OFFSET))(this, status);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
