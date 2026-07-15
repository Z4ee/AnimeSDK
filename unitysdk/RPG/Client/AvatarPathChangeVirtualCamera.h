#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_AVATARPATHCHANGEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18666B20)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeVirtualCamera_TypeDefinitionIndex = 68121;

	class AvatarPathChangeVirtualCamera : public ::System::Object
	{
	public:
		::System::UInt32 BelongAvtarID; // 0x10
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEVIRTUALCAMERA__CTOR_OFFSET))(this);
		}
	};
}
