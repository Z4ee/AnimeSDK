#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EAvatarCameraShotType_TypeDefinitionIndex = 53903;

	enum class EAvatarCameraShotType : ::System::Int32
	{
		Override_None = 99,
		NONE = 0,
		SURROUND_B = 3,
		NORMAL_C = 2,
		SIMPLE_A = 1,
	};
}
