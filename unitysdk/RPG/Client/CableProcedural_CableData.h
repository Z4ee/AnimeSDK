#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CABLEPROCEDURAL_CABLEDATA_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x39C7230)

namespace RPG::Client
{
	inline static constexpr unsigned int CableProcedural_CableData_TypeDefinitionIndex = 67234;

	struct alignas(8) CableProcedural_CableData
	{
		::UnityEngine::Transform* startPoint; // 0x10
		::UnityEngine::Transform* endPoint; // 0x18
		::UnityEngine::LineRenderer* lineRenderer; // 0x20

		::System::Boolean Method_2_64F0C85A431FBD69()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_CABLEDATA_METHOD_2_64F0C85A431FBD69_OFFSET))(this);
		}
	};
}
