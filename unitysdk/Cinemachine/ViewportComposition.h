#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_VIEWPORTCOMPOSITION_METHOD_2_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0x142890)
#define CINEMACHINE_VIEWPORTCOMPOSITION_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x142840)

namespace Cinemachine
{
	inline static constexpr unsigned int ViewportComposition_TypeDefinitionIndex = 46815;

	struct alignas(4) ViewportComposition
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14

		/*
		::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_VIEWPORTCOMPOSITION_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
		}
		*/

		/*
		::System::Void Method_2_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_VIEWPORTCOMPOSITION_METHOD_2_46D5C4F0EA172C6A_OFFSET))(this, a1);
		}
		*/
	};
}
