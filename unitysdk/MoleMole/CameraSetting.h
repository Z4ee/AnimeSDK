#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x11C86B30)

namespace MoleMole
{
	inline static constexpr unsigned int CameraSetting_TypeDefinitionIndex = 72079;

	class CameraSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 CameraOffset; // 0x10
		::System::Single CameraPitch; // 0x1C
		::System::Single CameraYaw; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASETTING__CTOR_OFFSET))(this);
		}
	};
}
