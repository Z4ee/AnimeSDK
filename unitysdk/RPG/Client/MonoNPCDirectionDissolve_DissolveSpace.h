#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNPCDirectionDissolve_DissolveSpace_TypeDefinitionIndex = 70121;

	enum class MonoNPCDirectionDissolve_DissolveSpace : ::System::Int32
	{
		LocalSpace = 0,
		WorldSpace = 1,
	};
}
