#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int FirstPersonCameraDefaultSetting_TypeDefinitionIndex = 75897;

	struct alignas(4) FirstPersonCameraDefaultSetting
	{
		::System::Single pitch; // 0x10
		::System::Single fieldOfView; // 0x14
	};
}
