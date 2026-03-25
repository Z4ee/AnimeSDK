#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PackedPrimInstancingMode.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_CookOptions_TypeDefinitionIndex = 37713;

	struct alignas(4) HAPI_CookOptions
	{
		::System::Boolean splitGeosByGroup; // 0x10
		::System::Boolean splitGeosByAttribute; // 0x11
		::System::Int32 splitAttrSH; // 0x14
		::System::Int32 maxVerticesPerPrimitive; // 0x18
		::System::Boolean refineCurveToLinear; // 0x1C
		::System::Single curveRefineLOD; // 0x20
		::System::Boolean clearErrorsAndWarnings; // 0x24
		::System::Boolean cookTemplatedGeos; // 0x25
		::System::Boolean splitPointsByVertexAttributes; // 0x26
		::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode; // 0x28
		::System::Boolean handleBoxPartTypes; // 0x2C
		::System::Boolean handleSpherePartTypes; // 0x2D
		::System::Boolean checkPartChanges; // 0x2E
		::System::Int32 extraFlags; // 0x30
	};
}
