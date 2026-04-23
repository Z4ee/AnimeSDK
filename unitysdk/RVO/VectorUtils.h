#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RVO_VECTORUTILS_TORVO_1_OFFSET UNITYSDK_OFFSET(0x8E07150)
#define RVO_VECTORUTILS_TORVO_OFFSET UNITYSDK_OFFSET(0x8E07140)
#define RVO_VECTORUTILS_TOUNITYX0Z_OFFSET UNITYSDK_OFFSET(0x8E07120)
#define RVO_VECTORUTILS_TOUNITY_OFFSET UNITYSDK_OFFSET(0x8E07110)

namespace RVO
{
	inline static constexpr unsigned int VectorUtils_TypeDefinitionIndex = 41058;

	class VectorUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 ToUnity(::RVO::Vector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTORUTILS_TOUNITY_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 ToUnityX0Z(::RVO::Vector2 v)
		{
			return ((::UnityEngine::Vector3(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTORUTILS_TOUNITYX0Z_OFFSET))(v);
		}

		static ::RVO::Vector2 ToRVO(::UnityEngine::Vector2 v)
		{
			return ((::RVO::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTORUTILS_TORVO_OFFSET))(v);
		}

		static ::RVO::Vector2 ToRVO_1(::UnityEngine::Vector3 v)
		{
			return ((::RVO::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RVO_VECTORUTILS_TORVO_1_OFFSET))(v);
		}
	};
}
