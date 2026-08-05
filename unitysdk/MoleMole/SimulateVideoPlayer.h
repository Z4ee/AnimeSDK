#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/IVideoPlayer.h"
#include "unitysdk/Struct_2_071C692C54C58954.h"
#include "unitysdk/Struct_2_A11167748A3D1C6F.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"

class Class_1_21DCD4640D389503_1;
namespace MoleMole { class VideoPlayerMono; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }

#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_CLIPDATA_OFFSET UNITYSDK_OFFSET(0x190B2870)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x190B2650)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x190B37C0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x190B2630)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x190B3390)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x190B3410)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x190B3310)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x190B3580)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISCANRENDER_OFFSET UNITYSDK_OFFSET(0x190B3860)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x190B3030)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x190B2FD0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x190B2FA0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x190B3000)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x190B3210)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x190B3490)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x190B2F70)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x190B30D0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x190B3890)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_SIMULATEVIDEOPLAYBACK_OFFSET UNITYSDK_OFFSET(0x190B28B0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x190B3720)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x190B35E0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x190B3680)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x190B35B0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x190B3290)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x190B2F90)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_USESIMULATE_OFFSET UNITYSDK_OFFSET(0x190B2890)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x190B3170)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x190B3550)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x190B5010)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x190B27D0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_LOGUPDATE_OFFSET UNITYSDK_OFFSET(0x190B2730)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_LOG_OFFSET UNITYSDK_OFFSET(0x190B2780)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_NATIVEPLAYERONPLAYSTART_OFFSET UNITYSDK_OFFSET(0x190B5240)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_NATIVEPLAYERONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x190B51D0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190B50A0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATELOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x190B2990)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATEONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x190B2920)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATESEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x190B28D0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x190B3A70)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x190B3A10)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x190B3990)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_PRINTONSCREEN_OFFSET UNITYSDK_OFFSET(0x190B2820)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SEEKFRAME_OFFSET UNITYSDK_OFFSET(0x190B4DF0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SEEKTIME_OFFSET UNITYSDK_OFFSET(0x190B4E80)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SETAUDIOMODENONE_OFFSET UNITYSDK_OFFSET(0x190B3930)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SETURL_OFFSET UNITYSDK_OFFSET(0x190B3B70)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SETVIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x190B4F40)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_CLIPDATA_OFFSET UNITYSDK_OFFSET(0x190B2880)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x190B37F0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x190B2640)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x190B3040)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x190B34C0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x190B2F80)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x190B3100)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x190B38C0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_SIMULATEVIDEOPLAYBACK_OFFSET UNITYSDK_OFFSET(0x190B28C0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x190B3750)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x190B3610)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x190B36B0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_USESIMULATE_OFFSET UNITYSDK_OFFSET(0x190B28A0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x190B31A0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x190B4FB0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x190B3AF0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0x190B4680)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SWITCHSIMULATE_OFFSET UNITYSDK_OFFSET(0x190B3D80)
#define MOLEMOLE_SIMULATEVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x190B29E0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190B52B0)

namespace MoleMole
{
	inline static constexpr unsigned int SimulateVideoPlayer_TypeDefinitionIndex = 49990;

	class SimulateVideoPlayer : public ::MoleMole::IVideoPlayer
	{
	public:
		::MoleMole::IVideoPlayer* _Player_k__BackingField; // 0x48
		::System::String* _url; // 0x50
		::Struct_2_A11167748A3D1C6F videoFileUrl; // 0x58
		::Class_1_21DCD4640D389503_1* _SimulateVideoPlayback_k__BackingField; // 0x78
		::Struct_2_071C692C54C58954 _ClipData_k__BackingField; // 0x80
		::System::Boolean _Looping; // 0x90
		::System::Boolean _UseSimulate_k__BackingField; // 0x91

		::System::Void _ctor(::MoleMole::VideoPlayerMono* mono, ::MoleMole::IVideoPlayer* player)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VideoPlayerMono*, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER__CTOR_OFFSET))(this, mono, player);
		}

		static ::System::Boolean get_EnableUpdateLog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET))();
		}

		static ::System::Void set_EnableUpdateLog(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET))(value);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void LogUpdate(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_LOGUPDATE_OFFSET))(this, msg);
		}

		::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_LOG_OFFSET))(this, msg);
		}

		::System::Void LogError(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_LOGERROR_OFFSET))(this, msg);
		}

		::System::Void PrintOnScreen(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_PRINTONSCREEN_OFFSET))(this, msg);
		}

		::Struct_2_071C692C54C58954 get_ClipData()
		{
			return ((::Struct_2_071C692C54C58954(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_CLIPDATA_OFFSET))(this);
		}

		::System::Void set_ClipData(::Struct_2_071C692C54C58954 value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_071C692C54C58954))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_CLIPDATA_OFFSET))(this, value);
		}

		::System::Boolean get_UseSimulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_USESIMULATE_OFFSET))(this);
		}

		::System::Void set_UseSimulate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_USESIMULATE_OFFSET))(this, value);
		}

		::Class_1_21DCD4640D389503_1* get_SimulateVideoPlayback()
		{
			return ((::Class_1_21DCD4640D389503_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_SIMULATEVIDEOPLAYBACK_OFFSET))(this);
		}

		::System::Void set_SimulateVideoPlayback(::Class_1_21DCD4640D389503_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_SIMULATEVIDEOPLAYBACK_OFFSET))(this, value);
		}

		::System::Void OnSimulateSeekCompleted(::Class_1_21DCD4640D389503_1* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATESEEKCOMPLETED_OFFSET))(this, obj);
		}

		::System::Void OnSimulateOnPlayFinish(::Class_1_21DCD4640D389503_1* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATEONPLAYFINISH_OFFSET))(this, obj);
		}

		::System::Void OnSimulateLoopPointReached(::Class_1_21DCD4640D389503_1* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATELOOPPOINTREACHED_OFFSET))(this, obj);
		}

		::MoleMole::IVideoPlayer* get_Player()
		{
			return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_Player(::MoleMole::IVideoPlayer* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYER_OFFSET))(this, value);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_URL_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_isPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Void set_isLooping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ISLOOPING_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Boolean get_waitForFirstFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET))(this);
		}

		::System::Void set_waitForFirstFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(this, value);
		}

		::System::Double get_length()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_LENGTH_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TIME_OFFSET))(this);
		}

		::System::Int64 get_frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAME_OFFSET))(this);
		}

		::System::UInt64 get_frameCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_frameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(this, value);
		}

		::System::UInt32 get_width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_WIDTH_OFFSET))(this);
		}

		::System::UInt32 get_height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_HEIGHT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(this);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(this, value);
		}

		::System::String* get_targetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_targetMaterialProperty(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(this, value);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISCANRENDER_OFFSET))(this);
		}

		::UnityEngine::Video::VideoRenderMode get_renderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoRenderMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::System::Void SetAudioModeNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SETAUDIOMODENONE_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_PREPARE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_PAUSE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_STOP_OFFSET))(this);
		}

		::System::Void SetURL(::System::String* newUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SETURL_OFFSET))(this, newUrl);
		}

		::System::Void SeekFrame(::System::Int32 seekFrameNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SEEKFRAME_OFFSET))(this, seekFrameNo);
		}

		::System::Void SeekTime(::System::Double seekTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SEEKTIME_OFFSET))(this, seekTime);
		}

		::System::Void SetVideoClip(::UnityEngine::Video::VideoClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SETVIDEOCLIP_OFFSET))(this, clip);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_STEPFORWARD_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SwitchSimulate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SWITCHSIMULATE_OFFSET))(this);
		}

		::System::Void SwitchPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SWITCHPLAYER_OFFSET))(this);
		}

		::System::Void NativePlayerOnPrepareCompleted(::MoleMole::IVideoPlayer* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_NATIVEPLAYERONPREPARECOMPLETED_OFFSET))(this, obj);
		}

		::System::Void NativePlayerOnPlayStart(::MoleMole::IVideoPlayer* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_NATIVEPLAYERONPLAYSTART_OFFSET))(this, obj);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
