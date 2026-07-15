#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_PanType_TypeDefinitionIndex = 37798;

	enum class CriAtomEx_PanType : ::System::Int32
	{
		Unknown = -1,
		Pan3d = 0,
		Pos3d = 1,
		Auto = 2,
	};
}
