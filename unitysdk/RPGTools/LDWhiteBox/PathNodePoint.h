#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/TangentMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int PathNodePoint_TypeDefinitionIndex = 48954;

	struct alignas(4) PathNodePoint
	{
		::UnityEngine::Vector3 LocalPos; // 0x10
		::UnityEngine::Vector3 InTangent; // 0x1C
		::UnityEngine::Vector3 OutTangent; // 0x28
		::RPGTools::LDWhiteBox::TangentMode Mode; // 0x34
	};
}
