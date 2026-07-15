#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BezierPoint_HandleStyle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BezierPointData_TypeDefinitionIndex = 34533;

	struct alignas(4) BezierPointData
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Handle1; // 0x1C
		::UnityEngine::Vector3 Handle2; // 0x28
		::RPG::Client::BezierPoint_HandleStyle HandleType; // 0x34
	};
}
