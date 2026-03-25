#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define ATTRACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x182E3840)

inline static constexpr unsigned int Attractor_TypeDefinitionIndex = 33900;

class Attractor : public ::System::Object
{
public:
	::UnityEngine::Transform* attractor; // 0x10
	::System::Single strength; // 0x18
	::System::Single attenuation; // 0x1C

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ATTRACTOR__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
