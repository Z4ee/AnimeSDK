#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/CriWare/CriMana/Player_AudioTrack.h"
#include "unitysdk/CriWare/CriMana/Player_CriManaUnityPlayer_RenderEventAction.h"
#include "unitysdk/CriWare/CriMana/Player_MovieEventSyncMode.h"
#include "unitysdk/CriWare/CriMana/Player_SetMode.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/CriWare/CriMana/Player_TimerType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExPlayer; }
namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriManaMovieMaterialBase; }
namespace CriWare { class CriManaMoviePlayerHolder; }
namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana { class Player_CuePointCallback; }
namespace CriWare::CriMana { class Player_CuePointCallbackFromNativeDelegate; }
namespace CriWare::CriMana { class Player_ShaderDispatchCallback; }
namespace CriWare::CriMana { class Player_StatusChangeCallback; }
namespace CriWare::CriMana { class Player_SubtitleChangeCallback; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }

#define CRIWARE_CRIMANA_PLAYER_ADD_ONSUBTITLECHANGED_OFFSET UNITYSDK_OFFSET(0x11A43400)
#define CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x11A48CE0)
#define CRIWARE_CRIMANA_PLAYER_CREATERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x11A44880)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE0348BF1B_OFFSET UNITYSDK_OFFSET(0x11A48500)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE0EA59F65_OFFSET UNITYSDK_OFFSET(0x11A47B30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE162DD162_OFFSET UNITYSDK_OFFSET(0x11A46DF0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE165B6B70_OFFSET UNITYSDK_OFFSET(0x11A441C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE18BFCB88_OFFSET UNITYSDK_OFFSET(0x11A45DC0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1E785A43_OFFSET UNITYSDK_OFFSET(0x11A4AB30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1EBB12C5_OFFSET UNITYSDK_OFFSET(0x11A482A0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1FF2F5BE_OFFSET UNITYSDK_OFFSET(0x11A48040)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE213452EF_OFFSET UNITYSDK_OFFSET(0x11A47DB0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE27ED314F_OFFSET UNITYSDK_OFFSET(0x11A4B910)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE2C8FF595_OFFSET UNITYSDK_OFFSET(0x11A48F80)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE31668293_OFFSET UNITYSDK_OFFSET(0x11A48780)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE328F2911_OFFSET UNITYSDK_OFFSET(0x11A46210)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE33981CC9_OFFSET UNITYSDK_OFFSET(0x11A4BF30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE362A826C_OFFSET UNITYSDK_OFFSET(0x11A4B120)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE3CE8CE6A_OFFSET UNITYSDK_OFFSET(0x11A4B1A0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE3F9C5D06_OFFSET UNITYSDK_OFFSET(0x11A47530)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE419ECAF8_OFFSET UNITYSDK_OFFSET(0x11A4B5A0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE4331E077_OFFSET UNITYSDK_OFFSET(0x11A46F60)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE55ECC3E4_OFFSET UNITYSDK_OFFSET(0x11A4A530)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE61523A0C_OFFSET UNITYSDK_OFFSET(0x11A4AFE0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE65553651_OFFSET UNITYSDK_OFFSET(0x11A46D40)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE662A91B8_OFFSET UNITYSDK_OFFSET(0x11A49440)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE66A63134_OFFSET UNITYSDK_OFFSET(0x11A4BEB0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE6756AE56_OFFSET UNITYSDK_OFFSET(0x11A47790)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE705B8C6D_OFFSET UNITYSDK_OFFSET(0x11A471B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE725ED4B4_OFFSET UNITYSDK_OFFSET(0x11A4B230)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE72A5B8BF_OFFSET UNITYSDK_OFFSET(0x11A4BE30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7500F0DD_OFFSET UNITYSDK_OFFSET(0x11A491D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7779586C_OFFSET UNITYSDK_OFFSET(0x11A490B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_1_OFFSET UNITYSDK_OFFSET(0x11A466F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_OFFSET UNITYSDK_OFFSET(0x11A46440)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE88D04318_OFFSET UNITYSDK_OFFSET(0x11A43700)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE8A87737B_OFFSET UNITYSDK_OFFSET(0x11A47660)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE95A85424_OFFSET UNITYSDK_OFFSET(0x11A44130)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE966C4BA9_OFFSET UNITYSDK_OFFSET(0x11A483D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREA59E0F01_OFFSET UNITYSDK_OFFSET(0x11A4A330)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREA7F6DE6B_OFFSET UNITYSDK_OFFSET(0x11A49310)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREAB576D15_OFFSET UNITYSDK_OFFSET(0x11A47400)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREABF659EC_OFFSET UNITYSDK_OFFSET(0x11A4A9C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREB2460D7A_OFFSET UNITYSDK_OFFSET(0x11A48900)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREB28B5D50_OFFSET UNITYSDK_OFFSET(0x11A46A50)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBB898C91_OFFSET UNITYSDK_OFFSET(0x11A45B50)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBD24DE27_OFFSET UNITYSDK_OFFSET(0x11A47090)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_1_OFFSET UNITYSDK_OFFSET(0x11A46780)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_OFFSET UNITYSDK_OFFSET(0x11A464D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC5A3A88D_OFFSET UNITYSDK_OFFSET(0x11A48630)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC7C5CC77_OFFSET UNITYSDK_OFFSET(0x11A49640)
#define CRIWARE_CRIMANA_PLAYER_CRIWARECEA2FA98_OFFSET UNITYSDK_OFFSET(0x11A4B990)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED30C9C6F_OFFSET UNITYSDK_OFFSET(0x11A48170)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED99932F6_OFFSET UNITYSDK_OFFSET(0x11A478B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED9F7168D_OFFSET UNITYSDK_OFFSET(0x11A4B090)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREDA0693CD_OFFSET UNITYSDK_OFFSET(0x11A46AE0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREE2DF1163_OFFSET UNITYSDK_OFFSET(0x11A4AAB0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEB32FC73_OFFSET UNITYSDK_OFFSET(0x11A472D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEDB46019_OFFSET UNITYSDK_OFFSET(0x11A46170)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEFA5210A_OFFSET UNITYSDK_OFFSET(0x11A45EE0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREF4B0CC4E_OFFSET UNITYSDK_OFFSET(0x11A48A80)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREFD186F02_OFFSET UNITYSDK_OFFSET(0x11A43AD0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET UNITYSDK_OFFSET(0x11A4A940)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x11A431C0)
#define CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x11A48EB0)
#define CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET UNITYSDK_OFFSET(0x11A45BD0)
#define CRIWARE_CRIMANA_PLAYER_DISPOSERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x11A44FF0)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x11A442B0)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A44800)
#define CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A44240)
#define CRIWARE_CRIMANA_PLAYER_GETDISPLAYEDFRAMENO_OFFSET UNITYSDK_OFFSET(0x11A49130)
#define CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x11A48590)
#define CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x11A48330)
#define CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET UNITYSDK_OFFSET(0x11A49010)
#define CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x11A480D0)
#define CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x11A43500)
#define CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x11A43540)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEX3DSOURCEFORAMBISONICS_OFFSET UNITYSDK_OFFSET(0x11A437D0)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEXPLAYER_OFFSET UNITYSDK_OFFSET(0x11A437C0)
#define CRIWARE_CRIMANA_PLAYER_GET_FRAMEINFO_OFFSET UNITYSDK_OFFSET(0x11A435B0)
#define CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x11A4A930)
#define CRIWARE_CRIMANA_PLAYER_GET_ISFRAMEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x11A43580)
#define CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x11A43520)
#define CRIWARE_CRIMANA_PLAYER_GET_MOVIEINFO_OFFSET UNITYSDK_OFFSET(0x11A43590)
#define CRIWARE_CRIMANA_PLAYER_GET_NATIVESTATUS_OFFSET UNITYSDK_OFFSET(0x11A43650)
#define CRIWARE_CRIMANA_PLAYER_GET_NUMBEROFENTRIES_OFFSET UNITYSDK_OFFSET(0x11A43660)
#define CRIWARE_CRIMANA_PLAYER_GET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x11A437F0)
#define CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x11A43270)
#define CRIWARE_CRIMANA_PLAYER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x11A435C0)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x11A43780)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBTITLESIZE_OFFSET UNITYSDK_OFFSET(0x11A437A0)
#define CRIWARE_CRIMANA_PLAYER_GET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x11A437E0)
#define CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x11A43560)
#define CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x11A49250)
#define CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x11A496D0)
#define CRIWARE_CRIMANA_PLAYER_INVOKEPLAYERSTATUSCHECK_OFFSET UNITYSDK_OFFSET(0x11A432B0)
#define CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x11A45E40)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x11A4A7C0)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET UNITYSDK_OFFSET(0x11A4AA40)
#define CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET UNITYSDK_OFFSET(0x11A46EC0)
#define CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x11A4A5D0)
#define CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x11A4BA10)
#define CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x11A45980)
#define CRIWARE_CRIMANA_PLAYER_PREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x11A45690)
#define CRIWARE_CRIMANA_PLAYER_PREPARENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x11A450C0)
#define CRIWARE_CRIMANA_PLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x11A45070)
#define CRIWARE_CRIMANA_PLAYER_REMOVE_ONSUBTITLECHANGED_OFFSET UNITYSDK_OFFSET(0x11A43480)
#define CRIWARE_CRIMANA_PLAYER_SETASRRACKID_OFFSET UNITYSDK_OFFSET(0x11A49270)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x11A47930)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x11A47810)
#define CRIWARE_CRIMANA_PLAYER_SETBUFFERINGTIME_OFFSET UNITYSDK_OFFSET(0x11A475B0)
#define CRIWARE_CRIMANA_PLAYER_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x11A486B0)
#define CRIWARE_CRIMANA_PLAYER_SETCONTENTID_OFFSET UNITYSDK_OFFSET(0x11A46830)
#define CRIWARE_CRIMANA_PLAYER_SETDATA_1_OFFSET UNITYSDK_OFFSET(0x11A46570)
#define CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET UNITYSDK_OFFSET(0x11A462D0)
#define CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x11A49390)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x11A489B0)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x11A47E30)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x11A47D10)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x11A48450)
#define CRIWARE_CRIMANA_PLAYER_SETFILERANGE_OFFSET UNITYSDK_OFFSET(0x11A46B80)
#define CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET UNITYSDK_OFFSET(0x11A45F60)
#define CRIWARE_CRIMANA_PLAYER_SETMANUALTIMERUNIT_OFFSET UNITYSDK_OFFSET(0x11A4A1C0)
#define CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET UNITYSDK_OFFSET(0x11A46FE0)
#define CRIWARE_CRIMANA_PLAYER_SETMAXPICTUREDATASIZE_OFFSET UNITYSDK_OFFSET(0x11A47490)
#define CRIWARE_CRIMANA_PLAYER_SETMINBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x11A476F0)
#define CRIWARE_CRIMANA_PLAYER_SETMOVIEEVENTSYNCMODE_OFFSET UNITYSDK_OFFSET(0x11A47230)
#define CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET UNITYSDK_OFFSET(0x11A47110)
#define CRIWARE_CRIMANA_PLAYER_SETSHADERDISPATCHCALLBACK_OFFSET UNITYSDK_OFFSET(0x11A49000)
#define CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET UNITYSDK_OFFSET(0x11A47350)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x11A48830)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x11A47BB0)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x11A47A90)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x11A481F0)
#define CRIWARE_CRIMANA_PLAYER_SETSUBTITLECHANNEL_OFFSET UNITYSDK_OFFSET(0x11A48B30)
#define CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x11A47F90)
#define CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x11A43510)
#define CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x11A43550)
#define CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x11A43530)
#define CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x11A43800)
#define CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x11A43280)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x11A43790)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET UNITYSDK_OFFSET(0x11A437B0)
#define CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x11A43570)
#define CRIWARE_CRIMANA_PLAYER_START_OFFSET UNITYSDK_OFFSET(0x11A45860)
#define CRIWARE_CRIMANA_PLAYER_STOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x11A45BF0)
#define CRIWARE_CRIMANA_PLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x11A45A50)
#define CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x11A4A8E0)
#define CRIWARE_CRIMANA_PLAYER_UPDATENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x11A45280)
#define CRIWARE_CRIMANA_PLAYER_UPDATEWITHMANUALTIMEADVANCED_OFFSET UNITYSDK_OFFSET(0x11A4A3C0)
#define CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET UNITYSDK_OFFSET(0x11A494C0)
#define CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A4A5B0)
#define CRIWARE_CRIMANA_PLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A4BFB0)
#define CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11A43B50)
#define CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A43810)
#define CRIWARE_CRIMANA_PLAYER__PAUSEFORPREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x11A45790)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_TypeDefinitionIndex = 31229;

	class Player : public ::CriWare::CriDisposable
	{
	public:
		static ::CriWare::CriMana::Player** StaticGet_updatingPlayer()
		{
			return (::CriWare::CriMana::Player**)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0x35210);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet__criWareWaitForGfxThreadPresent()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0x10A70);
		}
		// static const ::System::Int32 InvalidPlayerId = 0xFFFFFFFF; // 0x0
		::CriWare::CriMana::FrameInfo* _frameInfo; // 0x20
		::CriWare::CriMana::Detail::RendererResource* rendererResource; // 0x28
		::CriWare::CriAtomEx3dSource* _atomEx3Dsource; // 0x30
		::CriWare::CriAtomExPlayer* _atomExPlayer; // 0x38
		::CriWare::CriMana::Player_SubtitleChangeCallback* OnSubtitleChanged; // 0x40
		::CriWare::CriMana::Player_ShaderDispatchCallback* _shaderDispatchCallback; // 0x48
		::CriWare::CriMana::Player_CuePointCallback* cuePointCallback; // 0x50
		::CriWare::CriManaMoviePlayerHolder* _playerHolder_k__BackingField; // 0x58
		::CriWare::CriMana::MovieInfo* _movieInfo; // 0x60
		::CriWare::CriMana::Player_StatusChangeCallback* statusChangeCallback; // 0x68
		::System::Int32 playerId; // 0x70
		::CriWare::CriMana::Player_TimerType _timerType; // 0x74
		::CriWare::CriMana::Player_Status _nativeStatus; // 0x78
		::System::Boolean _applyTargetAlpha_k__BackingField; // 0x7C
		::System::Boolean isNativeStartInvoked; // 0x7D
		::System::Boolean isStoppingForSeek; // 0x7E
		::System::Boolean isFrameInfoAvailable; // 0x7F
		::System::Int32 subtitleBufferSize; // 0x80
		::System::Int32 _maxFrameDrop_k__BackingField; // 0x84
		::System::Boolean wasStopping; // 0x88
		::System::Boolean isPreparingForRendering; // 0x89
		::System::Boolean enableSubtitle; // 0x8A
		::System::Boolean _uiRenderMode_k__BackingField; // 0x8B
		::System::Nullable_1<::CriWare::CriMana::Player_Status> lastPlayerStatus; // 0x8C
		::System::Int32 _subtitleSize_k__BackingField; // 0x94
		::System::Boolean isNativeInitialized; // 0x98
		::System::Boolean isMovieInfoAvailable; // 0x99
		::System::Boolean _additiveMode_k__BackingField; // 0x9A
		::System::Boolean isDisposed; // 0x9B
		::CriWare::CriMana::Player_Status internalrequiredStatus; // 0x9C
		::System::UInt32 droppedFrameCount; // 0xA0
		::System::Nullable_1<::CriWare::CriMana::Player_Status> lastNativeStatus; // 0xA4
		::System::IntPtr _subtitleBuffer_k__BackingField; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean advanced_audio_mode, ::System::Boolean ambisonics_mode, ::System::UInt32 max_path_length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET))(this, advanced_audio_mode, ambisonics_mode, max_path_length);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CCTOR_OFFSET))();
		}

		::CriWare::CriMana::Player_Status get_requiredStatus()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET))(this);
		}

		::System::Void set_requiredStatus(::CriWare::CriMana::Player_Status value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_Status))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET))(this, value);
		}

		::System::Void add_OnSubtitleChanged(::CriWare::CriMana::Player_SubtitleChangeCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_SubtitleChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ADD_ONSUBTITLECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnSubtitleChanged(::CriWare::CriMana::Player_SubtitleChangeCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_SubtitleChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_REMOVE_ONSUBTITLECHANGED_OFFSET))(this, value);
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

		::CriWare::CriMana::Player_Status get_nativeStatus()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_NATIVESTATUS_OFFSET))(this);
		}

		::System::Int32 get_numberOfEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_NUMBEROFENTRIES_OFFSET))(this);
		}

		::System::IntPtr get_subtitleBuffer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET))(this);
		}

		::System::Void set_subtitleBuffer(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET))(this, value);
		}

		::System::Int32 get_subtitleSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_SUBTITLESIZE_OFFSET))(this);
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

		::System::Void CreateRendererResource(::System::Int32 width, ::System::Int32 height, ::System::Boolean alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CREATERENDERERRESOURCE_OFFSET))(this, width, height, alpha);
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

		::System::Void _PauseForPrepareForRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__PAUSEFORPREPAREFORRENDERING_OFFSET))(this);
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

		::System::Boolean SetData_1(::Il2CppArray<::System::Byte>* data, ::System::Int64 datasize, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDATA_1_OFFSET))(this, data, datasize, setMode);
		}

		::System::Boolean SetContentId(::CriWare::CriFsBinder* binder, ::System::Int32 contentId, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::Int32, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETCONTENTID_OFFSET))(this, binder, contentId, setMode);
		}

		::System::Boolean SetFileRange(::System::String* filePath, ::System::UInt64 offset, ::System::Int64 range, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt64, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETFILERANGE_OFFSET))(this, filePath, offset, range, setMode);
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

		::System::Void SetMovieEventSyncMode(::CriWare::CriMana::Player_MovieEventSyncMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_MovieEventSyncMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMOVIEEVENTSYNCMODE_OFFSET))(this, mode);
		}

		::System::Void SetSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET))(this, speed);
		}

		::System::Void SetMaxPictureDataSize(::System::UInt32 maxDataSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMAXPICTUREDATASIZE_OFFSET))(this, maxDataSize);
		}

		::System::Void SetBufferingTime(::System::Single sec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETBUFFERINGTIME_OFFSET))(this, sec);
		}

		::System::Void SetMinBufferSize(::System::Int32 min_buffer_size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMINBUFFERSIZE_OFFSET))(this, min_buffer_size);
		}

		::System::Void SetAudioTrack(::System::Int32 track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET))(this, track);
		}

		::System::Void SetAudioTrack_1(::CriWare::CriMana::Player_AudioTrack track)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_1_OFFSET))(this, track);
		}

		::System::Void SetSubAudioTrack(::System::Int32 track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_OFFSET))(this, track);
		}

		::System::Void SetSubAudioTrack_1(::CriWare::CriMana::Player_AudioTrack track)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_1_OFFSET))(this, track);
		}

		::System::Void SetExtraAudioTrack(::System::Int32 track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_OFFSET))(this, track);
		}

		::System::Void SetExtraAudioTrack_1(::CriWare::CriMana::Player_AudioTrack track)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_1_OFFSET))(this, track);
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

		::System::Void SetBusSendLevel(::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETBUSSENDLEVEL_OFFSET))(this, bus_name, level);
		}

		::System::Void SetSubAudioBusSendLevel(::System::String* bus_name, ::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOBUSSENDLEVEL_OFFSET))(this, bus_name, volume);
		}

		::System::Void SetExtraAudioBusSendLevel(::System::String* bus_name, ::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOBUSSENDLEVEL_OFFSET))(this, bus_name, volume);
		}

		::System::Void SetSubtitleChannel(::System::Int32 channel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBTITLECHANNEL_OFFSET))(this, channel);
		}

		::System::Void SetShaderDispatchCallback(::CriWare::CriMana::Player_ShaderDispatchCallback* shaderDispatchCallback)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_ShaderDispatchCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSHADERDISPATCHCALLBACK_OFFSET))(this, shaderDispatchCallback);
		}

		::System::Int64 GetTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET))(this);
		}

		::System::Int32 GetDisplayedFrameNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETDISPLAYEDFRAMENO_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Void SetAsrRackId(::System::Int32 asrRackId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETASRRACKID_OFFSET))(this, asrRackId);
		}

		::System::Void SetDecryptionKey(::System::UInt64 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET))(this, key);
		}

		::System::Void UpdateWithUserTime(::System::UInt64 timeCount, ::System::UInt64 timeUnit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET))(this, timeCount, timeUnit);
		}

		::System::Void SetManualTimerUnit(::System::UInt64 timeUnitN, ::System::UInt64 timeUnitD)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMANUALTIMERUNIT_OFFSET))(this, timeUnitN, timeUnitD);
		}

		::System::Void UpdateWithManualTimeAdvanced()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEWITHMANUALTIMEADVANCED_OFFSET))(this);
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

		static ::System::Int32 CRIWARE72A5B8BF()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE72A5B8BF_OFFSET))();
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

		static ::System::Void CRIWAREB28B5D50(::System::Int32 player_id, ::System::IntPtr binder, ::System::Int32 content_id)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREB28B5D50_OFFSET))(player_id, binder, content_id);
		}

		static ::System::Void CRIWARE65553651(::System::Int32 player_id, ::System::String* path, ::System::UInt64 offset, ::System::Int64 range)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::UInt64, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE65553651_OFFSET))(player_id, path, offset, range);
		}

		static ::System::Void CRIWARE7C753A2E(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_OFFSET))(player_id, data, datasize);
		}

		static ::System::Void CRIWARE7C753A2E_1(::System::Int32 player_id, ::Il2CppArray<::System::Byte>* data, ::System::Int64 datasize)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_1_OFFSET))(player_id, data, datasize);
		}

		static ::System::Boolean CRIWARE328F2911(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE328F2911_OFFSET))(player_id, binder, path, repeat);
		}

		static ::System::Boolean CRIWAREDA0693CD(::System::Int32 player_id, ::System::IntPtr binder, ::System::Int32 content_id, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREDA0693CD_OFFSET))(player_id, binder, content_id, repeat);
		}

		static ::System::Boolean CRIWARE162DD162(::System::Int32 player_id, ::System::String* path, ::System::UInt64 offset, ::System::Int64 range, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::System::UInt64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE162DD162_OFFSET))(player_id, path, offset, range, repeat);
		}

		static ::System::Boolean CRIWAREC35C3DC3(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_OFFSET))(player_id, data, datasize, repeat);
		}

		static ::System::Boolean CRIWAREC35C3DC3_1(::System::Int32 player_id, ::Il2CppArray<::System::Byte>* data, ::System::Int64 datasize, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_1_OFFSET))(player_id, data, datasize, repeat);
		}

		static ::System::Void CRIWARE66A63134(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE66A63134_OFFSET))(player_id);
		}

		static ::System::Int32 CRIWARE88D04318(::System::Int32 player_id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE88D04318_OFFSET))(player_id);
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

		static ::System::Void CRIWAREEB32FC73(::System::Int32 player_id, ::CriWare::CriMana::Player_MovieEventSyncMode mode)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_MovieEventSyncMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEB32FC73_OFFSET))(player_id, mode);
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

		static ::System::Int32 CRIWARE33981CC9(::System::Int32 player_id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE33981CC9_OFFSET))(player_id);
		}

		static ::System::IntPtr CRIWARE165B6B70(::System::Int32 player_id)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE165B6B70_OFFSET))(player_id);
		}

		static ::System::Int32 CRIWARE7500F0DD(::System::Int32 player_id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7500F0DD_OFFSET))(player_id);
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

		static ::System::Void CRIWARE0EA59F65(::System::Int32 player_id, ::System::Int32 track)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE0EA59F65_OFFSET))(player_id, track);
		}

		static ::System::Void CRIWARE1EBB12C5(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1EBB12C5_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWARE966C4BA9(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE966C4BA9_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE213452EF(::System::Int32 player_id, ::System::Int32 track)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE213452EF_OFFSET))(player_id, track);
		}

		static ::System::Void CRIWARE0348BF1B(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE0348BF1B_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWAREC5A3A88D(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC5A3A88D_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE31668293(::System::Int32 player_id, ::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE31668293_OFFSET))(player_id, bus_name, level);
		}

		static ::System::Void CRIWAREB2460D7A(::System::Int32 player_id, ::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREB2460D7A_OFFSET))(player_id, bus_name, level);
		}

		static ::System::Void CRIWAREF4B0CC4E(::System::Int32 player_id, ::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREF4B0CC4E_OFFSET))(player_id, bus_name, level);
		}

		static ::System::Void CRIWARE2C8FF595(::System::Int32 player_id, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE2C8FF595_OFFSET))(player_id, channel);
		}

		static ::System::Void CRIWAREAB576D15(::System::Int32 player_id, ::System::Single speed)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREAB576D15_OFFSET))(player_id, speed);
		}

		static ::System::Void CRIWARE3F9C5D06(::System::Int32 player_id, ::System::UInt32 max_data_size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE3F9C5D06_OFFSET))(player_id, max_data_size);
		}

		static ::System::Void CRIWARE8A87737B(::System::Int32 player_id, ::System::Single sec)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE8A87737B_OFFSET))(player_id, sec);
		}

		static ::System::Void CRIWARE6756AE56(::System::Int32 player_id, ::System::Int32 min_buffer_size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE6756AE56_OFFSET))(player_id, min_buffer_size);
		}

		static ::System::Void CRIWAREA7F6DE6B(::System::Int32 player_id, ::System::Int32 asr_rack_id)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREA7F6DE6B_OFFSET))(player_id, asr_rack_id);
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

		static ::System::Void CRIWAREA59E0F01(::System::Int32 player_id, ::System::UInt64 timer_unit_n, ::System::UInt64 timer_unit_d)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREA59E0F01_OFFSET))(player_id, timer_unit_n, timer_unit_d);
		}

		static ::System::Void CRIWARE55ECC3E4(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE55ECC3E4_OFFSET))(player_id);
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
