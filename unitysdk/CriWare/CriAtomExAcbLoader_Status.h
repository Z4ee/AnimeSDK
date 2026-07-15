#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbLoader_Status_TypeDefinitionIndex = 37865;

	enum class CriAtomExAcbLoader_Status : ::System::Int32
	{
		Stop = 0,
		Loading = 1,
		Complete = 2,
		Error = 3,
	};
}
