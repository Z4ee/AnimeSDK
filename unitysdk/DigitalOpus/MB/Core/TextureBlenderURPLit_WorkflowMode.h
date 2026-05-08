#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderURPLit_WorkflowMode_TypeDefinitionIndex = 85018;

	enum class TextureBlenderURPLit_WorkflowMode : ::System::Int32
	{
		unknown = 0,
		metallic = 1,
		specular = 2,
	};
}
