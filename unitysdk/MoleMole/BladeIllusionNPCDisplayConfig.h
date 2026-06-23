#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_BLADEILLUSIONNPCDISPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x162909A0)

namespace MoleMole
{
	inline static constexpr unsigned int BladeIllusionNPCDisplayConfig_TypeDefinitionIndex = 42047;

	class BladeIllusionNPCDisplayConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::UnityEngine::ParticleSystem* particlePrefab; // 0x58
		::System::String* lookAtIKAttachPointName; // 0x60
		::UnityEngine::AnimationCurve* showingDitherCurve; // 0x68
		::System::Single showingDitherTime; // 0x70
		::UnityEngine::AnimationCurve* hidingDitherCurve; // 0x78
		::System::Single hidingDitherTime; // 0x80
		::System::String* animatorTrigger; // 0x88
		::System::Boolean enableGhostMask; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCDISPLAYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
