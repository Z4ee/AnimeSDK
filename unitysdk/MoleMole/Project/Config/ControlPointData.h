#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BE4AEFAF48B2C9DB.h"
#include "unitysdk/MoleMole/Project/Config/PointBaseData.h"

#define MOLEMOLE_PROJECT_CONFIG_CONTROLPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3ACD0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int ControlPointData_TypeDefinitionIndex = 11604;

	class ControlPointData : public ::MoleMole::Project::Config::PointBaseData
	{
	public:
		::System::Int32 controlIndex; // 0x20
		::System::Boolean automaticHandles; // 0x24
		::System::Single handleInX; // 0x28
		::System::Single handleInY; // 0x2C
		::System::Single handleOutX; // 0x30
		::System::Single handleOutY; // 0x34
		::Enum_3_BE4AEFAF48B2C9DB controlPointColor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_CONTROLPOINTDATA__CTOR_OFFSET))(this);
		}
	};
}
