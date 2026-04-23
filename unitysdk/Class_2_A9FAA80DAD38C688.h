#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_2490017483959933;
namespace RPGTools::Timeline::Audio { class WwiseExternalAudioConfig; }
namespace System { class Object; }

#define CLASS_2_A9FAA80DAD38C688_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x98E0340)
#define CLASS_2_A9FAA80DAD38C688_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x98E0380)
#define CLASS_2_A9FAA80DAD38C688_GET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0x98E0360)
#define CLASS_2_A9FAA80DAD38C688_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x98E0510)
#define CLASS_2_A9FAA80DAD38C688_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x98E0580)
#define CLASS_2_A9FAA80DAD38C688_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x98E06A0)
#define CLASS_2_A9FAA80DAD38C688_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x98E03A0)
#define CLASS_2_A9FAA80DAD38C688_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x98E0930)
#define CLASS_2_A9FAA80DAD38C688_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x98E08A0)
#define CLASS_2_A9FAA80DAD38C688_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x98E0350)
#define CLASS_2_A9FAA80DAD38C688_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x98E0390)
#define CLASS_2_A9FAA80DAD38C688_SET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0x98E0370)
#define CLASS_2_A9FAA80DAD38C688__CTOR_OFFSET UNITYSDK_OFFSET(0x98E0980)
#define CLASS_2_A9FAA80DAD38C688___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x98E0990)
#define CLASS_2_A9FAA80DAD38C688___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x98E09B0)
#define CLASS_2_A9FAA80DAD38C688___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x98E09A0)

inline static constexpr unsigned int Class_2_A9FAA80DAD38C688_TypeDefinitionIndex = 45510;

class Class_2_A9FAA80DAD38C688 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_2_2490017483959933* _TrackMixer_k__BackingField; // 0x10
	::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* _Config_k__BackingField; // 0x18
	::System::Double _EndTime_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* get_Config()
	{
		return ((::RPGTools::Timeline::Audio::WwiseExternalAudioConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Audio::WwiseExternalAudioConfig*))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_SET_CONFIG_OFFSET))(this, value);
	}

	::Class_2_2490017483959933* get_TrackMixer()
	{
		return ((::Class_2_2490017483959933*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_GET_TRACKMIXER_OFFSET))(this);
	}

	::System::Void set_TrackMixer(::Class_2_2490017483959933* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2490017483959933*))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_SET_TRACKMIXER_OFFSET))(this, value);
	}

	::System::Double get_EndTime()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_GET_ENDTIME_OFFSET))(this);
	}

	::System::Void set_EndTime(::System::Double value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_SET_ENDTIME_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A9FAA80DAD38C688___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
