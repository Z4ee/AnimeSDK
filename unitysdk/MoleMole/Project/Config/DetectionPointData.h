#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_99176E6BE04C36F5.h"
#include "unitysdk/MoleMole/Project/Config/PointBaseData.h"

namespace MoleMole::Project::Config { class CollisionShapeData; }

#define MOLEMOLE_PROJECT_CONFIG_DETECTIONPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5A740)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int DetectionPointData_TypeDefinitionIndex = 16916;

	class DetectionPointData : public ::MoleMole::Project::Config::PointBaseData
	{
	public:
		::System::Single relativePosition; // 0x20
		::System::Single speed; // 0x24
		::System::Single tangentX; // 0x28
		::System::Single tangentY; // 0x2C
		::Enum_3_99176E6BE04C36F5 direction; // 0x30
		::MoleMole::Project::Config::CollisionShapeData* collisionShape; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_DETECTIONPOINTDATA__CTOR_OFFSET))(this);
		}
	};
}
