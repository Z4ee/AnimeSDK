#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int AttributeSetType_TypeDefinitionIndex = 68781;

	enum class AttributeSetType : ::System::Int32
	{
		AtMost = 2,
		AtLeast = 1,
		Clamp = 3,
		Value = 0,
	};
}
