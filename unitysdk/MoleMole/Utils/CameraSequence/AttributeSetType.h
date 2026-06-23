#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int AttributeSetType_TypeDefinitionIndex = 56322;

	enum class AttributeSetType : ::System::Int32
	{
		AtLeast = 1,
		AtMost = 2,
		Value = 0,
		Clamp = 3,
	};
}
