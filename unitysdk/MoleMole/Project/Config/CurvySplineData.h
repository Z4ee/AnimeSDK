#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15C38F7BB0CF3062.h"
#include "unitysdk/Enum_3_37805E83654010B5.h"
#include "unitysdk/Enum_3_AB41911705372F0A.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_PROJECT_CONFIG_CURVYSPLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C23E20)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int CurvySplineData_TypeDefinitionIndex = 10161;

	class CurvySplineData : public ::System::Object
	{
	public:
		::Enum_3_37805E83654010B5 interpolation; // 0x10
		::Enum_3_AB41911705372F0A orientation; // 0x14
		::System::Boolean useOrientation; // 0x18
		::System::Single tension; // 0x1C
		::System::Single continuity; // 0x20
		::System::Single quality; // 0x24
		::Enum_3_15C38F7BB0CF3062 curvyType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_CURVYSPLINEDATA__CTOR_OFFSET))(this);
		}
	};
}
