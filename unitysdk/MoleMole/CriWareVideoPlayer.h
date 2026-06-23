#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/MoleMole/IVideoPlayer.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"

class Class_1_5B8C638EC79D460D;
namespace CriWare { class CriManaMovieMaterial; }
namespace CriWare { class CriWareInitializer; }
namespace CriWare::CriMana { class Player; }
namespace MoleMole { class VideoPlayerMono; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }

#define MOLEMOLE_CRIWAREVIDEOPLAYER_CALLBACK_ONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x17E4F7D0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_CALLBACK_ONSEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x17E4FB80)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_CALLBACK_PLAYFINISH_OFFSET UNITYSDK_OFFSET(0x17E4FB30)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_CALLBACK_PLAYSTART_OFFSET UNITYSDK_OFFSET(0x17E4FE00)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_CHECKINITMOVIECONTROLLER_OFFSET UNITYSDK_OFFSET(0x17E4FFA0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_CHECKLOGVIDEOVALID_OFFSET UNITYSDK_OFFSET(0x17E4FE50)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_CLIPCHANGED_OFFSET UNITYSDK_OFFSET(0x17E53040)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x17E4CBF0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x17E4CA90)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_DESTROYMOVIE_OFFSET UNITYSDK_OFFSET(0x17E51660)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_FORCECLEARCRIWAREENGINE_OFFSET UNITYSDK_OFFSET(0x17E4BEA0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GETTARGETRENDER_OFFSET UNITYSDK_OFFSET(0x17E54020)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x17E4BA90)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x17E51C50)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x17E4BA70)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x17E4B9B0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x17E4BA10)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x17E4B950)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x17E4B4A0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISCANRENDER_OFFSET UNITYSDK_OFFSET(0x17E50770)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x17E4B570)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x17E4F820)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x17E502D0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x17E50270)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x17E4B360)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_MOVIE_OFFSET UNITYSDK_OFFSET(0x17E4B3D0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x17E51880)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E4D440)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x17E518C0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x17E518F0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x17E518A0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x17E518E0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x17E51890)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x17E4B510)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x17E51850)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x17E51860)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x17E4B430)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_INITCRIWAREENGINE_OFFSET UNITYSDK_OFFSET(0x17E4C3F0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_INTERNALCALLPLAYEND_OFFSET UNITYSDK_OFFSET(0x17E4E770)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_INTERNALCALLPREPARED_OFFSET UNITYSDK_OFFSET(0x17E4E9C0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_INTERNALCALLSTOP_OFFSET UNITYSDK_OFFSET(0x17E4E510)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_INTERNALPLAY_OFFSET UNITYSDK_OFFSET(0x17E50640)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ISERROR_OFFSET UNITYSDK_OFFSET(0x17E53950)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ISINITMOVIE_OFFSET UNITYSDK_OFFSET(0x17E50C50)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ISINIT_OFFSET UNITYSDK_OFFSET(0x17E4BD20)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ISPLAYERPREPARING_OFFSET UNITYSDK_OFFSET(0x17E4E7F0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ISREADY_OFFSET UNITYSDK_OFFSET(0x17E53550)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ISVIDEOSOURCEVALID_OFFSET UNITYSDK_OFFSET(0x17E54690)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17E53BF0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x17E4BC80)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_LOGUPDATE_OFFSET UNITYSDK_OFFSET(0x17E4BBA0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_LOG_OFFSET UNITYSDK_OFFSET(0x17E4BC30)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E53F60)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ONLOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x17E4E970)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ONLYCLEARRENDERPROPERTYTEXTURE_OFFSET UNITYSDK_OFFSET(0x17E542D0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ONSTATUSPLAYEND_OFFSET UNITYSDK_OFFSET(0x17E4E720)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_ONSTATUSSTOP_OFFSET UNITYSDK_OFFSET(0x17E4E4C0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x17E50BA0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x17E505F0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x17E4FCD0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x17E4FBD0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_PRINTONSCREEN_OFFSET UNITYSDK_OFFSET(0x17E4BCD0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_RELEASETEXTURE_OFFSET UNITYSDK_OFFSET(0x17E51020)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SEEKFRAME_OFFSET UNITYSDK_OFFSET(0x17E520B0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SEEKTIME_OFFSET UNITYSDK_OFFSET(0x17E52180)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETAUDIOMODENONE_OFFSET UNITYSDK_OFFSET(0x17E52530)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x17E4DBC0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETDECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x17E53430)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETDEFAULTPARAM_OFFSET UNITYSDK_OFFSET(0x17E4CDC0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETFILEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17E52A80)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETRENDERPROPERTY_OFFSET UNITYSDK_OFFSET(0x17E51900)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x17E4EA40)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETURL_OFFSET UNITYSDK_OFFSET(0x17E52920)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SETVIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x17E52830)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x17E51E80)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x17E4BA80)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x17E4CFF0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x17E4D900)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E4D6D0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x17E518D0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x17E4CFA0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x17E518B0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x17E4CF00)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x17E51870)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_STATUSCHANGEEVENTFUNC_OFFSET UNITYSDK_OFFSET(0x17E4E8B0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x17E528E0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x17E50DB0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER_UNSETCALLBACK_OFFSET UNITYSDK_OFFSET(0x17E4DFA0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E546F0)
#define MOLEMOLE_CRIWAREVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4CD50)
#define MOLEMOLE_CRIWAREVIDEOPLAYER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E54750)

namespace MoleMole
{
	inline static constexpr unsigned int CriWareVideoPlayer_TypeDefinitionIndex = 70061;

	class CriWareVideoPlayer : public ::MoleMole::IVideoPlayer
	{
	public:
		static ::CriWare::CriWareInitializer** StaticGet_InitializerObject()
		{
			return (::CriWare::CriWareInitializer**)Il2CppClass::FromTypeDefinitionIndex(CriWareVideoPlayer_TypeDefinitionIndex)->GetStaticField(0x44C90);
		}
		static ::System::Int32* StaticGet__ScreenMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriWareVideoPlayer_TypeDefinitionIndex)->GetStaticField(0x10A60);
		}
		static ::System::UInt32* StaticGet_textureTempCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CriWareVideoPlayer_TypeDefinitionIndex)->GetStaticField(0x10A64);
		}
		static ::System::Boolean* StaticGet_UseTempRT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriWareVideoPlayer_TypeDefinitionIndex)->GetStaticField(0x10A68);
		}
		// static const ::System::Int32 maxDecoders = 0x10; // 0x0
		::System::String* m_url; // 0x48
		::UnityEngine::RenderTexture* _texture; // 0x50
		::System::String* m_movieFile; // 0x58
		::UnityEngine::GameObject* _criManaMovieControllerGameObject; // 0x60
		::Class_1_5B8C638EC79D460D* _CriManaObject; // 0x68
		::UnityEngine::Renderer* _targetMaterialRenderer; // 0x70
		::System::String* _targetMaterialProperty; // 0x78
		::UnityEngine::RenderTexture* _targetTexture; // 0x80
		::UnityEngine::Rendering::RenderTargetIdentifier _targetTextureIdentifier; // 0x88
		::System::Boolean m_PlayPending; // 0xB0
		::System::Boolean _isCallPause; // 0xB1
		::System::Boolean isCallStop; // 0xB2
		::System::Boolean _isLoop; // 0xB3
		::System::Int32 currentFrameNo; // 0xB4
		::System::Single _playbackSpeed; // 0xB8
		::System::Int32 seekFrame; // 0xBC
		::System::Boolean m_isFileExist; // 0xC0
		::System::Boolean m_CanStartRendering; // 0xC1
		::System::Boolean _playOnAwake; // 0xC2
		::System::Boolean isSeeking; // 0xC3
		::UnityEngine::Video::VideoRenderMode _renderMode_k__BackingField; // 0xC4
		::UnityEngine::Rendering::RenderTargetIdentifier _localTextureIdentifier; // 0xC8
		::System::Boolean isStopAndCallPlay; // 0xF0
		::System::Boolean isStopAndCallPrepare; // 0xF1
		::System::Boolean m_CanStartPlaying; // 0xF2
		::System::Boolean m_PrepareInProgress; // 0xF3
		::System::Boolean _waitForFirstFrame_k__BackingField; // 0xF4
		::System::Boolean _needExecuteSrp; // 0xF5
		::System::Boolean _canCalledErrorCb; // 0xF6
		::System::Boolean isInitCallback; // 0xF7

		::System::Void _ctor(::MoleMole::VideoPlayerMono* mono)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VideoPlayerMono*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER__CTOR_OFFSET))(this, mono);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER__CCTOR_OFFSET))();
		}

		::System::Double get_length()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_LENGTH_OFFSET))(this);
		}

		::System::UInt32 get_width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_WIDTH_OFFSET))(this);
		}

		::System::UInt32 get_height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_HEIGHT_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TIME_OFFSET))(this);
		}

		::System::Int64 get_frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_FRAME_OFFSET))(this);
		}

		::System::UInt64 get_frameCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_frameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_FRAMERATE_OFFSET))(this);
		}

		static ::System::Boolean get_EnableUpdateLog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET))();
		}

		static ::System::Void set_EnableUpdateLog(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET))(value);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void LogUpdate(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_LOGUPDATE_OFFSET))(this, msg);
		}

		::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_LOG_OFFSET))(this, msg);
		}

		::System::Void LogError(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_LOGERROR_OFFSET))(this, msg);
		}

		::System::Void PrintOnScreen(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_PRINTONSCREEN_OFFSET))(this, msg);
		}

		static ::System::Boolean IsInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ISINIT_OFFSET))();
		}

		static ::System::Void ForceClearCriWareEngine()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_FORCECLEARCRIWAREENGINE_OFFSET))();
		}

		static ::System::Void InitCriWareEngine()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_INITCRIWAREENGINE_OFFSET))();
		}

		static ::System::Int32 criFs_GetNumUsedLoaders(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CRIFS_GETNUMUSEDLOADERS_OFFSET))(cur, max, limit);
		}

		static ::System::Int32 criFs_GetNumUsedInstallers(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(cur, max, limit);
		}

		::System::Void SetDefaultParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETDEFAULTPARAM_OFFSET))(this);
		}

		::System::Void SetCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETCALLBACK_OFFSET))(this);
		}

		::System::Void UnsetCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_UNSETCALLBACK_OFFSET))(this);
		}

		::System::Void OnStatusStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ONSTATUSSTOP_OFFSET))(this);
		}

		::System::Void OnStatusPlayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ONSTATUSPLAYEND_OFFSET))(this);
		}

		static ::System::Boolean IsPlayerPreparing(::CriWare::CriMana::Player* player)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ISPLAYERPREPARING_OFFSET))(player);
		}

		::System::Void StatusChangeEventFunc(::CriWare::CriMana::Player_Status status)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_Status))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_STATUSCHANGEEVENTFUNC_OFFSET))(this, status);
		}

		::System::Void OnLoopPointReached(::CriWare::CriMana::Player* player)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ONLOOPPOINTREACHED_OFFSET))(this, player);
		}

		::System::Void InternalCallPrepared()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_INTERNALCALLPREPARED_OFFSET))(this);
		}

		::System::Void InternalCallPlayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_INTERNALCALLPLAYEND_OFFSET))(this);
		}

		::System::Void InternalCallStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_INTERNALCALLSTOP_OFFSET))(this);
		}

		::System::Void Callback_OnPrepareCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CALLBACK_ONPREPARECOMPLETED_OFFSET))(this);
		}

		::System::Void Callback_PlayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CALLBACK_PLAYSTART_OFFSET))(this);
		}

		::System::Void Callback_PlayFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CALLBACK_PLAYFINISH_OFFSET))(this);
		}

		::System::Void Callback_OnSeekCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CALLBACK_ONSEEKCOMPLETED_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void InternalPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_INTERNALPLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_PAUSE_OFFSET))(this);
		}

		::System::Void Pause_1(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_PAUSE_1_OFFSET))(this, isPause);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_STOP_OFFSET))(this);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_URL_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_isPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Void set_isLooping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_ISLOOPING_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Boolean get_waitForFirstFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET))(this);
		}

		::System::Void set_waitForFirstFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(this, value);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(this, value);
		}

		::UnityEngine::Video::VideoRenderMode get_renderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoRenderMode))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(this);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(this, value);
		}

		::System::String* get_targetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_targetMaterialProperty(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(this, value);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void SeekFrame(::System::Int32 seekFrameNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SEEKFRAME_OFFSET))(this, seekFrameNo);
		}

		::System::Void SeekTime(::System::Double seekTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SEEKTIME_OFFSET))(this, seekTime);
		}

		::System::Void SetAudioModeNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETAUDIOMODENONE_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_PREPARE_OFFSET))(this);
		}

		::System::Void SetVideoClip(::UnityEngine::Video::VideoClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETVIDEOCLIP_OFFSET))(this, clip);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_STEPFORWARD_OFFSET))(this);
		}

		::System::Void SetURL(::System::String* newUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETURL_OFFSET))(this, newUrl);
		}

		::System::Void SetDecryptionKey(::System::UInt64 decryptionKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETDECRYPTIONKEY_OFFSET))(this, decryptionKey);
		}

		::System::Void SetFileInternal(::System::String* newUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETFILEINTERNAL_OFFSET))(this, newUrl);
		}

		::System::Boolean IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ISREADY_OFFSET))(this);
		}

		::System::Boolean IsError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ISERROR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsCanRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_ISCANRENDER_OFFSET))(this);
		}

		::UnityEngine::Renderer* GetTargetRender()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GETTARGETRENDER_OFFSET))(this);
		}

		::System::Void SetRenderProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETRENDERPROPERTY_OFFSET))(this);
		}

		::System::Void OnlyClearRenderPropertyTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ONLYCLEARRENDERPROPERTYTEXTURE_OFFSET))(this);
		}

		::System::Void SetRenderTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_SETRENDERTEXTURE_OFFSET))(this);
		}

		::System::Void ReleaseTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_RELEASETEXTURE_OFFSET))(this);
		}

		::System::Void ClipChanged(::System::Boolean forceStop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CLIPCHANGED_OFFSET))(this, forceStop);
		}

		::System::Boolean IsVideoSourceValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ISVIDEOSOURCEVALID_OFFSET))(this);
		}

		::System::Boolean CheckLogVideoValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CHECKLOGVIDEOVALID_OFFSET))(this);
		}

		::CriWare::CriManaMovieMaterial* get_movie()
		{
			return ((::CriWare::CriManaMovieMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_GET_MOVIE_OFFSET))(this);
		}

		::System::Void CheckInitMovieController(::System::Boolean autoSetURL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_CHECKINITMOVIECONTROLLER_OFFSET))(this, autoSetURL);
		}

		::System::Boolean isInitMovie()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_ISINITMOVIE_OFFSET))(this);
		}

		::System::Void DestroyMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER_DESTROYMOVIE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIWAREVIDEOPLAYER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
