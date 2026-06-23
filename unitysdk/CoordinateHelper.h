#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define COORDINATEHELPER_WORLDPOSITIONTOLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1268A6F0)

inline static constexpr unsigned int CoordinateHelper_TypeDefinitionIndex = 47882;

class CoordinateHelper : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 WorldPositionToLocalPosition(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Transform* targetTransform)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + COORDINATEHELPER_WORLDPOSITIONTOLOCALPOSITION_OFFSET))(worldPosition, targetTransform);
	}
};
