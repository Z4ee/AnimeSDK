#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_1_OFFSET UNITYSDK_OFFSET(0x168A7F80)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_2_OFFSET UNITYSDK_OFFSET(0x168A7FD0)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_3_OFFSET UNITYSDK_OFFSET(0x168A8010)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x168A7F70)

namespace Spine::Unity
{
	inline static constexpr unsigned int MathUtilities_TypeDefinitionIndex = 42299;

	class MathUtilities : public ::System::Object
	{
	public:
		static ::System::Single InverseLerp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 InverseLerp_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 InverseLerp_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 InverseLerp_3(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_3_OFFSET))(a1, a2, a3);
		}
	};
}
