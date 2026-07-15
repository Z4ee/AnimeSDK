#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriFsBindRequest_BindType_TypeDefinitionIndex = 37959;

	enum class CriFsBindRequest_BindType : ::System::Int32
	{
		Cpk = 0,
		Directory = 1,
		File = 2,
	};
}
