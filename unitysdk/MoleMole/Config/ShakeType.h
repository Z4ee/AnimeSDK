#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShakeType_TypeDefinitionIndex = 78941;

	enum class ShakeType : ::System::Int32
	{
		CameraDir = 1,
		CameraScreenDir = 2,
		EpicenterDir = 0,
	};
}
