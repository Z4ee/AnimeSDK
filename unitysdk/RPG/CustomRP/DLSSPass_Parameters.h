#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_CameraParameters.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_Parameters_TypeDefinitionIndex = 36007;

	struct alignas(8) DLSSPass_Parameters
	{
		::System::Boolean resetHistory; // 0x10
		::System::Single preExposure; // 0x14
		::RPG::CustomRP::DLSSPass_CameraParameters cameraParameters; // 0x18
	};
}
