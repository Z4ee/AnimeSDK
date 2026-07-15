#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoadFileRequest_Phase_TypeDefinitionIndex = 37953;

	enum class CriFsLoadFileRequest_Phase : ::System::Int32
	{
		Stop = 0,
		Bind = 1,
		Load = 2,
		Done = 3,
		Error = 4,
	};
}
