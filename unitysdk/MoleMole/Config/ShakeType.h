#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShakeType_TypeDefinitionIndex = 77972;

	enum class ShakeType : ::System::Int32
	{
		EpicenterDir = 0,
		CameraDir = 1,
		CameraScreenDir = 2,
	};
}
