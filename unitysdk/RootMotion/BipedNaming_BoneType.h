#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int BipedNaming_BoneType_TypeDefinitionIndex = 38906;

	enum class BipedNaming_BoneType : ::System::Int32
	{
		Unassigned = 0,
		Arm = 3,
		Head = 2,
		Tail = 5,
		Spine = 1,
		Eye = 6,
		Leg = 4,
	};
}
