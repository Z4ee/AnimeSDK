#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Audio_PINVOKE_GlobalStats.h"
#include "unitysdk/Audio_PINVOKE_ScePadJackState.h"
#include "unitysdk/Audio_PINVOKE_ScePadVolumeGain.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AUDIO_PINVOKE_GETGLOBALSTATS_OFFSET UNITYSDK_OFFSET(0x15D231B0)
#define AUDIO_PINVOKE_GETMODULEHANDLE_OFFSET UNITYSDK_OFFSET(0x15D232C0)
#define AUDIO_PINVOKE_GETPADERROR_OFFSET UNITYSDK_OFFSET(0x15D23880)
#define AUDIO_PINVOKE_NAP_GETAUDIOBUFFER_OFFSET UNITYSDK_OFFSET(0x15D23230)
#define AUDIO_PINVOKE_SCEPADCLOSE_OFFSET UNITYSDK_OFFSET(0x15D235C0)
#define AUDIO_PINVOKE_SCEPADGETHANDLE_OFFSET UNITYSDK_OFFSET(0x15D23530)
#define AUDIO_PINVOKE_SCEPADGETJACKSTATE_OFFSET UNITYSDK_OFFSET(0x15D23750)
#define AUDIO_PINVOKE_SCEPADINIT_OFFSET UNITYSDK_OFFSET(0x15D23390)
#define AUDIO_PINVOKE_SCEPADOPEN_OFFSET UNITYSDK_OFFSET(0x15D23490)
#define AUDIO_PINVOKE_SCEPADSETAUDIOOUTPATH_OFFSET UNITYSDK_OFFSET(0x15D23640)
#define AUDIO_PINVOKE_SCEPADSETVOLUMEGAIN_OFFSET UNITYSDK_OFFSET(0x15D236C0)
#define AUDIO_PINVOKE_SCEPADTERMINATE_OFFSET UNITYSDK_OFFSET(0x15D23410)
#define AUDIO_PINVOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D23990)

inline static constexpr unsigned int Audio_PINVOKE_TypeDefinitionIndex = 86132;

class Audio_PINVOKE : public ::System::Object
{
public:
	// static const ::System::String* AkSoundEngineDll_Path; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE__CTOR_OFFSET))(this);
	}

	static ::System::Void GetGlobalStats(::Audio_PINVOKE_GlobalStats& out_status)
	{
		return ((::System::Void(*)(::Audio_PINVOKE_GlobalStats&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_GETGLOBALSTATS_OFFSET))(out_status);
	}

	static ::System::Void NAP_GetAudioBuffer(::Il2CppArray<::System::Single>* out_fSamplesData, ::System::UInt32 in_uStartIndex, ::System::UInt32 in_uSize)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_NAP_GETAUDIOBUFFER_OFFSET))(out_fSamplesData, in_uStartIndex, in_uSize);
	}

	static ::System::IntPtr GetModuleHandle(::System::String* lpModuleName)
	{
		return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_GETMODULEHANDLE_OFFSET))(lpModuleName);
	}

	static ::System::UInt32 scePadInit()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADINIT_OFFSET))();
	}

	static ::System::Void scePadTerminate()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADTERMINATE_OFFSET))();
	}

	static ::System::Int32 scePadOpen(::System::Int32 userId, ::System::Int32 type, ::System::Int32 index, ::System::IntPtr pParam)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADOPEN_OFFSET))(userId, type, index, pParam);
	}

	static ::System::Int32 scePadGetHandle(::System::Int32 userId, ::System::Int32 type, ::System::Int32 index)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADGETHANDLE_OFFSET))(userId, type, index);
	}

	static ::System::UInt32 scePadClose(::System::Int32 handle)
	{
		return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADCLOSE_OFFSET))(handle);
	}

	static ::System::UInt32 scePadSetAudioOutPath(::System::Int32 handle, ::System::Int32 path)
	{
		return ((::System::UInt32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADSETAUDIOOUTPATH_OFFSET))(handle, path);
	}

	static ::System::UInt32 scePadSetVolumeGain(::System::Int32 handle, ::Audio_PINVOKE_ScePadVolumeGain& pGain)
	{
		return ((::System::UInt32(*)(::System::Int32, ::Audio_PINVOKE_ScePadVolumeGain&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADSETVOLUMEGAIN_OFFSET))(handle, pGain);
	}

	static ::System::UInt32 scePadGetJackState(::System::Int32 handle, ::Audio_PINVOKE_ScePadJackState& pState)
	{
		return ((::System::UInt32(*)(::System::Int32, ::Audio_PINVOKE_ScePadJackState&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADGETJACKSTATE_OFFSET))(handle, pState);
	}

	static ::System::String* GetPadError(::System::UInt32 ret)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_GETPADERROR_OFFSET))(ret);
	}
};
