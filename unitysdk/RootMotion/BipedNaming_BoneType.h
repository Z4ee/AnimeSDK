#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int BipedNaming_BoneType_TypeDefinitionIndex = 36525;

	enum class BipedNaming_BoneType : ::System::Int32
	{
		Unassigned = 0,
		Spine = 1,
		Head = 2,
		Arm = 3,
		Leg = 4,
		Tail = 5,
		Eye = 6,
	};
}
