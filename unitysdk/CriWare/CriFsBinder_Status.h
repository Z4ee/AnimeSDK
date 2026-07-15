#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriFsBinder_Status_TypeDefinitionIndex = 37947;

	enum class CriFsBinder_Status : ::System::Int32
	{
		None = 0,
		Analyze = 1,
		Complete = 2,
		Unbind = 3,
		Removed = 4,
		Invalid = 5,
		Error = 6,
	};
}
