#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

#define MOLEMOLE_CAMERAS_BANGBOOADJUSTMENTCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11006CC0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int BangbooAdjustmentCameraConfig_TypeDefinitionIndex = 63168;

	class BangbooAdjustmentCameraConfig : public ::System::Object
	{
	public:
		::System::Single lookAtRatio; // 0x10
		::UnityEngine::LayerMask groundLayer; // 0x14
		::System::Boolean syncedFollowPosition; // 0x18
		::System::Single followPositionDownDamping; // 0x1C
		::System::Single followPositionUpDamping; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_BANGBOOADJUSTMENTCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
