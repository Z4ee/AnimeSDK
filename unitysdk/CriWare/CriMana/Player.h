#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/CriWare/CriMana/Player_AudioTrack.h"
#include "unitysdk/CriWare/CriMana/Player_CriManaUnityPlayer_RenderEventAction.h"
#include "unitysdk/CriWare/CriMana/Player_SetMode.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/CriWare/CriMana/Player_TimerType.h"
#include "unitysdk/System/Nullable_1.h"

namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExPlayer; }
namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriManaMovieMaterialBase; }
namespace CriWare { class CriManaMoviePlayerHolder; }
namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana { class Player_CuePointCallback; }
namespace CriWare::CriMana { class Player_CuePointCallbackFromNativeDelegate; }
namespace CriWare::CriMana { class Player_LoopPointCallback; }
namespace CriWare::CriMana { class Player_ShaderDispatchCallback; }
namespace CriWare::CriMana { class Player_StatusChangeCallback; }
namespace CriWare::CriMana { class Player_SubtitleChangeCallback; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }

#define CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E312440)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE0348BF1B_OFFSET UNITYSDK_OFFSET(0x1E310830)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE165B6B70_OFFSET UNITYSDK_OFFSET(0x1E30E0D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE18BFCB88_OFFSET UNITYSDK_OFFSET(0x1E30F620)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1E785A43_OFFSET UNITYSDK_OFFSET(0x1E312380)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1EBB12C5_OFFSET UNITYSDK_OFFSET(0x1E310610)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1FF2F5BE_OFFSET UNITYSDK_OFFSET(0x1E3103F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE27ED314F_OFFSET UNITYSDK_OFFSET(0x1E3128F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE328F2911_OFFSET UNITYSDK_OFFSET(0x1E30FA30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE362A826C_OFFSET UNITYSDK_OFFSET(0x1E3126E0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE3CE8CE6A_OFFSET UNITYSDK_OFFSET(0x1E312760)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE419ECAF8_OFFSET UNITYSDK_OFFSET(0x1E312870)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE4331E077_OFFSET UNITYSDK_OFFSET(0x1E30FE30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE61523A0C_OFFSET UNITYSDK_OFFSET(0x1E3125D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE662A91B8_OFFSET UNITYSDK_OFFSET(0x1E310B70)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE705B8C6D_OFFSET UNITYSDK_OFFSET(0x1E310040)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE725ED4B4_OFFSET UNITYSDK_OFFSET(0x1E3127F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7779586C_OFFSET UNITYSDK_OFFSET(0x1E310A40)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_OFFSET UNITYSDK_OFFSET(0x1E30FC10)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE95A85424_OFFSET UNITYSDK_OFFSET(0x1E30E040)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE966C4BA9_OFFSET UNITYSDK_OFFSET(0x1E310720)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREAB576D15_OFFSET UNITYSDK_OFFSET(0x1E310150)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREABF659EC_OFFSET UNITYSDK_OFFSET(0x1E312210)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBB898C91_OFFSET UNITYSDK_OFFSET(0x1E30F370)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBD24DE27_OFFSET UNITYSDK_OFFSET(0x1E30FF40)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_OFFSET UNITYSDK_OFFSET(0x1E30FCA0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC5A3A88D_OFFSET UNITYSDK_OFFSET(0x1E310940)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC7C5CC77_OFFSET UNITYSDK_OFFSET(0x1E310CF0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARECEA2FA98_OFFSET UNITYSDK_OFFSET(0x1E312970)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED30C9C6F_OFFSET UNITYSDK_OFFSET(0x1E310500)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED99932F6_OFFSET UNITYSDK_OFFSET(0x1E3102E0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED9F7168D_OFFSET UNITYSDK_OFFSET(0x1E312650)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREE2DF1163_OFFSET UNITYSDK_OFFSET(0x1E312300)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEDB46019_OFFSET UNITYSDK_OFFSET(0x1E30F990)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEFA5210A_OFFSET UNITYSDK_OFFSET(0x1E30F720)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREFD186F02_OFFSET UNITYSDK_OFFSET(0x1E30DA60)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET UNITYSDK_OFFSET(0x1E3120E0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1E30D4A0)
#define CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E312160)
#define CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET UNITYSDK_OFFSET(0x1E30F3F0)
#define CRIWARE_CRIMANA_PLAYER_DISPOSERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x1E30E960)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E30E1C0)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E30E900)
#define CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E30E150)
#define CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1E3108C0)
#define CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1E3106A0)
#define CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1E3109C0)
#define CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x1E310480)
#define CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x1E30D650)
#define CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1E30D690)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEX3DSOURCEFORAMBISONICS_OFFSET UNITYSDK_OFFSET(0x1E30D7D0)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1E30D7C0)
#define CRIWARE_CRIMANA_PLAYER_GET_FRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1E30D700)
#define CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1E3120D0)
#define CRIWARE_CRIMANA_PLAYER_GET_ISFRAMEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E30D6D0)
#define CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x1E30D670)
#define CRIWARE_CRIMANA_PLAYER_GET_MOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1E30D6E0)
#define CRIWARE_CRIMANA_PLAYER_GET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x1E30D7F0)
#define CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1E30D4E0)
#define CRIWARE_CRIMANA_PLAYER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1E30D720)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E30D790)
#define CRIWARE_CRIMANA_PLAYER_GET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1E30D7E0)
#define CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1E30D6B0)
#define CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x1E310AC0)
#define CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E310D80)
#define CRIWARE_CRIMANA_PLAYER_INVOKEPLAYERSTATUSCHECK_OFFSET UNITYSDK_OFFSET(0x1E30D520)
#define CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1E30F6A0)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x1E311F20)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET UNITYSDK_OFFSET(0x1E312290)
#define CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET UNITYSDK_OFFSET(0x1E30FD40)
#define CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1E311DA0)
#define CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1E3129F0)
#define CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E30F070)
#define CRIWARE_CRIMANA_PLAYER_PREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1E30EF90)
#define CRIWARE_CRIMANA_PLAYER_PREPARENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x1E30EA80)
#define CRIWARE_CRIMANA_PLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1E30EA30)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x1E3101E0)
#define CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E30FAF0)
#define CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1E310AE0)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1E3107A0)
#define CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET UNITYSDK_OFFSET(0x1E30F7A0)
#define CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1E30FEB0)
#define CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET UNITYSDK_OFFSET(0x1E30FFC0)
#define CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1E3100C0)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1E310580)
#define CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1E310360)
#define CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x1E30D660)
#define CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1E30D6A0)
#define CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x1E30D680)
#define CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x1E30D800)
#define CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1E30D4F0)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E30D7A0)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET UNITYSDK_OFFSET(0x1E30D7B0)
#define CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1E30D6C0)
#define CRIWARE_CRIMANA_PLAYER_START_OFFSET UNITYSDK_OFFSET(0x1E30F190)
#define CRIWARE_CRIMANA_PLAYER_STOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x1E30F420)
#define CRIWARE_CRIMANA_PLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1E30F290)
#define CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E312090)
#define CRIWARE_CRIMANA_PLAYER_UPDATENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x1E30EBE0)
#define CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET UNITYSDK_OFFSET(0x1E310BF0)
#define CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E311D80)
#define CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E30DAE0)
#define CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E30D810)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_TypeDefinitionIndex = 34401;

	class Player : public ::CriWare::CriDisposable
	{
	public:
		static ::CriWare::CriMana::Player** StaticGet_updatingPlayer()
		{
			return (::CriWare::CriMana::Player**)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0x27940);
		}
		static ::System::Boolean* StaticGet_DebugSkipPlayerUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0x8340);
		}
		::CriWare::CriAtomEx3dSource* _atomEx3Dsource; // 0x20
		::CriWare::CriMana::Player_CuePointCallback* cuePointCallback; // 0x28
		::CriWare::CriMana::Player_ShaderDispatchCallback* _shaderDispatchCallback; // 0x30
		::CriWare::CriMana::Player_StatusChangeCallback* statusChangeCallback; // 0x38
		::CriWare::CriAtomExPlayer* _atomExPlayer; // 0x40
		::CriWare::CriMana::Player_LoopPointCallback* loopPointReached; // 0x48
		::CriWare::CriMana::Player_SubtitleChangeCallback* OnSubtitleChanged; // 0x50
		::CriWare::CriMana::MovieInfo* _movieInfo; // 0x58
		::CriWare::CriManaMoviePlayerHolder* _playerHolder_k__BackingField; // 0x60
		::CriWare::CriMana::FrameInfo* _frameInfo; // 0x68
		::CriWare::CriMana::Detail::RendererResource* rendererResource; // 0x70
		::System::Nullable_1<::CriWare::CriMana::Player_Status> lastNativeStatus; // 0x78
		::CriWare::CriMana::Player_Status internalrequiredStatus; // 0x80
		::System::Int32 _subtitleSize_k__BackingField; // 0x84
		::System::Int32 _maxFrameDrop_k__BackingField; // 0x88
		::CriWare::CriMana::Player_TimerType _timerType; // 0x8C
		::CriWare::CriMana::Player_Status _nativeStatus; // 0x90
		::System::Nullable_1<::CriWare::CriMana::Player_Status> lastPlayerStatus; // 0x94
		::System::UInt32 droppedFrameCount; // 0x9C
		::System::Boolean isNativeInitialized; // 0xA0
		::System::Boolean isMovieInfoAvailable; // 0xA1
		::System::Boolean _applyTargetAlpha_k__BackingField; // 0xA2
		::System::Boolean enableSubtitle; // 0xA3
		::System::Int64 _currentLoopCnt; // 0xA8
		::System::IntPtr _subtitleBuffer_k__BackingField; // 0xB0
		::System::Boolean _uiRenderMode_k__BackingField; // 0xB8
		::System::Boolean _additiveMode_k__BackingField; // 0xB9
		::System::Boolean isStoppingForSeek; // 0xBA
		::System::Boolean isFrameInfoAvailable; // 0xBB
		::System::Int32 playerId; // 0xBC
		::System::Boolean isNativeStartInvoked; // 0xC0
		::System::Boolean wasStopping; // 0xC1
		::System::Boolean isDisposed; // 0xC2
		::System::Boolean isPreparingForRendering; // 0xC3
		::System::Int32 subtitleBufferSize; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean advanced_audio_mode, ::System::Boolean ambisonics_mode, ::System::UInt32 max_path_length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET))(this, advanced_audio_mode, ambisonics_mode, max_path_length);
		}

		::CriWare::CriMana::Player_Status get_requiredStatus()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET))(this);
		}

		::System::Void set_requiredStatus(::CriWare::CriMana::Player_Status value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_Status))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_additiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET))(this);
		}

		::System::Void set_additiveMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET))(this, value);
		}

		::System::Int32 get_maxFrameDrop()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET))(this);
		}

		::System::Void set_maxFrameDrop(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET))(this, value);
		}

		::System::Boolean get_applyTargetAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET))(this);
		}

		::System::Void set_applyTargetAlpha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_uiRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET))(this);
		}

		::System::Void set_uiRenderMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET))(this, value);
		}

		::System::Boolean get_isFrameAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ISFRAMEAVAILABLE_OFFSET))(this);
		}

		::CriWare::CriMana::MovieInfo* get_movieInfo()
		{
			return ((::CriWare::CriMana::MovieInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_MOVIEINFO_OFFSET))(this);
		}

		::CriWare::CriMana::FrameInfo* get_frameInfo()
		{
			return ((::CriWare::CriMana::FrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_FRAMEINFO_OFFSET))(this);
		}

		::CriWare::CriMana::Player_Status get_status()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_STATUS_OFFSET))(this);
		}

		::System::IntPtr get_subtitleBuffer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET))(this);
		}

		::System::Void set_subtitleBuffer(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET))(this, value);
		}

		::System::Void set_subtitleSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET))(this, value);
		}

		::CriWare::CriAtomExPlayer* get_atomExPlayer()
		{
			return ((::CriWare::CriAtomExPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ATOMEXPLAYER_OFFSET))(this);
		}

		::CriWare::CriAtomEx3dSource* get_atomEx3DsourceForAmbisonics()
		{
			return ((::CriWare::CriAtomEx3dSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ATOMEX3DSOURCEFORAMBISONICS_OFFSET))(this);
		}

		::CriWare::CriMana::Player_TimerType get_timerType()
		{
			return ((::CriWare::CriMana::Player_TimerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_TIMERTYPE_OFFSET))(this);
		}

		::CriWare::CriManaMoviePlayerHolder* get_playerHolder()
		{
			return ((::CriWare::CriManaMoviePlayerHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_PLAYERHOLDER_OFFSET))(this);
		}

		::System::Void set_playerHolder(::CriWare::CriManaMoviePlayerHolder* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMoviePlayerHolder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeRendererResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSERENDERERRESOURCE_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PREPARE_OFFSET))(this);
		}

		::System::Void PrepareForRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PREPAREFORRENDERING_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STOP_OFFSET))(this);
		}

		::System::Void StopForSeek()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STOPFORSEEK_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET))(this, sw);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean SetFile(::CriWare::CriFsBinder* binder, ::System::String* moviePath, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET))(this, binder, moviePath, setMode);
		}

		::System::Boolean SetData(::System::IntPtr data, ::System::Int64 dataSize, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET))(this, data, dataSize, setMode);
		}

		::System::Void Loop(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET))(this, sw);
		}

		::System::Void SetMasterTimerType(::CriWare::CriMana::Player_TimerType timerType)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET))(this, timerType);
		}

		::System::Void SetSeekPosition(::System::Int32 frameNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET))(this, frameNumber);
		}

		::System::Void SetSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET))(this, speed);
		}

		::System::Void SetAudioTrack(::CriWare::CriMana::Player_AudioTrack track)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET))(this, track);
		}

		::System::Void SetVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET))(this);
		}

		::System::Void SetSubAudioVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetSubAudioVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET))(this);
		}

		::System::Void SetExtraAudioVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetExtraAudioVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET))(this);
		}

		::System::Int64 GetTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Void SetDecryptionKey(::System::UInt64 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET))(this, key);
		}

		::System::Void UpdateWithUserTime(::System::UInt64 timeCount, ::System::UInt64 timeUnit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET))(this, timeCount, timeUnit);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void OnWillRenderObject(::CriWare::CriManaMovieMaterialBase* sender)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET))(this, sender);
		}

		::System::Boolean UpdateMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET))(this, material);
		}

		::System::Boolean get_isAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET))(this);
		}

		::System::Void IssuePluginEvent(::CriWare::CriMana::Player_CriManaUnityPlayer_RenderEventAction renderEventAction)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_CriManaUnityPlayer_RenderEventAction))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET))(this, renderEventAction);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void InternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* IssuePluginUpdatesForFrames(::System::Int32 frameCount, ::UnityEngine::MonoBehaviour* playerHolder, ::System::Boolean destroy, ::System::Int32 playerId)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::UnityEngine::MonoBehaviour*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET))(this, frameCount, playerHolder, destroy, playerId);
		}

		::System::Void DisableInfos(::System::Boolean keepFrameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET))(this, keepFrameInfo);
		}

		::System::Void PrepareNativePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PREPARENATIVEPLAYER_OFFSET))(this);
		}

		::System::Void UpdateNativePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATENATIVEPLAYER_OFFSET))(this);
		}

		::System::Void InvokePlayerStatusCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_INVOKEPLAYERSTATUSCHECK_OFFSET))(this);
		}

		::System::Void AllocateSubtitleBuffer(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET))(this, size);
		}

		::System::Void DeallocateSubtitleBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET))(this);
		}

		::System::Void PauseOnApplicationPause(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET))(this, sw);
		}

		static ::System::Void CuePointCallbackFromNative(::System::IntPtr ptr1, ::System::IntPtr ptr2, ::CriWare::CriMana::EventPoint& eventPoint)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET))(ptr1, ptr2, eventPoint);
		}

		static ::System::Int32 CRIWAREFD186F02()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREFD186F02_OFFSET))();
		}

		static ::System::Int32 CRIWARE95A85424(::System::Boolean useAtomExPlayer, ::System::UInt32 maxPathLength)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE95A85424_OFFSET))(useAtomExPlayer, maxPathLength);
		}

		static ::System::Void CRIWAREABF659EC(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREABF659EC_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREEDB46019(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEDB46019_OFFSET))(player_id, binder, path);
		}

		static ::System::Void CRIWARE7C753A2E(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_OFFSET))(player_id, data, datasize);
		}

		static ::System::Boolean CRIWARE328F2911(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE328F2911_OFFSET))(player_id, binder, path, repeat);
		}

		static ::System::Boolean CRIWAREC35C3DC3(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_OFFSET))(player_id, data, datasize, repeat);
		}

		static ::System::Void CRIWARED9F7168D(::System::Int32 player_id, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate* cbfunc)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED9F7168D_OFFSET))(player_id, cbfunc);
		}

		static ::System::Void CRIWARE1E785A43(::System::Int32 player_id, ::CriWare::CriMana::MovieInfo* movie_info)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1E785A43_OFFSET))(player_id, movie_info);
		}

		static ::System::Int32 CRIWARE3CE8CE6A(::System::Int32 player_id, ::System::IntPtr subtitle_buffer, ::System::UInt32& subtitle_size)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE3CE8CE6A_OFFSET))(player_id, subtitle_buffer, subtitle_size);
		}

		static ::System::Void CRIWARE362A826C(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE362A826C_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE61523A0C(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE61523A0C_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREBB898C91(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBB898C91_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE705B8C6D(::System::Int32 player_id, ::System::Int32 seek_frame_no)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE705B8C6D_OFFSET))(player_id, seek_frame_no);
		}

		static ::System::Void CRIWARE18BFCB88(::System::Int32 player_id, ::System::Int32 sw)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE18BFCB88_OFFSET))(player_id, sw);
		}

		static ::System::Boolean CRIWAREEFA5210A(::System::Int32 player_id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEFA5210A_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE4331E077(::System::Int32 player_id, ::System::Int32 sw)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE4331E077_OFFSET))(player_id, sw);
		}

		static ::System::Int64 CRIWARE7779586C(::System::Int32 player_id)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7779586C_OFFSET))(player_id);
		}

		static ::System::IntPtr CRIWARE165B6B70(::System::Int32 player_id)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE165B6B70_OFFSET))(player_id);
		}

		static ::System::Void CRIWARED99932F6(::System::Int32 player_id, ::System::Int32 track)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED99932F6_OFFSET))(player_id, track);
		}

		static ::System::Void CRIWARE1FF2F5BE(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1FF2F5BE_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWARED30C9C6F(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED30C9C6F_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE1EBB12C5(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1EBB12C5_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWARE966C4BA9(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE966C4BA9_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE0348BF1B(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE0348BF1B_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWAREC5A3A88D(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC5A3A88D_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREAB576D15(::System::Int32 player_id, ::System::Single speed)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREAB576D15_OFFSET))(player_id, speed);
		}

		static ::System::Void CRIWAREE2DF1163(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREE2DF1163_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREBD24DE27(::System::Int32 player_id, ::CriWare::CriMana::Player_TimerType timer_type)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBD24DE27_OFFSET))(player_id, timer_type);
		}

		static ::System::Void CRIWAREC7C5CC77(::System::Int32 player_id, ::System::UInt64 user_count, ::System::UInt64 user_unit)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC7C5CC77_OFFSET))(player_id, user_count, user_unit);
		}

		static ::System::Void CRIWARECEA2FA98(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARECEA2FA98_OFFSET))(player_id);
		}

		static ::System::IntPtr CRIWARE27ED314F(::System::Int32 player_id, ::System::Int32 bufferSize)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE27ED314F_OFFSET))(player_id, bufferSize);
		}

		static ::System::Boolean CRIWARE725ED4B4(::System::Int32 player_id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE725ED4B4_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE419ECAF8(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE419ECAF8_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE662A91B8(::System::Int32 player_id, ::System::UInt64 key)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE662A91B8_OFFSET))(player_id, key);
		}

		static ::System::IntPtr criWareUnity_GetRenderEventFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET))();
		}
	};
}
