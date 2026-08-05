#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGARCADECAMERAPOINT_COPYFROM_OFFSET UNITYSDK_OFFSET(0x12EFBF10)
#define MOLEMOLE_CONFIG_CONFIGARCADECAMERAPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFBF90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigArcadeCameraPoint_TypeDefinitionIndex = 74642;

	class ConfigArcadeCameraPoint : public ::System::Object
	{
	public:
		::System::Single FOV; // 0x10
		::UnityEngine::Vector3 Position; // 0x14
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
