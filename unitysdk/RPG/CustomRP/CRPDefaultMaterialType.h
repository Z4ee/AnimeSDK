#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPDefaultMaterialType_TypeDefinitionIndex = 36322;

	enum class CRPDefaultMaterialType : ::System::Int32
	{
		Standard = 0,
		Particle = 1,
		Terrain = 2,
		Sprite = 3,
		UnityBuiltinDefault = 4,
	};
}
