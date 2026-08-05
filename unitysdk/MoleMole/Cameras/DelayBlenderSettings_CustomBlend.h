#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/CameraDelayMoveDataBlendDefinition.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int DelayBlenderSettings_CustomBlend_TypeDefinitionIndex = 69007;

	struct alignas(8) DelayBlenderSettings_CustomBlend
	{
		::MoleMole::Config::CameraDelayMoveMode m_From; // 0x10
		::MoleMole::Config::CameraDelayMoveMode m_To; // 0x14
		::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition m_Blend; // 0x18
	};
}
