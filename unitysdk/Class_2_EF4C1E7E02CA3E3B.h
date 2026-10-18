#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EF4C1E7E02CA3E3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1584E550)

inline static constexpr unsigned int Class_2_EF4C1E7E02CA3E3B_TypeDefinitionIndex = 74967;

class Class_2_EF4C1E7E02CA3E3B : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Transform* GFFOINAIAME; // 0x10
	::UnityEngine::Transform* OGOGACIALLI; // 0x18
	::UnityEngine::AnimationCurve* PIPHLJNPIAL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4C1E7E02CA3E3B__CTOR_OFFSET))(this);
	}
};
