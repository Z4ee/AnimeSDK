#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class QTEData; }
namespace RPGTools::Timeline { class QTEMixer; }

#define RPGTOOLS_TIMELINE_QTEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAB95E90)
#define RPGTOOLS_TIMELINE_QTEBEHAVIOUR_GET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB95EB0)
#define RPGTOOLS_TIMELINE_QTEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB95ED0)
#define RPGTOOLS_TIMELINE_QTEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAB95EA0)
#define RPGTOOLS_TIMELINE_QTEBEHAVIOUR_SET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB95EC0)
#define RPGTOOLS_TIMELINE_QTEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB96200)
#define RPGTOOLS_TIMELINE_QTEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB96210)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEBehaviour_TypeDefinitionIndex = 39098;

	class QTEBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::QTEData* _Config_k__BackingField; // 0x10
		::RPGTools::Timeline::QTEMixer* _TrackMixer_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::QTEData* get_Config()
		{
			return ((::RPGTools::Timeline::QTEData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::QTEData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::QTEData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEBEHAVIOUR_SET_CONFIG_OFFSET))(this, value);
		}

		::RPGTools::Timeline::QTEMixer* get_TrackMixer()
		{
			return ((::RPGTools::Timeline::QTEMixer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEBEHAVIOUR_GET_TRACKMIXER_OFFSET))(this);
		}

		::System::Void set_TrackMixer(::RPGTools::Timeline::QTEMixer* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::QTEMixer*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEBEHAVIOUR_SET_TRACKMIXER_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
