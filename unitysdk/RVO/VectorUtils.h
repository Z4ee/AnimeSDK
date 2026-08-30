#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RVO_VECTORUTILS_TORVO_1_OFFSET UNITYSDK_OFFSET(0x19690110)
#define RVO_VECTORUTILS_TORVO_OFFSET UNITYSDK_OFFSET(0x19690100)
#define RVO_VECTORUTILS_TOUNITYX0Z_OFFSET UNITYSDK_OFFSET(0x196900E0)
#define RVO_VECTORUTILS_TOUNITY_OFFSET UNITYSDK_OFFSET(0x196900D0)

namespace RVO
{
	inline static constexpr unsigned int VectorUtils_TypeDefinitionIndex = 44904;

	class VectorUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 ToUnity(::RVO::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTORUTILS_TOUNITY_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ToUnityX0Z(::RVO::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTORUTILS_TOUNITYX0Z_OFFSET))(a1);
		}

		static ::RVO::Vector2 ToRVO(::UnityEngine::Vector2 a1)
		{
			return ((::RVO::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTORUTILS_TORVO_OFFSET))(a1);
		}

		static ::RVO::Vector2 ToRVO_1(::UnityEngine::Vector3 a1)
		{
			return ((::RVO::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RVO_VECTORUTILS_TORVO_1_OFFSET))(a1);
		}
	};
}
