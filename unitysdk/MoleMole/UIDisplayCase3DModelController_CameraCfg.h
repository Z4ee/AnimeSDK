#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/ScopedFrontCameraControlCameraConfig.h"
#include "unitysdk/Struct_2_62E9700EAC81114C.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ScopedFrontCameraControlConfigInput; }

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCase3DModelController_CameraCfg_TypeDefinitionIndex = 62451;

	struct alignas(8) UIDisplayCase3DModelController_CameraCfg
	{
		::MoleMole::Config::ScopedFrontCameraControlConfigInput* inputConfig; // 0x10
		::MoleMole::Photo::ScopedFrontCameraControlCameraConfig cameraConfig; // 0x18
		::System::Boolean isSet; // 0x44
		::Struct_2_62E9700EAC81114C curData; // 0x48
	};
}
