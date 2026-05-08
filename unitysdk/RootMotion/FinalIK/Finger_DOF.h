#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Finger_DOF_TypeDefinitionIndex = 36559;

	enum class Finger_DOF : ::System::Int32
	{
		One = 0,
		Three = 1,
	};
}
