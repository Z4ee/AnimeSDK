#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ProjectileBGCurveExportData_SessionExportPoint_TypeDefinitionIndex = 67001;

	struct alignas(4) ProjectileBGCurveExportData_SessionExportPoint
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single DistanceToSectionStart; // 0x1C
	};
}
