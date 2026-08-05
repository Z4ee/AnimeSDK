#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/IVideoPlayer.h"
#include "unitysdk/Struct_2_A11167748A3D1C6F.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"

namespace MoleMole { class VideoPlayerMono; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }

#define MOLEMOLE_NAPVIDEOPLAYER_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x190A2D10)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x190A3AB0)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x190A2CF0)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x190A3730)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x190A3760)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x190A3700)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x190A3870)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_ISCANRENDER_OFFSET UNITYSDK_OFFSET(0x190A3B50)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x190A34C0)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x190A3460)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x190A3430)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x190A3490)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x190A36A0)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x190A3790)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x190A2E70)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x190A3560)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x190A3B80)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x190A3A10)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x190A38D0)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x190A3970)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x190A38A0)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x190A36D0)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x190A3400)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x190A3600)
#define MOLEMOLE_NAPVIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x190A3840)
#define MOLEMOLE_NAPVIDEOPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x190A4090)
#define MOLEMOLE_NAPVIDEOPLAYER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x190A2DD0)
#define MOLEMOLE_NAPVIDEOPLAYER_LOGUPDATE_OFFSET UNITYSDK_OFFSET(0x190A2D30)
#define MOLEMOLE_NAPVIDEOPLAYER_LOG_OFFSET UNITYSDK_OFFSET(0x190A2D80)
#define MOLEMOLE_NAPVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190A40F0)
#define MOLEMOLE_NAPVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x190A3D40)
#define MOLEMOLE_NAPVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x190A3CE0)
#define MOLEMOLE_NAPVIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x190A3C80)
#define MOLEMOLE_NAPVIDEOPLAYER_PRINTONSCREEN_OFFSET UNITYSDK_OFFSET(0x190A2E20)
#define MOLEMOLE_NAPVIDEOPLAYER_SEEKFRAME_OFFSET UNITYSDK_OFFSET(0x190A3ED0)
#define MOLEMOLE_NAPVIDEOPLAYER_SEEKTIME_OFFSET UNITYSDK_OFFSET(0x190A3F40)
#define MOLEMOLE_NAPVIDEOPLAYER_SETAUDIOMODENONE_OFFSET UNITYSDK_OFFSET(0x190A3C20)
#define MOLEMOLE_NAPVIDEOPLAYER_SETURL_OFFSET UNITYSDK_OFFSET(0x190A3E00)
#define MOLEMOLE_NAPVIDEOPLAYER_SETVIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x190A3FC0)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x190A2D20)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x190A3AE0)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x190A2D00)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x190A34F0)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x190A37C0)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x190A2E80)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x190A3590)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x190A3BB0)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x190A3A40)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x190A3900)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x190A39A0)
#define MOLEMOLE_NAPVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x190A3630)
#define MOLEMOLE_NAPVIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x190A4030)
#define MOLEMOLE_NAPVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x190A3DA0)
#define MOLEMOLE_NAPVIDEOPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A41B0)
#define MOLEMOLE_NAPVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x190A2E90)
#define MOLEMOLE_NAPVIDEOPLAYER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190A41C0)

namespace MoleMole
{
	inline static constexpr unsigned int NapVideoPlayer_TypeDefinitionIndex = 52133;

	class NapVideoPlayer : public ::MoleMole::IVideoPlayer
	{
	public:
		static ::System::Boolean* StaticGet__EnableUpdateLog_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapVideoPlayer_TypeDefinitionIndex)->GetStaticField(0x10A70);
		}
		::System::String* _url; // 0x48
		::MoleMole::IVideoPlayer* _Player_k__BackingField; // 0x50
		::Struct_2_A11167748A3D1C6F videoFileUrl; // 0x58
		::System::String* _DebugName_k__BackingField; // 0x78

		::System::Void _ctor(::MoleMole::VideoPlayerMono* mono, ::MoleMole::IVideoPlayer* player)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VideoPlayerMono*, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER__CTOR_OFFSET))(this, mono, player);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableUpdateLog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET))();
		}

		static ::System::Void set_EnableUpdateLog(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET))(value);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void set_DebugName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_DEBUGNAME_OFFSET))(this, value);
		}

		::System::Void LogUpdate(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_LOGUPDATE_OFFSET))(this, msg);
		}

		::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_LOG_OFFSET))(this, msg);
		}

		::System::Void LogError(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_LOGERROR_OFFSET))(this, msg);
		}

		::System::Void PrintOnScreen(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_PRINTONSCREEN_OFFSET))(this, msg);
		}

		::MoleMole::IVideoPlayer* get_Player()
		{
			return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_Player(::MoleMole::IVideoPlayer* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_PLAYER_OFFSET))(this, value);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_URL_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_isPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Void set_isLooping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_ISLOOPING_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Boolean get_waitForFirstFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET))(this);
		}

		::System::Void set_waitForFirstFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(this, value);
		}

		::System::Double get_length()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_LENGTH_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_TIME_OFFSET))(this);
		}

		::System::Int64 get_frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_FRAME_OFFSET))(this);
		}

		::System::UInt64 get_frameCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_frameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(this, value);
		}

		::System::UInt32 get_width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_WIDTH_OFFSET))(this);
		}

		::System::UInt32 get_height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_HEIGHT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(this);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(this, value);
		}

		::System::String* get_targetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_targetMaterialProperty(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(this, value);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_ISCANRENDER_OFFSET))(this);
		}

		::UnityEngine::Video::VideoRenderMode get_renderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoRenderMode))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::System::Void SetAudioModeNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SETAUDIOMODENONE_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_PREPARE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_PAUSE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_STOP_OFFSET))(this);
		}

		::System::Void SetURL(::System::String* newUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SETURL_OFFSET))(this, newUrl);
		}

		::System::Void SeekFrame(::System::Int32 seekFrameNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SEEKFRAME_OFFSET))(this, seekFrameNo);
		}

		::System::Void SeekTime(::System::Double seekTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SEEKTIME_OFFSET))(this, seekTime);
		}

		::System::Void SetVideoClip(::UnityEngine::Video::VideoClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_SETVIDEOCLIP_OFFSET))(this, clip);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_STEPFORWARD_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPVIDEOPLAYER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
