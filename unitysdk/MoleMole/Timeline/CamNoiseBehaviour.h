#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class NoiseSettings; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_TIMELINE_CAMNOISEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x173AA550)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CamNoiseBehaviour_TypeDefinitionIndex = 62102;

	class CamNoiseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Cinemachine::NoiseSettings* noiseProfile; // 0x10
		::System::Single amplitudeGain; // 0x18
		::UnityEngine::AnimationCurve* amplitudeCurve; // 0x20
		::System::Single frequencyGain; // 0x28
		::UnityEngine::AnimationCurve* frequencyCurve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMNOISEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
