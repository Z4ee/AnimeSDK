#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriFsInstaller_Status_TypeDefinitionIndex = 37944;

	enum class CriFsInstaller_Status : ::System::Int32
	{
		Stop = 0,
		Busy = 1,
		Complete = 2,
		Error = 3,
	};
}
