#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::Audio { class WwiseExternalStopLoopSFXConfig; }

#define CLASS_2_85D47BFD95AD4675_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x108FA080)
#define CLASS_2_85D47BFD95AD4675_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x108FA0A0)
#define CLASS_2_85D47BFD95AD4675_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x108FA090)
#define CLASS_2_85D47BFD95AD4675__CTOR_OFFSET UNITYSDK_OFFSET(0x108FA270)
#define CLASS_2_85D47BFD95AD4675___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x108FA280)

inline static constexpr unsigned int Class_2_85D47BFD95AD4675_TypeDefinitionIndex = 39610;

class Class_2_85D47BFD95AD4675 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* _Config_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D47BFD95AD4675__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* get_Config()
	{
		return ((::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D47BFD95AD4675_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig*))((::PBYTE)hIl2Cpp + CLASS_2_85D47BFD95AD4675_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_85D47BFD95AD4675_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_85D47BFD95AD4675___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}
};
