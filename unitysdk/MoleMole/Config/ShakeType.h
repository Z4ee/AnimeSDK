#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShakeType_TypeDefinitionIndex = 63756;

	enum class ShakeType : ::System::Int32
	{
		CameraScreenDir = 2,
		CameraDir = 1,
		EpicenterDir = 0,
	};
}
