#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/ConfinerOven_PolygonSolution.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/System/ValueType.h"

namespace ClipperLib { class ClipperOffset; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Cinemachine
{
	inline static constexpr unsigned int ConfinerOven_BakingStateCache_TypeDefinitionIndex = 32586;

	struct alignas(8) ConfinerOven_BakingStateCache
	{
		::ClipperLib::ClipperOffset* offsetter; // 0x10
		::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven_PolygonSolution>* solutions; // 0x18
		::Cinemachine::ConfinerOven_PolygonSolution rightCandidate; // 0x20
		::Cinemachine::ConfinerOven_PolygonSolution leftCandidate; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* maxCandidate; // 0x40
		::System::Single stepSize; // 0x48
		::System::Single maxFrustumHeight; // 0x4C
		::System::Single currentFrustumHeight; // 0x50
		::System::Single bakeTime; // 0x54
	};
}
