#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::Audio { class WwiseExternalStopLoopSFXConfig; }

#define CLASS_2_2D5790B68126F4E7_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15176960)
#define CLASS_2_2D5790B68126F4E7_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15176980)
#define CLASS_2_2D5790B68126F4E7_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15176970)
#define CLASS_2_2D5790B68126F4E7__CTOR_OFFSET UNITYSDK_OFFSET(0x15176B50)

inline static constexpr unsigned int Class_2_2D5790B68126F4E7_TypeDefinitionIndex = 47041;

class Class_2_2D5790B68126F4E7 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* _Config_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D5790B68126F4E7__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* get_Config()
	{
		return ((::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D5790B68126F4E7_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2D5790B68126F4E7_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_2D5790B68126F4E7_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}
};
