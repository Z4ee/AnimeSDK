#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_Error_TypeDefinitionIndex = 37965;

	enum class CriFsWebInstaller_Error : ::System::Int32
	{
		None = 0,
		Timeout = 1,
		Memory = 2,
		LocalFs = 3,
		DNS = 4,
		Connection = 5,
		SSL = 6,
		HTTP = 7,
		Internal = 8,
	};
}
