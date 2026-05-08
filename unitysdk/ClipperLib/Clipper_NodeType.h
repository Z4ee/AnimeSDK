#pragma once
#include "unitysdk/unitysdk.h"

namespace ClipperLib
{
	inline static constexpr unsigned int Clipper_NodeType_TypeDefinitionIndex = 31240;

	enum class Clipper_NodeType : ::System::Int32
	{
		ntAny = 0,
		ntOpen = 1,
		ntClosed = 2,
	};
}
