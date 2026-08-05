#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Finger_DOF_TypeDefinitionIndex = 38931;

	enum class Finger_DOF : ::System::Int32
	{
		Three = 1,
		One = 0,
	};
}
