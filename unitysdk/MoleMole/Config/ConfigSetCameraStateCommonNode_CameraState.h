#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGSETCAMERASTATECOMMONNODE_CAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F6FE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetCameraStateCommonNode_CameraState_TypeDefinitionIndex = 51469;

	class ConfigSetCameraStateCommonNode_CameraState : public ::System::Object
	{
	public:
		::System::Single FOV; // 0x10
		::UnityEngine::Vector3 Position; // 0x14
		::UnityEngine::Vector3 Rotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCAMERASTATECOMMONNODE_CAMERASTATE__CTOR_OFFSET))(this);
		}
	};
}
