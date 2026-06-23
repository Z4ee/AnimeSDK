#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedFieldNodeWrapper_AccessMode_TypeDefinitionIndex = 30803;

	enum class ReflectedFieldNodeWrapper_AccessMode : ::System::Int32
	{
		SetField = 1,
		GetField = 0,
	};
}
