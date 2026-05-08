#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGARCADECAMERAPOINT_COPYFROM_OFFSET UNITYSDK_OFFSET(0xF979B50)
#define MOLEMOLE_CONFIG_CONFIGARCADECAMERAPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xF979BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigArcadeCameraPoint_TypeDefinitionIndex = 43631;

	class ConfigArcadeCameraPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single FOV; // 0x1C
		::UnityEngine::Vector3 Rotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGARCADECAMERAPOINT__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::MoleMole::Config::ConfigArcadeCameraPoint* point)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigArcadeCameraPoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGARCADECAMERAPOINT_COPYFROM_OFFSET))(this, point);
		}
	};
}
