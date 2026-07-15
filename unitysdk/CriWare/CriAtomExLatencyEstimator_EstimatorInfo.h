#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExLatencyEstimator_Status.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExLatencyEstimator_EstimatorInfo_TypeDefinitionIndex = 37852;

	struct alignas(4) CriAtomExLatencyEstimator_EstimatorInfo
	{
		::CriWare::CriAtomExLatencyEstimator_Status status; // 0x10
		::System::UInt32 estimated_latency; // 0x14
	};
}
