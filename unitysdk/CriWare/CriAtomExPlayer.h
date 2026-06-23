#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExBeatSync_Info.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
#include "unitysdk/CriWare/CriAtomExPlayer_Config.h"
#include "unitysdk/CriWare/CriAtomExPlayer_Status.h"
#include "unitysdk/CriWare/CriAtomEx_PanType.h"
#include "unitysdk/CriWare/CriAtomEx_Parameter.h"
#include "unitysdk/CriWare/CriAtomEx_ResumeMode.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomEx3dListener; }
namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomExBeatSync_CbFunc; }
namespace CriWare { class CriAtomExSequencer_EventCallback; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYERPARAMETER_REMOVEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E6E3890)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6E11E0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E6E1730)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETPARAMETERFLOAT32_OFFSET UNITYSDK_OFFSET(0x1E6E3430)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETPARAMETERSINT32_OFFSET UNITYSDK_OFFSET(0x1E6E3540)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETPLAYERPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E6E3810)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E6E3330)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1E6E3230)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1E6E1EF0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_LIMITLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0x1E6E3790)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E6E1CF0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_RESUME_OFFSET UNITYSDK_OFFSET(0x1E6E1DF0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SET3DLISTENERHN_OFFSET UNITYSDK_OFFSET(0x1E6E2E30)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SET3DSOURCEHN_OFFSET UNITYSDK_OFFSET(0x1E6E2D10)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x1E6E2BE0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x1E6E2AA0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETBUSSENDLEVELBYNAME_OFFSET UNITYSDK_OFFSET(0x1E6E25A0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETBUSSENDLEVELOFFSETBYNAME_OFFSET UNITYSDK_OFFSET(0x1E6E2820)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETBUSSENDLEVELOFFSET_OFFSET UNITYSDK_OFFSET(0x1E6E2960)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1E6E26E0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETCUEID_OFFSET UNITYSDK_OFFSET(0x1E6E19E0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETCUENAME_OFFSET UNITYSDK_OFFSET(0x1E6E1880)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETPAN3DANGLE_OFFSET UNITYSDK_OFFSET(0x1E6E2240)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETPAN3DINTERIORDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E6E2360)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETPANTYPE_OFFSET UNITYSDK_OFFSET(0x1E6E2470)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETPITCH_OFFSET UNITYSDK_OFFSET(0x1E6E2120)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1E6E2F30)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1E6E2000)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_START_OFFSET UNITYSDK_OFFSET(0x1E6E1BF0)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x1E6E3B10)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1E6E3A10)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_UPDATEALL_OFFSET UNITYSDK_OFFSET(0x1E6E3130)
#define CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E6E3030)
#define CRIWARE_CRIATOMEXPLAYER_CRIWARE348B99F2_OFFSET UNITYSDK_OFFSET(0x1E6E16B0)
#define CRIWARE_CRIATOMEXPLAYER_CRIWARE94DBB2A3_OFFSET UNITYSDK_OFFSET(0x1E6E3A90)
#define CRIWARE_CRIATOMEXPLAYER_CRIWAREBAFBC575_OFFSET UNITYSDK_OFFSET(0x1E6E1B70)
#define CRIWARE_CRIATOMEXPLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E6E12B0)
#define CRIWARE_CRIATOMEXPLAYER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E6E3B90)
#define CRIWARE_CRIATOMEXPLAYER_GETPARAMETERFLOAT32_OFFSET UNITYSDK_OFFSET(0x1E6E33B0)
#define CRIWARE_CRIATOMEXPLAYER_GETPARAMETERSINT32_OFFSET UNITYSDK_OFFSET(0x1E6E34B0)
#define CRIWARE_CRIATOMEXPLAYER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E6E32B0)
#define CRIWARE_CRIATOMEXPLAYER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1E6E31B0)
#define CRIWARE_CRIATOMEXPLAYER_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E6E0F10)
#define CRIWARE_CRIATOMEXPLAYER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E6E0F00)
#define CRIWARE_CRIATOMEXPLAYER_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1E6E1E70)
#define CRIWARE_CRIATOMEXPLAYER_LOOP_OFFSET UNITYSDK_OFFSET(0x1E6E35D0)
#define CRIWARE_CRIATOMEXPLAYER_ONBEATSYNCCALLBACKCHAININTERNAL_OFFSET UNITYSDK_OFFSET(0x1E6E3C00)
#define CRIWARE_CRIATOMEXPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E6E1C70)
#define CRIWARE_CRIATOMEXPLAYER_RESUME_OFFSET UNITYSDK_OFFSET(0x1E6E1D70)
#define CRIWARE_CRIATOMEXPLAYER_SET3DLISTENER_OFFSET UNITYSDK_OFFSET(0x1E6E2D90)
#define CRIWARE_CRIATOMEXPLAYER_SET3DSOURCE_OFFSET UNITYSDK_OFFSET(0x1E6E2C70)
#define CRIWARE_CRIATOMEXPLAYER_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1E6E2B50)
#define CRIWARE_CRIATOMEXPLAYER_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1E6E29F0)
#define CRIWARE_CRIATOMEXPLAYER_SETBUSSENDLEVELOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1E6E28D0)
#define CRIWARE_CRIATOMEXPLAYER_SETBUSSENDLEVELOFFSET_OFFSET UNITYSDK_OFFSET(0x1E6E2770)
#define CRIWARE_CRIATOMEXPLAYER_SETBUSSENDLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1E6E2650)
#define CRIWARE_CRIATOMEXPLAYER_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1E6E24F0)
#define CRIWARE_CRIATOMEXPLAYER_SETCUE_1_OFFSET UNITYSDK_OFFSET(0x1E6E1930)
#define CRIWARE_CRIATOMEXPLAYER_SETCUE_OFFSET UNITYSDK_OFFSET(0x1E6E17B0)
#define CRIWARE_CRIATOMEXPLAYER_SETPAN3DANGLE_OFFSET UNITYSDK_OFFSET(0x1E6E21B0)
#define CRIWARE_CRIATOMEXPLAYER_SETPAN3DINTERIORDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E6E22D0)
#define CRIWARE_CRIATOMEXPLAYER_SETPANTYPE_OFFSET UNITYSDK_OFFSET(0x1E6E23F0)
#define CRIWARE_CRIATOMEXPLAYER_SETPITCH_OFFSET UNITYSDK_OFFSET(0x1E6E2090)
#define CRIWARE_CRIATOMEXPLAYER_SETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1E6E2EB0)
#define CRIWARE_CRIATOMEXPLAYER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1E6E1F70)
#define CRIWARE_CRIATOMEXPLAYER_START_OFFSET UNITYSDK_OFFSET(0x1E6E1A70)
#define CRIWARE_CRIATOMEXPLAYER_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x1E6E15B0)
#define CRIWARE_CRIATOMEXPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1E6E3910)
#define CRIWARE_CRIATOMEXPLAYER_UPDATEALL_OFFSET UNITYSDK_OFFSET(0x1E6E30B0)
#define CRIWARE_CRIATOMEXPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E6E2FB0)
#define CRIWARE_CRIATOMEXPLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6E11C0)
#define CRIWARE_CRIATOMEXPLAYER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E6E0F40)
#define CRIWARE_CRIATOMEXPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E0F20)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayer_TypeDefinitionIndex = 34301;

	class CriAtomExPlayer : public ::CriWare::CriDisposable
	{
	public:
		::CriWare::CriAtomExBeatSync_CbFunc* _onBeatSyncCallback; // 0x20
		::CriWare::CriAtomExSequencer_EventCallback* _onSequenceCallback; // 0x28
		::System::Boolean hasExistingNativeHandle; // 0x30
		::System::Int32 max_path; // 0x34
		::System::IntPtr entryPoolHandle; // 0x38
		::System::IntPtr handle; // 0x40
		::System::Int32 _entryPoolCapacity; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr existingNativeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER__CTOR_1_OFFSET))(this, existingNativeHandle);
		}

		::System::Void _ctor_2(::System::Int32 maxPath, ::System::Int32 maxPathStrings, ::System::Boolean enableAudioSyncedTimer, ::System::IntPtr existingNativeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER__CTOR_2_OFFSET))(this, maxPath, maxPathStrings, enableAudioSyncedTimer, existingNativeHandle);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Boolean get_isAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCue(::CriWare::CriAtomExAcb* acb, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcb*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETCUE_OFFSET))(this, acb, name);
		}

		::System::Void SetCue_1(::CriWare::CriAtomExAcb* acb, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcb*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETCUE_1_OFFSET))(this, acb, id);
		}

		::CriWare::CriAtomExPlayback Start()
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_START_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_PAUSE_OFFSET))(this);
		}

		::System::Void Resume(::CriWare::CriAtomEx_ResumeMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_ResumeMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_RESUME_OFFSET))(this, mode);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_ISPAUSED_OFFSET))(this);
		}

		::System::Void SetVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETVOLUME_OFFSET))(this, volume);
		}

		::System::Void SetPitch(::System::Single pitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETPITCH_OFFSET))(this, pitch);
		}

		::System::Void SetPan3dAngle(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETPAN3DANGLE_OFFSET))(this, angle);
		}

		::System::Void SetPan3dInteriorDistance(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETPAN3DINTERIORDISTANCE_OFFSET))(this, distance);
		}

		::System::Void SetPanType(::CriWare::CriAtomEx_PanType panType)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_PanType))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETPANTYPE_OFFSET))(this, panType);
		}

		::System::Void SetBusSendLevel(::System::String* busName, ::System::Single level)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETBUSSENDLEVEL_OFFSET))(this, busName, level);
		}

		::System::Void SetBusSendLevel_1(::System::Int32 busId, ::System::Single level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETBUSSENDLEVEL_1_OFFSET))(this, busId, level);
		}

		::System::Void SetBusSendLevelOffset(::System::String* busName, ::System::Single levelOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETBUSSENDLEVELOFFSET_OFFSET))(this, busName, levelOffset);
		}

		::System::Void SetBusSendLevelOffset_1(::System::Int32 busId, ::System::Single levelOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETBUSSENDLEVELOFFSET_1_OFFSET))(this, busId, levelOffset);
		}

		::System::Void SetAisacControl(::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETAISACCONTROL_OFFSET))(this, controlName, value);
		}

		::System::Void SetAisacControl_1(::System::UInt32 controlId, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETAISACCONTROL_1_OFFSET))(this, controlId, value);
		}

		::System::Void Set3dSource(::CriWare::CriAtomEx3dSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dSource*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SET3DSOURCE_OFFSET))(this, source);
		}

		::System::Void Set3dListener(::CriWare::CriAtomEx3dListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SET3DLISTENER_OFFSET))(this, listener);
		}

		::System::Void SetStartTime(::System::Int64 startTimeMs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_SETSTARTTIME_OFFSET))(this, startTimeMs);
		}

		::System::Void Update(::CriWare::CriAtomExPlayback playback)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExPlayback))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_UPDATE_OFFSET))(this, playback);
		}

		::System::Void UpdateAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_UPDATEALL_OFFSET))(this);
		}

		::System::Int64 GetTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_GETTIME_OFFSET))(this);
		}

		::CriWare::CriAtomExPlayer_Status GetStatus()
		{
			return ((::CriWare::CriAtomExPlayer_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_GETSTATUS_OFFSET))(this);
		}

		::System::Single GetParameterFloat32(::CriWare::CriAtomEx_Parameter id)
		{
			return ((::System::Single(*)(::PVOID, ::CriWare::CriAtomEx_Parameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_GETPARAMETERFLOAT32_OFFSET))(this, id);
		}

		::System::Int32 GetParameterSint32(::CriWare::CriAtomEx_Parameter id)
		{
			return ((::System::Int32(*)(::PVOID, ::CriWare::CriAtomEx_Parameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_GETPARAMETERSINT32_OFFSET))(this, id);
		}

		::System::Void Loop(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_LOOP_OFFSET))(this, sw);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_STOP_OFFSET))(this);
		}

		::System::Void StopWithoutReleaseTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_STOPWITHOUTRELEASETIME_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_FINALIZE_OFFSET))(this);
		}

		::System::Void OnBeatSyncCallbackChainInternal(::CriWare::CriAtomExBeatSync_Info& info)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_ONBEATSYNCCALLBACKCHAININTERNAL_OFFSET))(this, info);
		}

		static ::System::IntPtr criAtomExPlayer_Create(::CriWare::CriAtomExPlayer_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExPlayer_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomExPlayer_Destroy(::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_DESTROY_OFFSET))(player);
		}

		static ::System::Void criAtomExPlayer_SetCueId(::System::IntPtr player, ::System::IntPtr acb_hn, ::System::Int32 id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETCUEID_OFFSET))(player, acb_hn, id);
		}

		static ::System::Void criAtomExPlayer_SetCueName(::System::IntPtr player, ::System::IntPtr acb_hn, ::System::String* cue_name)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETCUENAME_OFFSET))(player, acb_hn, cue_name);
		}

		static ::System::UInt32 criAtomExPlayer_Start(::System::IntPtr player)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_START_OFFSET))(player);
		}

		static ::System::Void criAtomExPlayer_Stop(::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_STOP_OFFSET))(player);
		}

		static ::System::Void criAtomExPlayer_StopWithoutReleaseTime(::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_STOPWITHOUTRELEASETIME_OFFSET))(player);
		}

		static ::System::Void criAtomExPlayer_Pause(::System::IntPtr player, ::System::Boolean sw)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_PAUSE_OFFSET))(player, sw);
		}

		static ::System::Void criAtomExPlayer_Resume(::System::IntPtr player, ::CriWare::CriAtomEx_ResumeMode mode)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_ResumeMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_RESUME_OFFSET))(player, mode);
		}

		static ::System::Boolean criAtomExPlayer_IsPaused(::System::IntPtr player)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_ISPAUSED_OFFSET))(player);
		}

		static ::CriWare::CriAtomExPlayer_Status criAtomExPlayer_GetStatus(::System::IntPtr player)
		{
			return ((::CriWare::CriAtomExPlayer_Status(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETSTATUS_OFFSET))(player);
		}

		static ::System::Int64 criAtomExPlayer_GetTime(::System::IntPtr player)
		{
			return ((::System::Int64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETTIME_OFFSET))(player);
		}

		static ::System::Void CRIWARE348B99F2(::System::IntPtr pool)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIWARE348B99F2_OFFSET))(pool);
		}

		static ::System::Void CRIWAREBAFBC575(::System::IntPtr pool)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIWAREBAFBC575_OFFSET))(pool);
		}

		static ::System::Void CRIWARE94DBB2A3(::System::IntPtr pool)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIWARE94DBB2A3_OFFSET))(pool);
		}

		static ::System::Void criAtomExPlayer_SetStartTime(::System::IntPtr player, ::System::Int64 start_time_ms)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETSTARTTIME_OFFSET))(player, start_time_ms);
		}

		static ::System::Void criAtomExPlayer_LimitLoopCount(::System::IntPtr player, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_LIMITLOOPCOUNT_OFFSET))(player, count);
		}

		static ::System::Void criAtomExPlayer_Update(::System::IntPtr player, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_UPDATE_OFFSET))(player, id);
		}

		static ::System::Void criAtomExPlayer_UpdateAll(::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_UPDATEALL_OFFSET))(player);
		}

		static ::System::Single criAtomExPlayer_GetParameterFloat32(::System::IntPtr player, ::CriWare::CriAtomEx_Parameter id)
		{
			return ((::System::Single(*)(::System::IntPtr, ::CriWare::CriAtomEx_Parameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETPARAMETERFLOAT32_OFFSET))(player, id);
		}

		static ::System::Int32 criAtomExPlayer_GetParameterSint32(::System::IntPtr player, ::CriWare::CriAtomEx_Parameter id)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriAtomEx_Parameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETPARAMETERSINT32_OFFSET))(player, id);
		}

		static ::System::IntPtr criAtomExPlayer_GetPlayerParameter(::System::IntPtr player)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_GETPLAYERPARAMETER_OFFSET))(player);
		}

		static ::System::Void criAtomExPlayerParameter_RemoveParameter(::System::IntPtr player_parameter, ::System::UInt16 id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYERPARAMETER_REMOVEPARAMETER_OFFSET))(player_parameter, id);
		}

		static ::System::Void criAtomExPlayer_SetVolume(::System::IntPtr player, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETVOLUME_OFFSET))(player, volume);
		}

		static ::System::Void criAtomExPlayer_SetPitch(::System::IntPtr player, ::System::Single pitch)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETPITCH_OFFSET))(player, pitch);
		}

		static ::System::Void criAtomExPlayer_SetPan3dAngle(::System::IntPtr player, ::System::Single pan3d_angle)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETPAN3DANGLE_OFFSET))(player, pan3d_angle);
		}

		static ::System::Void criAtomExPlayer_SetPan3dInteriorDistance(::System::IntPtr player, ::System::Single pan3d_interior_distance)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETPAN3DINTERIORDISTANCE_OFFSET))(player, pan3d_interior_distance);
		}

		static ::System::Void criAtomExPlayer_SetPanType(::System::IntPtr player, ::CriWare::CriAtomEx_PanType panType)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_PanType))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETPANTYPE_OFFSET))(player, panType);
		}

		static ::System::Void criAtomExPlayer_SetBusSendLevel(::System::IntPtr player, ::System::Int32 bus_id, ::System::Single level)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETBUSSENDLEVEL_OFFSET))(player, bus_id, level);
		}

		static ::System::Void criAtomExPlayer_SetBusSendLevelByName(::System::IntPtr player, ::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETBUSSENDLEVELBYNAME_OFFSET))(player, bus_name, level);
		}

		static ::System::Void criAtomExPlayer_SetBusSendLevelOffset(::System::IntPtr player, ::System::Int32 bus_id, ::System::Single level_offset)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETBUSSENDLEVELOFFSET_OFFSET))(player, bus_id, level_offset);
		}

		static ::System::Void criAtomExPlayer_SetBusSendLevelOffsetByName(::System::IntPtr player, ::System::String* bus_name, ::System::Single level_offset)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETBUSSENDLEVELOFFSETBYNAME_OFFSET))(player, bus_name, level_offset);
		}

		static ::System::Void criAtomExPlayer_SetAisacControlById(::System::IntPtr player, ::System::UInt16 control_id, ::System::Single control_value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETAISACCONTROLBYID_OFFSET))(player, control_id, control_value);
		}

		static ::System::Void criAtomExPlayer_SetAisacControlByName(::System::IntPtr player, ::System::String* control_name, ::System::Single control_value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SETAISACCONTROLBYNAME_OFFSET))(player, control_name, control_value);
		}

		static ::System::Void criAtomExPlayer_Set3dSourceHn(::System::IntPtr player, ::System::IntPtr source)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SET3DSOURCEHN_OFFSET))(player, source);
		}

		static ::System::Void criAtomExPlayer_Set3dListenerHn(::System::IntPtr player, ::System::IntPtr listener)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CRIATOMEXPLAYER_SET3DLISTENERHN_OFFSET))(player, listener);
		}
	};
}
