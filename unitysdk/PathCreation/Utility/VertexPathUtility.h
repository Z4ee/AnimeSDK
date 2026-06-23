#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PathCreation { class BezierPath; }
namespace PathCreation::Utility { class VertexPathUtility_PathSplitData; }

#define PATHCREATION_UTILITY_VERTEXPATHUTILITY_SPLITBEZIERPATHBYANGLEERROR_OFFSET UNITYSDK_OFFSET(0x1DAC21B0)
#define PATHCREATION_UTILITY_VERTEXPATHUTILITY_SPLITBEZIERPATHEVENLY_OFFSET UNITYSDK_OFFSET(0x1DAC3240)

namespace PathCreation::Utility
{
	inline static constexpr unsigned int VertexPathUtility_TypeDefinitionIndex = 37456;

	class VertexPathUtility : public ::System::Object
	{
	public:
		static ::PathCreation::Utility::VertexPathUtility_PathSplitData* SplitBezierPathByAngleError(::PathCreation::BezierPath* bezierPath, ::System::Single maxAngleError, ::System::Single minVertexDst, ::System::Single accuracy)
		{
			return ((::PathCreation::Utility::VertexPathUtility_PathSplitData*(*)(::PathCreation::BezierPath*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_VERTEXPATHUTILITY_SPLITBEZIERPATHBYANGLEERROR_OFFSET))(bezierPath, maxAngleError, minVertexDst, accuracy);
		}

		static ::PathCreation::Utility::VertexPathUtility_PathSplitData* SplitBezierPathEvenly(::PathCreation::BezierPath* bezierPath, ::System::Single spacing, ::System::Single accuracy)
		{
			return ((::PathCreation::Utility::VertexPathUtility_PathSplitData*(*)(::PathCreation::BezierPath*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_VERTEXPATHUTILITY_SPLITBEZIERPATHEVENLY_OFFSET))(bezierPath, spacing, accuracy);
		}
	};
}
