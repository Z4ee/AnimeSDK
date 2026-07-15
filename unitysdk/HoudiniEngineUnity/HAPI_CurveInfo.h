#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_CurveType.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_CurveInfo_TypeDefinitionIndex = 38358;

	struct alignas(4) HAPI_CurveInfo
	{
		::HoudiniEngineUnity::HAPI_CurveType curveType; // 0x10
		::System::Int32 curveCount; // 0x14
		::System::Int32 vertexCount; // 0x18
		::System::Int32 knotCount; // 0x1C
		::System::Boolean isPeriodic; // 0x20
		::System::Boolean isRational; // 0x21
		::System::Int32 order; // 0x24
		::System::Boolean hasKnots; // 0x28
		::System::Boolean isClosed; // 0x29
	};
}
