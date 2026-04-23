#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROTATABLEREGIONPOSE3DMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB1310B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RotatableRegionPose3DMapConfig_TypeDefinitionIndex = 63650;

	class RotatableRegionPose3DMapConfig : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Walkable; // 0x10
		::UnityEngine::Transform* Unwalkable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROTATABLEREGIONPOSE3DMAPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
