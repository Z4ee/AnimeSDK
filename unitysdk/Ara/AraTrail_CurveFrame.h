#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ARA_ARATRAIL_CURVEFRAME_TRANSPORT_OFFSET UNITYSDK_OFFSET(0xA5BC90)
#define ARA_ARATRAIL_CURVEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE120)

namespace Ara
{
	inline static constexpr unsigned int AraTrail_CurveFrame_TypeDefinitionIndex = 32927;

	struct alignas(4) AraTrail_CurveFrame
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 normal; // 0x1C
		::UnityEngine::Vector3 bitangent; // 0x28
		::UnityEngine::Vector3 tangent; // 0x34

		::System::Void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 bitangent, ::UnityEngine::Vector3 tangent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_CURVEFRAME__CTOR_OFFSET))(this, position, normal, bitangent, tangent);
		}

		::UnityEngine::Vector3 Transport(::UnityEngine::Vector3 newTangent, ::UnityEngine::Vector3 newPosition)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_CURVEFRAME_TRANSPORT_OFFSET))(this, newTangent, newPosition);
		}
	};
}
