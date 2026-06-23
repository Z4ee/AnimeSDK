#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Project/Config/PointBaseData.h"

#define MOLEMOLE_PROJECT_CONFIG_CURVEPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15561610)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int CurvePointData_TypeDefinitionIndex = 17541;

	class CurvePointData : public ::MoleMole::Project::Config::PointBaseData
	{
	public:
		::System::Single relativePosition; // 0x20
		::System::Single tangentX; // 0x24
		::System::Single tangentY; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_CURVEPOINTDATA__CTOR_OFFSET))(this);
		}
	};
}
