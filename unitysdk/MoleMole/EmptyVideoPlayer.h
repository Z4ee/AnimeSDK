#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_21DCD4640D389503_1_Enum_3_C2258C71DA000E08.h"
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

#define MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_ONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BDAEC00)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_ONSEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BDAECC0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_PLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1BDAEC70)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CALLBACK_PLAYSTART_OFFSET UNITYSDK_OFFSET(0x1BDAED10)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CHECKINITMOVIECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1BDAE0F0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CHECKLOGVIDEOVALID_OFFSET UNITYSDK_OFFSET(0x12985AE0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_CLIPCHANGED_OFFSET UNITYSDK_OFFSET(0x12985780)
#define MOLEMOLE_EMPTYVIDEOPLAYER_DESTROYMOVIE_OFFSET UNITYSDK_OFFSET(0x1BDAE760)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GETTARGETRENDER_OFFSET UNITYSDK_OFFSET(0x12984880)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_CLIPDATA_OFFSET UNITYSDK_OFFSET(0x1BDAE020)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1BDADED0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1BDAF210)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x1BDADEB0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1BDAF0B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1BDAF0D0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x1BDAF090)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1BDAF140)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISCANRENDER_OFFSET UNITYSDK_OFFSET(0x12984820)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1BDAEFF0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1BDAEC50)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1BDAEE60)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x1BDAEE80)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1BDAF050)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1BDAE6D0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1BDAF010)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1BDAF1C0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1BDAE040)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BDAF200)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1BDAF1A0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BDAF1E0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1BDAF190)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1BDAF070)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x1BDAEFE0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x1BDAF030)
#define MOLEMOLE_EMPTYVIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1BDAF0F0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLPLAYEND_OFFSET UNITYSDK_OFFSET(0x1BDAEAB0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLPREPARED_OFFSET UNITYSDK_OFFSET(0x1BDAEB80)
#define MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALCALLSTOP_OFFSET UNITYSDK_OFFSET(0x1BDAE9A0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_INTERNALPLAY_OFFSET UNITYSDK_OFFSET(0x1BDAED60)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ISERROR_OFFSET UNITYSDK_OFFSET(0x1BDAF530)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ISINITMOVIE_OFFSET UNITYSDK_OFFSET(0x1BDAE1D0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ISREADY_OFFSET UNITYSDK_OFFSET(0x1BDAF4B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ISVIDEOSOURCEVALID_OFFSET UNITYSDK_OFFSET(0x12985950)
#define MOLEMOLE_EMPTYVIDEOPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BDAF570)
#define MOLEMOLE_EMPTYVIDEOPLAYER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1BDADF80)
#define MOLEMOLE_EMPTYVIDEOPLAYER_LOGUPDATE_OFFSET UNITYSDK_OFFSET(0x1BDADEE0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_LOG_OFFSET UNITYSDK_OFFSET(0x1BDADF30)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x129845C0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ONLOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1BDAEB30)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ONSTATUSPLAYEND_OFFSET UNITYSDK_OFFSET(0x1BDAEA60)
#define MOLEMOLE_EMPTYVIDEOPLAYER_ONSTATUSSTOP_OFFSET UNITYSDK_OFFSET(0x1BDAE950)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x1BDAEF40)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1BDAEEE0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x129859B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x12985C30)
#define MOLEMOLE_EMPTYVIDEOPLAYER_PRINTONSCREEN_OFFSET UNITYSDK_OFFSET(0x1BDADFD0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_RELEASETEXTURE_OFFSET UNITYSDK_OFFSET(0x129846A0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SEEKFRAME_OFFSET UNITYSDK_OFFSET(0x1BDAF230)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SEEKTIME_OFFSET UNITYSDK_OFFSET(0x1BDAF2A0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETAUDIOMODENONE_OFFSET UNITYSDK_OFFSET(0x1BDAE210)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BDAE480)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETDEFAULTPARAM_OFFSET UNITYSDK_OFFSET(0x1BDAE330)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETFILEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BDAE250)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETRENDERPROPERTY_OFFSET UNITYSDK_OFFSET(0x12984B10)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x12985030)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETURL_OFFSET UNITYSDK_OFFSET(0x1BDAF430)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SETVIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x1BDAF320)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_CLIPDATA_OFFSET UNITYSDK_OFFSET(0x1BDAE030)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1BDAF220)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x1BDADEC0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1BDAE670)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1BDAE6F0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1BDAF020)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1BDAF1D0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1BDAE050)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BDAE620)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1BDAF1B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BDAF1F0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x1BDAF040)
#define MOLEMOLE_EMPTYVIDEOPLAYER_STATUSCHANGEEVENTFUNC_OFFSET UNITYSDK_OFFSET(0x12985D00)
#define MOLEMOLE_EMPTYVIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x1BDAF3F0)
#define MOLEMOLE_EMPTYVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x12985860)
#define MOLEMOLE_EMPTYVIDEOPLAYER_UNSETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BDAE7B0)
#define MOLEMOLE_EMPTYVIDEOPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12985DC0)
#define MOLEMOLE_EMPTYVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDAE060)
#define MOLEMOLE_EMPTYVIDEOPLAYER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12985DD0)

namespace MoleMole
{
	inline static constexpr unsigned int EmptyVideoPlayer_TypeDefinitionIndex = 46288;

	class EmptyVideoPlayer : public ::MoleMole::IVideoPlayer
	{
	public:
		static ::System::UInt32* StaticGet_textureTempCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EmptyVideoPlayer_TypeDefinitionIndex)->GetStaticField(0x12810);
		}
		::Class_1_21DCD4640D389503_1* _Simulate_k__BackingField; // 0x48
		::System::String* m_url; // 0x50
		::System::String* _targetMaterialProperty; // 0x58
		::System::String* m_movieFile; // 0x60
		::UnityEngine::Renderer* _targetMaterialRenderer; // 0x68
		::UnityEngine::RenderTexture* _targetTexture; // 0x70
		::UnityEngine::RenderTexture* _texture; // 0x78
		::System::Int64 currentFrameNo; // 0x80
		::System::Single _playbackSpeed; // 0x88
		::System::Int32 seekFrame; // 0x8C
		::System::Boolean _isLoop; // 0x90
		::System::Boolean _isCallPause; // 0x91
		::System::Boolean m_PrepareInProgress; // 0x92
		::System::Boolean isCallStop; // 0x93
		::System::Boolean _enabled; // 0x94
		::System::Boolean isStopAndCallPlay; // 0x95
		::System::Boolean m_PlayPending; // 0x96
		::Struct_2_071C692C54C58954 _ClipData_k__BackingField; // 0x98
		::System::Boolean isStopAndCallPrepare; // 0xA8
		::System::Boolean m_isFileExist; // 0xA9
		::System::Boolean m_CanStartPlaying; // 0xAA
		::System::Boolean _playOnAwake; // 0xAB
		::System::Boolean isSeeking; // 0xAC
		::System::Boolean isInitCallback; // 0xAD
		::System::Boolean _waitForFirstFrame_k__BackingField; // 0xAE
		::System::Boolean m_CanStartRendering; // 0xAF
		::UnityEngine::Video::VideoRenderMode _renderMode_k__BackingField; // 0xB0

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

		::System::Void StatusChangeEventFunc(::Class_1_21DCD4640D389503_1_Enum_3_C2258C71DA000E08 status)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_1_Enum_3_C2258C71DA000E08))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER_STATUSCHANGEEVENTFUNC_OFFSET))(this, status);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYVIDEOPLAYER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
