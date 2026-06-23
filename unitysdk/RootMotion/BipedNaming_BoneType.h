#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int BipedNaming_BoneType_TypeDefinitionIndex = 38246;

	enum class BipedNaming_BoneType : ::System::Int32
	{
		Unassigned = 0,
		Tail = 5,
		Arm = 3,
		Eye = 6,
		Leg = 4,
		Head = 2,
		Spine = 1,
	};
}
