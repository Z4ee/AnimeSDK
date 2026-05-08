#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Project/Config/PointBaseData.h"

#define MOLEMOLE_PROJECT_CONFIG_NODETECTIONPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1713CE50)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int NoDetectionPointData_TypeDefinitionIndex = 16494;

	class NoDetectionPointData : public ::MoleMole::Project::Config::PointBaseData
	{
	public:
		::System::Boolean automaticHandles; // 0x20
		::System::Single handleInX; // 0x24
		::System::Single handleInY; // 0x28
		::System::Single handleOutX; // 0x2C
		::System::Single handleOutY; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_NODETECTIONPOINTDATA__CTOR_OFFSET))(this);
		}
	};
}
