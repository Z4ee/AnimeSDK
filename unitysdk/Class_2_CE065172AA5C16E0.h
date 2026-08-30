#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_F3D22185E562ED08;
namespace RPGTools::Timeline::Audio { class WwiseExternalAudioConfig; }
namespace System { class Object; }

#define CLASS_2_CE065172AA5C16E0_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x11601420)
#define CLASS_2_CE065172AA5C16E0_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x11601460)
#define CLASS_2_CE065172AA5C16E0_GET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0x11601440)
#define CLASS_2_CE065172AA5C16E0_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x116015F0)
#define CLASS_2_CE065172AA5C16E0_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x11601660)
#define CLASS_2_CE065172AA5C16E0_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x11601780)
#define CLASS_2_CE065172AA5C16E0_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x11601480)
#define CLASS_2_CE065172AA5C16E0_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x11601A10)
#define CLASS_2_CE065172AA5C16E0_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11601980)
#define CLASS_2_CE065172AA5C16E0_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x11601430)
#define CLASS_2_CE065172AA5C16E0_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x11601470)
#define CLASS_2_CE065172AA5C16E0_SET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0x11601450)
#define CLASS_2_CE065172AA5C16E0__CTOR_OFFSET UNITYSDK_OFFSET(0x11601A60)

inline static constexpr unsigned int Class_2_CE065172AA5C16E0_TypeDefinitionIndex = 49288;

class Class_2_CE065172AA5C16E0 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_2_F3D22185E562ED08* _TrackMixer_k__BackingField; // 0x10
	::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* _Config_k__BackingField; // 0x18
	::System::Double _EndTime_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* get_Config()
	{
		return ((::RPGTools::Timeline::Audio::WwiseExternalAudioConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Audio::WwiseExternalAudioConfig*))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_SET_CONFIG_OFFSET))(this, a1);
	}

	::Class_2_F3D22185E562ED08* get_TrackMixer()
	{
		return ((::Class_2_F3D22185E562ED08*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_GET_TRACKMIXER_OFFSET))(this);
	}

	::System::Void set_TrackMixer(::Class_2_F3D22185E562ED08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3D22185E562ED08*))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_SET_TRACKMIXER_OFFSET))(this, a1);
	}

	::System::Double get_EndTime()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_GET_ENDTIME_OFFSET))(this);
	}

	::System::Void set_EndTime(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_SET_ENDTIME_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_CE065172AA5C16E0_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
