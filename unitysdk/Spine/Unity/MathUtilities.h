#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_1_OFFSET UNITYSDK_OFFSET(0x1AD196C0)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_2_OFFSET UNITYSDK_OFFSET(0x1AD19710)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_3_OFFSET UNITYSDK_OFFSET(0x1AD19750)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x1AD196B0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MathUtilities_TypeDefinitionIndex = 39527;

	class MathUtilities : public ::System::Object
	{
	public:
		static ::System::Single InverseLerp(::System::Single a, ::System::Single b, ::System::Single value)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET))(a, b, value);
		}

		static ::UnityEngine::Vector2 InverseLerp_1(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 value)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_1_OFFSET))(a, b, value);
		}

		static ::UnityEngine::Vector3 InverseLerp_2(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_2_OFFSET))(a, b, value);
		}

		static ::UnityEngine::Vector4 InverseLerp_3(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b, ::UnityEngine::Vector4 value)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_3_OFFSET))(a, b, value);
		}
	};
}
