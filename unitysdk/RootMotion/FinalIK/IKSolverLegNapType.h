#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLegNapType_TypeDefinitionIndex = 38775;

	enum class IKSolverLegNapType : ::System::Int32
	{
		CCDIK = 2,
		Trigonometric = 0,
		FABRIK = 1,
	};
}
