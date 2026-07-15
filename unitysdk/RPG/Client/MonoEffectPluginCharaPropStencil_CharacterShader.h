#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropStencil_CharacterShader_TypeDefinitionIndex = 66846;

	enum class MonoEffectPluginCharaPropStencil_CharacterShader : ::System::Int32
	{
		CharacterBase = 1,
		CharacterHair = 2,
		CharacterFace = 4,
		CharacterEyeShadow = 8,
		CharacterSpecialWeapon = 16,
		CharacterStencilClear = 32,
	};
}
