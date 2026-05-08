#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GEOMETRYUTILS_SEGMENTSEGMENTCPA_OFFSET UNITYSDK_OFFSET(0x1359FC50)
#define GEOMETRYUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1359FF50)

inline static constexpr unsigned int GeometryUtils_TypeDefinitionIndex = 50945;

class GeometryUtils : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYUTILS__CTOR_OFFSET))(this);
	}

	static ::System::Boolean SegmentSegmentCPA(::UnityEngine::Vector3& c0, ::UnityEngine::Vector3& c1, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 q0, ::UnityEngine::Vector3 q1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYUTILS_SEGMENTSEGMENTCPA_OFFSET))(c0, c1, p0, p1, q0, q1);
	}
};
