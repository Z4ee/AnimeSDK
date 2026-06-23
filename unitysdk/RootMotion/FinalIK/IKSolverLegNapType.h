#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLegNapType_TypeDefinitionIndex = 38357;

	enum class IKSolverLegNapType : ::System::Int32
	{
		CCDIK = 2,
		FABRIK = 1,
		Trigonometric = 0,
	};
}
