#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_SCENEOPTIMIZER_SCENEOPTIMIZESAMPLERHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB050F0)

namespace RPG::SceneOptimizer
{
	inline static constexpr unsigned int SceneOptimizeSamplerHandle_TypeDefinitionIndex = 41840;

	class SceneOptimizeSamplerHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_SCENEOPTIMIZESAMPLERHANDLE__CTOR_OFFSET))(this);
		}
	};
}
