#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AD73F3F0692AA278.h"
#include "unitysdk/MoleMole/Project/Config/PointBaseData.h"

namespace MoleMole::Project::Config { class CollisionShapeData; }

#define MOLEMOLE_PROJECT_CONFIG_TARGETPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB9C560)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int TargetPointData_TypeDefinitionIndex = 10558;

	class TargetPointData : public ::MoleMole::Project::Config::PointBaseData
	{
	public:
		::System::Int32 order; // 0x20
		::MoleMole::Project::Config::CollisionShapeData* collisionShape; // 0x28
		::Enum_3_AD73F3F0692AA278 missionStatusStatus; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_TARGETPOINTDATA__CTOR_OFFSET))(this);
		}
	};
}
