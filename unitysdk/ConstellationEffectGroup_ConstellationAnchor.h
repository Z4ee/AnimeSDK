#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CONSTELLATIONEFFECTGROUP_CONSTELLATIONANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE01AD60)

inline static constexpr unsigned int ConstellationEffectGroup_ConstellationAnchor_TypeDefinitionIndex = 47790;

class ConstellationEffectGroup_ConstellationAnchor : public ::System::Object
{
public:
	::UnityEngine::Transform* Anchor; // 0x10
	::System::Single Scale; // 0x18
	::System::Single MoveRadii; // 0x1C
	::System::Single MoveSpeed; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_CONSTELLATIONANCHOR__CTOR_OFFSET))(this);
	}
};
