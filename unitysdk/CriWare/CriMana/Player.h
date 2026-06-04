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

#define CRIWARE_CRIMANA_PLAYER_ADD_ONSUBTITLECHANGED_OFFSET UNITYSDK_OFFSET(0x146CC1D0)
#define CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x146D17A0)
#define CRIWARE_CRIMANA_PLAYER_CREATERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x146CD700)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE0348BF1B_OFFSET UNITYSDK_OFFSET(0x146D0F90)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE0EA59F65_OFFSET UNITYSDK_OFFSET(0x146D05B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE162DD162_OFFSET UNITYSDK_OFFSET(0x146CF800)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE165B6B70_OFFSET UNITYSDK_OFFSET(0x146CCFA0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE18BFCB88_OFFSET UNITYSDK_OFFSET(0x146CE7B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1E785A43_OFFSET UNITYSDK_OFFSET(0x146D3790)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1EBB12C5_OFFSET UNITYSDK_OFFSET(0x146D0D30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1FF2F5BE_OFFSET UNITYSDK_OFFSET(0x146D0AD0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE213452EF_OFFSET UNITYSDK_OFFSET(0x146D0840)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE27ED314F_OFFSET UNITYSDK_OFFSET(0x146D3F90)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE2C8FF595_OFFSET UNITYSDK_OFFSET(0x146D1A30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE31668293_OFFSET UNITYSDK_OFFSET(0x146D1220)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE328F2911_OFFSET UNITYSDK_OFFSET(0x146CEC10)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE33981CC9_OFFSET UNITYSDK_OFFSET(0x146D4270)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE362A826C_OFFSET UNITYSDK_OFFSET(0x146D3D60)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE3CE8CE6A_OFFSET UNITYSDK_OFFSET(0x146D3DE0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE3F9C5D06_OFFSET UNITYSDK_OFFSET(0x146CFF80)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE419ECAF8_OFFSET UNITYSDK_OFFSET(0x146D3F00)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE4331E077_OFFSET UNITYSDK_OFFSET(0x146CF980)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE55ECC3E4_OFFSET UNITYSDK_OFFSET(0x146D3130)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE61523A0C_OFFSET UNITYSDK_OFFSET(0x146D3C40)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE65553651_OFFSET UNITYSDK_OFFSET(0x146CF750)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE662A91B8_OFFSET UNITYSDK_OFFSET(0x146D1F00)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE66A63134_OFFSET UNITYSDK_OFFSET(0x146D41F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE6756AE56_OFFSET UNITYSDK_OFFSET(0x146D01F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE705B8C6D_OFFSET UNITYSDK_OFFSET(0x146CFBE0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE725ED4B4_OFFSET UNITYSDK_OFFSET(0x146D3E70)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE72A5B8BF_OFFSET UNITYSDK_OFFSET(0x146D4170)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7500F0DD_OFFSET UNITYSDK_OFFSET(0x146D1C80)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7779586C_OFFSET UNITYSDK_OFFSET(0x146D1B60)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_1_OFFSET UNITYSDK_OFFSET(0x146CF0F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_OFFSET UNITYSDK_OFFSET(0x146CEE40)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE88D04318_OFFSET UNITYSDK_OFFSET(0x146CC4D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE8A87737B_OFFSET UNITYSDK_OFFSET(0x146D00B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE95A85424_OFFSET UNITYSDK_OFFSET(0x146CCF10)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE966C4BA9_OFFSET UNITYSDK_OFFSET(0x146D0E60)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREA59E0F01_OFFSET UNITYSDK_OFFSET(0x146D2F30)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREA7F6DE6B_OFFSET UNITYSDK_OFFSET(0x146D1DD0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREAB576D15_OFFSET UNITYSDK_OFFSET(0x146CFE40)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREABF659EC_OFFSET UNITYSDK_OFFSET(0x146D3620)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREB2460D7A_OFFSET UNITYSDK_OFFSET(0x146D13B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREB28B5D50_OFFSET UNITYSDK_OFFSET(0x146CF460)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBB898C91_OFFSET UNITYSDK_OFFSET(0x146CE530)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBD24DE27_OFFSET UNITYSDK_OFFSET(0x146CFAB0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_1_OFFSET UNITYSDK_OFFSET(0x146CF180)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_OFFSET UNITYSDK_OFFSET(0x146CEED0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC5A3A88D_OFFSET UNITYSDK_OFFSET(0x146D10C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC7C5CC77_OFFSET UNITYSDK_OFFSET(0x146D2100)
#define CRIWARE_CRIMANA_PLAYER_CRIWARECEA2FA98_OFFSET UNITYSDK_OFFSET(0x146D4010)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED30C9C6F_OFFSET UNITYSDK_OFFSET(0x146D0C00)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED99932F6_OFFSET UNITYSDK_OFFSET(0x146D0320)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED9F7168D_OFFSET UNITYSDK_OFFSET(0x146D3CD0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREDA0693CD_OFFSET UNITYSDK_OFFSET(0x146CF4F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREE2DF1163_OFFSET UNITYSDK_OFFSET(0x146D3710)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEB32FC73_OFFSET UNITYSDK_OFFSET(0x146CFD10)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEDB46019_OFFSET UNITYSDK_OFFSET(0x146CEB70)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEFA5210A_OFFSET UNITYSDK_OFFSET(0x146CE8E0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREF4B0CC4E_OFFSET UNITYSDK_OFFSET(0x146D1540)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREFD186F02_OFFSET UNITYSDK_OFFSET(0x146CC8A0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET UNITYSDK_OFFSET(0x146D35A0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x146CBFA0)
#define CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x146D1960)
#define CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET UNITYSDK_OFFSET(0x146CE5B0)
#define CRIWARE_CRIMANA_PLAYER_DISPOSERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x146CD900)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x146CD090)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146CD650)
#define CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x146CD020)
#define CRIWARE_CRIMANA_PLAYER_GETDISPLAYEDFRAMENO_OFFSET UNITYSDK_OFFSET(0x146D1BE0)
#define CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x146D1020)
#define CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x146D0DC0)
#define CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET UNITYSDK_OFFSET(0x146D1AC0)
#define CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x146D0B60)
#define CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x146CC2D0)
#define CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x146CC310)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEX3DSOURCEFORAMBISONICS_OFFSET UNITYSDK_OFFSET(0x146CC5A0)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEXPLAYER_OFFSET UNITYSDK_OFFSET(0x146CC590)
#define CRIWARE_CRIMANA_PLAYER_GET_FRAMEINFO_OFFSET UNITYSDK_OFFSET(0x146CC380)
#define CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x146D3590)
#define CRIWARE_CRIMANA_PLAYER_GET_ISFRAMEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x146CC350)
#define CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x146CC2F0)
#define CRIWARE_CRIMANA_PLAYER_GET_MOVIEINFO_OFFSET UNITYSDK_OFFSET(0x146CC360)
#define CRIWARE_CRIMANA_PLAYER_GET_NATIVESTATUS_OFFSET UNITYSDK_OFFSET(0x146CC420)
#define CRIWARE_CRIMANA_PLAYER_GET_NUMBEROFENTRIES_OFFSET UNITYSDK_OFFSET(0x146CC430)
#define CRIWARE_CRIMANA_PLAYER_GET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x146CC5C0)
#define CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x146CC050)
#define CRIWARE_CRIMANA_PLAYER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x146CC3A0)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x146CC550)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBTITLESIZE_OFFSET UNITYSDK_OFFSET(0x146CC570)
#define CRIWARE_CRIMANA_PLAYER_GET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x146CC5B0)
#define CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x146CC330)
#define CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x146D1D00)
#define CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x146D2190)
#define CRIWARE_CRIMANA_PLAYER_INVOKEPLAYERSTATUSCHECK_OFFSET UNITYSDK_OFFSET(0x146CC090)
#define CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x146CE830)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x146D33F0)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET UNITYSDK_OFFSET(0x146D36A0)
#define CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET UNITYSDK_OFFSET(0x146CF8D0)
#define CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x146D31D0)
#define CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x146D4090)
#define CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x146CE350)
#define CRIWARE_CRIMANA_PLAYER_PREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x146CE040)
#define CRIWARE_CRIMANA_PLAYER_PREPARENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x146CDA10)
#define CRIWARE_CRIMANA_PLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x146CD9C0)
#define CRIWARE_CRIMANA_PLAYER_REMOVE_ONSUBTITLECHANGED_OFFSET UNITYSDK_OFFSET(0x146CC250)
#define CRIWARE_CRIMANA_PLAYER_SETASRRACKID_OFFSET UNITYSDK_OFFSET(0x146D1D20)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x146D03A0)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x146D0270)
#define CRIWARE_CRIMANA_PLAYER_SETBUFFERINGTIME_OFFSET UNITYSDK_OFFSET(0x146D0000)
#define CRIWARE_CRIMANA_PLAYER_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x146D1140)
#define CRIWARE_CRIMANA_PLAYER_SETCONTENTID_OFFSET UNITYSDK_OFFSET(0x146CF230)
#define CRIWARE_CRIMANA_PLAYER_SETDATA_1_OFFSET UNITYSDK_OFFSET(0x146CEF70)
#define CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET UNITYSDK_OFFSET(0x146CECD0)
#define CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x146D1E50)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x146D1460)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x146D08C0)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x146D0790)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x146D0EE0)
#define CRIWARE_CRIMANA_PLAYER_SETFILERANGE_OFFSET UNITYSDK_OFFSET(0x146CF590)
#define CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET UNITYSDK_OFFSET(0x146CE960)
#define CRIWARE_CRIMANA_PLAYER_SETMANUALTIMERUNIT_OFFSET UNITYSDK_OFFSET(0x146D2DB0)
#define CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET UNITYSDK_OFFSET(0x146CFA00)
#define CRIWARE_CRIMANA_PLAYER_SETMAXPICTUREDATASIZE_OFFSET UNITYSDK_OFFSET(0x146CFED0)
#define CRIWARE_CRIMANA_PLAYER_SETMINBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x146D0140)
#define CRIWARE_CRIMANA_PLAYER_SETMOVIEEVENTSYNCMODE_OFFSET UNITYSDK_OFFSET(0x146CFC60)
#define CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET UNITYSDK_OFFSET(0x146CFB30)
#define CRIWARE_CRIMANA_PLAYER_SETSHADERDISPATCHCALLBACK_OFFSET UNITYSDK_OFFSET(0x146D1AB0)
#define CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET UNITYSDK_OFFSET(0x146CFD90)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x146D12D0)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x146D0630)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x146D0500)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x146D0C80)
#define CRIWARE_CRIMANA_PLAYER_SETSUBTITLECHANNEL_OFFSET UNITYSDK_OFFSET(0x146D15F0)
#define CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x146D0A20)
#define CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x146CC2E0)
#define CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x146CC320)
#define CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x146CC300)
#define CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x146CC5D0)
#define CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x146CC060)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x146CC560)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET UNITYSDK_OFFSET(0x146CC580)
#define CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x146CC340)
#define CRIWARE_CRIMANA_PLAYER_START_OFFSET UNITYSDK_OFFSET(0x146CE220)
#define CRIWARE_CRIMANA_PLAYER_STOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x146CE5E0)
#define CRIWARE_CRIMANA_PLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x146CE420)
#define CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x146D3540)
#define CRIWARE_CRIMANA_PLAYER_UPDATENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x146CDBF0)
#define CRIWARE_CRIMANA_PLAYER_UPDATEWITHMANUALTIMEADVANCED_OFFSET UNITYSDK_OFFSET(0x146D2FC0)
#define CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET UNITYSDK_OFFSET(0x146D1F80)
#define CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x146D31B0)
#define CRIWARE_CRIMANA_PLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x146D42F0)
#define CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x146CC920)
#define CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x146CC5E0)
#define CRIWARE_CRIMANA_PLAYER__PAUSEFORPREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x146CE150)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_TypeDefinitionIndex = 37249;

	class Player : public ::CriWare::CriDisposable
	{
	public:
		static ::CriWare::CriMana::Player** StaticGet_updatingPlayer()
		{
			return (::CriWare::CriMana::Player**)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0x7D90);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet__criWareWaitForGfxThreadPresent()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0x3780);
		}
		// static const ::System::Int32 InvalidPlayerId = 0xFFFFFFFF; // 0x0
		::CriWare::CriManaMoviePlayerHolder* _playerHolder_k__BackingField; // 0x20
		::CriWare::CriMana::Detail::RendererResource* rendererResource; // 0x28
		::CriWare::CriMana::Player_ShaderDispatchCallback* _shaderDispatchCallback; // 0x30
		::CriWare::CriAtomEx3dSource* _atomEx3Dsource; // 0x38
		::CriWare::CriMana::Player_StatusChangeCallback* statusChangeCallback; // 0x40
		::CriWare::CriMana::MovieInfo* _movieInfo; // 0x48
		::CriWare::CriMana::Player_CuePointCallback* cuePointCallback; // 0x50
		::CriWare::CriMana::FrameInfo* _frameInfo; // 0x58
		::CriWare::CriAtomExPlayer* _atomExPlayer; // 0x60
		::CriWare::CriMana::Player_SubtitleChangeCallback* OnSubtitleChanged; // 0x68
		::System::Int32 subtitleBufferSize; // 0x70
		::System::Nullable_1<::CriWare::CriMana::Player_Status> lastNativeStatus; // 0x74
		::CriWare::CriMana::Player_Status _nativeStatus; // 0x7C
		::System::Int32 playerId; // 0x80
		::System::UInt32 droppedFrameCount; // 0x84
		::System::Boolean isDisposed; // 0x88
		::System::Boolean _applyTargetAlpha_k__BackingField; // 0x89
		::System::Boolean _uiRenderMode_k__BackingField; // 0x8A
		::System::Boolean isStoppingForSeek; // 0x8B
		::System::Boolean wasStopping; // 0x8C
		::System::Boolean isPreparingForRendering; // 0x8D
		::System::Boolean isNativeStartInvoked; // 0x8E
		::System::Boolean isNativeInitialized; // 0x8F
		::System::IntPtr _subtitleBuffer_k__BackingField; // 0x90
		::CriWare::CriMana::Player_TimerType _timerType; // 0x98
		::System::Int32 _subtitleSize_k__BackingField; // 0x9C
		::System::Nullable_1<::CriWare::CriMana::Player_Status> lastPlayerStatus; // 0xA0
		::CriWare::CriMana::Player_Status internalrequiredStatus; // 0xA8
		::System::Boolean enableSubtitle; // 0xAC
		::System::Boolean isMovieInfoAvailable; // 0xAD
		::System::Boolean _additiveMode_k__BackingField; // 0xAE
		::System::Boolean isFrameInfoAvailable; // 0xAF
		::System::Int32 _maxFrameDrop_k__BackingField; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CCTOR_OFFSET))();
		}

		::CriWare::CriMana::Player_Status get_requiredStatus()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET))(this);
		}

		::System::Void set_requiredStatus(::CriWare::CriMana::Player_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_Status))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET))(this, a1);
		}

		::System::Void add_OnSubtitleChanged(::CriWare::CriMana::Player_SubtitleChangeCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_SubtitleChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ADD_ONSUBTITLECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSubtitleChanged(::CriWare::CriMana::Player_SubtitleChangeCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_SubtitleChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_REMOVE_ONSUBTITLECHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_additiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET))(this);
		}

		::System::Void set_additiveMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET))(this, a1);
		}

		::System::Int32 get_maxFrameDrop()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET))(this);
		}

		::System::Void set_maxFrameDrop(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET))(this, a1);
		}

		::System::Boolean get_applyTargetAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET))(this);
		}

		::System::Void set_applyTargetAlpha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET))(this, a1);
		}

		::System::Boolean get_uiRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET))(this);
		}

		::System::Void set_uiRenderMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET))(this, a1);
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

		::System::Void set_subtitleBuffer(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET))(this, a1);
		}

		::System::Int32 get_subtitleSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_SUBTITLESIZE_OFFSET))(this);
		}

		::System::Void set_subtitleSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET))(this, a1);
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

		::System::Void set_playerHolder(::CriWare::CriManaMoviePlayerHolder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMoviePlayerHolder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Void CreateRendererResource(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CREATERENDERERRESOURCE_OFFSET))(this, a1, a2, a3);
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

		::System::Void Pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET))(this, a1);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean SetFile(::CriWare::CriFsBinder* a1, ::System::String* a2, ::CriWare::CriMana::Player_SetMode a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetData(::System::IntPtr a1, ::System::Int64 a2, ::CriWare::CriMana::Player_SetMode a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetData_1(::Il2CppArray<::System::Byte>* a1, ::System::Int64 a2, ::CriWare::CriMana::Player_SetMode a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDATA_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetContentId(::CriWare::CriFsBinder* a1, ::System::Int32 a2, ::CriWare::CriMana::Player_SetMode a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::Int32, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETCONTENTID_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetFileRange(::System::String* a1, ::System::UInt64 a2, ::System::Int64 a3, ::CriWare::CriMana::Player_SetMode a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt64, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETFILERANGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Loop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET))(this, a1);
		}

		::System::Void SetMasterTimerType(::CriWare::CriMana::Player_TimerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET))(this, a1);
		}

		::System::Void SetSeekPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetMovieEventSyncMode(::CriWare::CriMana::Player_MovieEventSyncMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_MovieEventSyncMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMOVIEEVENTSYNCMODE_OFFSET))(this, a1);
		}

		::System::Void SetSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET))(this, a1);
		}

		::System::Void SetMaxPictureDataSize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMAXPICTUREDATASIZE_OFFSET))(this, a1);
		}

		::System::Void SetBufferingTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETBUFFERINGTIME_OFFSET))(this, a1);
		}

		::System::Void SetMinBufferSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMINBUFFERSIZE_OFFSET))(this, a1);
		}

		::System::Void SetAudioTrack(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET))(this, a1);
		}

		::System::Void SetAudioTrack_1(::CriWare::CriMana::Player_AudioTrack a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_1_OFFSET))(this, a1);
		}

		::System::Void SetSubAudioTrack(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_OFFSET))(this, a1);
		}

		::System::Void SetSubAudioTrack_1(::CriWare::CriMana::Player_AudioTrack a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_1_OFFSET))(this, a1);
		}

		::System::Void SetExtraAudioTrack(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_OFFSET))(this, a1);
		}

		::System::Void SetExtraAudioTrack_1(::CriWare::CriMana::Player_AudioTrack a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_1_OFFSET))(this, a1);
		}

		::System::Void SetVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET))(this, a1);
		}

		::System::Single GetVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET))(this);
		}

		::System::Void SetSubAudioVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET))(this, a1);
		}

		::System::Single GetSubAudioVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET))(this);
		}

		::System::Void SetExtraAudioVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET))(this, a1);
		}

		::System::Single GetExtraAudioVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET))(this);
		}

		::System::Void SetBusSendLevel(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETBUSSENDLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void SetSubAudioBusSendLevel(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOBUSSENDLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void SetExtraAudioBusSendLevel(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOBUSSENDLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void SetSubtitleChannel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBTITLECHANNEL_OFFSET))(this, a1);
		}

		::System::Void SetShaderDispatchCallback(::CriWare::CriMana::Player_ShaderDispatchCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_ShaderDispatchCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSHADERDISPATCHCALLBACK_OFFSET))(this, a1);
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

		::System::Void SetAsrRackId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETASRRACKID_OFFSET))(this, a1);
		}

		::System::Void SetDecryptionKey(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET))(this, a1);
		}

		::System::Void UpdateWithUserTime(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET))(this, a1, a2);
		}

		::System::Void SetManualTimerUnit(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMANUALTIMERUNIT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateWithManualTimeAdvanced()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEWITHMANUALTIMEADVANCED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void OnWillRenderObject(::CriWare::CriManaMovieMaterialBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET))(this, a1);
		}

		::System::Boolean UpdateMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_isAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET))(this);
		}

		::System::Void IssuePluginEvent(::CriWare::CriMana::Player_CriManaUnityPlayer_RenderEventAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_CriManaUnityPlayer_RenderEventAction))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET))(this, a1);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void InternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* IssuePluginUpdatesForFrames(::System::Int32 a1, ::UnityEngine::MonoBehaviour* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::UnityEngine::MonoBehaviour*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DisableInfos(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET))(this, a1);
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

		::System::Void AllocateSubtitleBuffer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET))(this, a1);
		}

		::System::Void DeallocateSubtitleBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET))(this);
		}

		::System::Void PauseOnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		static ::System::Void CuePointCallbackFromNative(::System::IntPtr a1, ::System::IntPtr a2, ::CriWare::CriMana::EventPoint& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CRIWAREFD186F02()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREFD186F02_OFFSET))();
		}

		static ::System::Int32 CRIWARE72A5B8BF()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE72A5B8BF_OFFSET))();
		}

		static ::System::Int32 CRIWARE95A85424(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE95A85424_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWAREABF659EC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREABF659EC_OFFSET))(a1);
		}

		static ::System::Void CRIWAREEDB46019(::System::Int32 a1, ::System::IntPtr a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEDB46019_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWAREB28B5D50(::System::Int32 a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREB28B5D50_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE65553651(::System::Int32 a1, ::System::String* a2, ::System::UInt64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::UInt64, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE65553651_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CRIWARE7C753A2E(::System::Int32 a1, ::System::IntPtr a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE7C753A2E_1(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CRIWARE328F2911(::System::Int32 a1, ::System::IntPtr a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE328F2911_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CRIWAREDA0693CD(::System::Int32 a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREDA0693CD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CRIWARE162DD162(::System::Int32 a1, ::System::String* a2, ::System::UInt64 a3, ::System::Int64 a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::System::UInt64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE162DD162_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CRIWAREC35C3DC3(::System::Int32 a1, ::System::IntPtr a2, ::System::Int64 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CRIWAREC35C3DC3_1(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int64 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CRIWARE66A63134(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE66A63134_OFFSET))(a1);
		}

		static ::System::Int32 CRIWARE88D04318(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE88D04318_OFFSET))(a1);
		}

		static ::System::Void CRIWARED9F7168D(::System::Int32 a1, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED9F7168D_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE1E785A43(::System::Int32 a1, ::CriWare::CriMana::MovieInfo* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1E785A43_OFFSET))(a1, a2);
		}

		static ::System::Int32 CRIWARE3CE8CE6A(::System::Int32 a1, ::System::IntPtr a2, ::System::UInt32& a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE3CE8CE6A_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE362A826C(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE362A826C_OFFSET))(a1);
		}

		static ::System::Void CRIWARE61523A0C(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE61523A0C_OFFSET))(a1);
		}

		static ::System::Void CRIWAREBB898C91(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBB898C91_OFFSET))(a1);
		}

		static ::System::Void CRIWARE705B8C6D(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE705B8C6D_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWAREEB32FC73(::System::Int32 a1, ::CriWare::CriMana::Player_MovieEventSyncMode a2)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_MovieEventSyncMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEB32FC73_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE18BFCB88(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE18BFCB88_OFFSET))(a1, a2);
		}

		static ::System::Boolean CRIWAREEFA5210A(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEFA5210A_OFFSET))(a1);
		}

		static ::System::Void CRIWARE4331E077(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE4331E077_OFFSET))(a1, a2);
		}

		static ::System::Int64 CRIWARE7779586C(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7779586C_OFFSET))(a1);
		}

		static ::System::Int32 CRIWARE33981CC9(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE33981CC9_OFFSET))(a1);
		}

		static ::System::IntPtr CRIWARE165B6B70(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE165B6B70_OFFSET))(a1);
		}

		static ::System::Int32 CRIWARE7500F0DD(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7500F0DD_OFFSET))(a1);
		}

		static ::System::Void CRIWARED99932F6(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED99932F6_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE1FF2F5BE(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1FF2F5BE_OFFSET))(a1, a2);
		}

		static ::System::Single CRIWARED30C9C6F(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED30C9C6F_OFFSET))(a1);
		}

		static ::System::Void CRIWARE0EA59F65(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE0EA59F65_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE1EBB12C5(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1EBB12C5_OFFSET))(a1, a2);
		}

		static ::System::Single CRIWARE966C4BA9(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE966C4BA9_OFFSET))(a1);
		}

		static ::System::Void CRIWARE213452EF(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE213452EF_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE0348BF1B(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE0348BF1B_OFFSET))(a1, a2);
		}

		static ::System::Single CRIWAREC5A3A88D(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC5A3A88D_OFFSET))(a1);
		}

		static ::System::Void CRIWARE31668293(::System::Int32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE31668293_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWAREB2460D7A(::System::Int32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREB2460D7A_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWAREF4B0CC4E(::System::Int32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREF4B0CC4E_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE2C8FF595(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE2C8FF595_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWAREAB576D15(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREAB576D15_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE3F9C5D06(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE3F9C5D06_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE8A87737B(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE8A87737B_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE6756AE56(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE6756AE56_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWAREA7F6DE6B(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREA7F6DE6B_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWAREE2DF1163(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREE2DF1163_OFFSET))(a1);
		}

		static ::System::Void CRIWAREBD24DE27(::System::Int32 a1, ::CriWare::CriMana::Player_TimerType a2)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBD24DE27_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWAREC7C5CC77(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC7C5CC77_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWAREA59E0F01(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREA59E0F01_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE55ECC3E4(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE55ECC3E4_OFFSET))(a1);
		}

		static ::System::Void CRIWARECEA2FA98(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARECEA2FA98_OFFSET))(a1);
		}

		static ::System::IntPtr CRIWARE27ED314F(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE27ED314F_OFFSET))(a1, a2);
		}

		static ::System::Boolean CRIWARE725ED4B4(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE725ED4B4_OFFSET))(a1);
		}

		static ::System::Void CRIWARE419ECAF8(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE419ECAF8_OFFSET))(a1);
		}

		static ::System::Void CRIWARE662A91B8(::System::Int32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE662A91B8_OFFSET))(a1, a2);
		}

		static ::System::IntPtr criWareUnity_GetRenderEventFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET))();
		}
	};
}
