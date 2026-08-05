#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVGROUPMATERIALBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x173BC2A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVGroupMaterialBehaviour_TypeDefinitionIndex = 61171;

	class TVGroupMaterialBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::Il2CppArray<::UnityEngine::MeshRenderer*>* renderers; // 0x18
		::System::Boolean customParam; // 0x20
		::UnityEngine::Color color; // 0x24
		::UnityEngine::Color screenBaseColor; // 0x34
		::UnityEngine::Color screenColor; // 0x44
		::System::Boolean oldCRT; // 0x54
		::System::Single screenAspect; // 0x58
		::System::Single pixelAspect; // 0x5C
		::System::Single scanlineBrightness; // 0x60
		::System::Single yPixels; // 0x64
		::System::Single fade; // 0x68
		::System::Single hue; // 0x6C
		::System::Single saturation; // 0x70
		::System::Single value; // 0x74
		::System::Boolean tvNoise; // 0x78
		::System::Boolean receiveShadows; // 0x79
		::System::Boolean ingoreTimeScale; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPMATERIALBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
