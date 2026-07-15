#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_Status_TypeDefinitionIndex = 37964;

	enum class CriFsWebInstaller_Status : ::System::Int32
	{
		Stop = 0,
		Busy = 1,
		Complete = 2,
		Error = 3,
	};
}
