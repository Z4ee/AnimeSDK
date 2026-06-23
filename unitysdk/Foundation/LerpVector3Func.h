#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_LERPVECTOR3FUNC_LERP_OFFSET UNITYSDK_OFFSET(0xA80100)

namespace Foundation
{
	inline static constexpr unsigned int LerpVector3Func_TypeDefinitionIndex = 8407;

	struct alignas(1) LerpVector3Func
	{
		/*
		::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single alpha)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPVECTOR3FUNC_LERP_OFFSET))(this, a, b, alpha);
		}
		*/
	};
}
