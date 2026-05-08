#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EAvatarCameraShotType_TypeDefinitionIndex = 71165;

	enum class EAvatarCameraShotType : ::System::Int32
	{
		NORMAL_C = 2,
		SIMPLE_A = 1,
		NONE = 0,
		Override_None = 99,
		SURROUND_B = 3,
	};
}
