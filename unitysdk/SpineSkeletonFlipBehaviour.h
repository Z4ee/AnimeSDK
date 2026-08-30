#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define SPINESKELETONFLIPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC2130)

inline static constexpr unsigned int SpineSkeletonFlipBehaviour_TypeDefinitionIndex = 44762;

class SpineSkeletonFlipBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean flipX; // 0x10
	::System::Boolean flipY; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESKELETONFLIPBEHAVIOUR__CTOR_OFFSET))(this);
	}
};
