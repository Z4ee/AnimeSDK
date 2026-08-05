#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AD684E3B09B96AF6.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_PROJECT_CONFIG_POINTBASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C011120)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int PointBaseData_TypeDefinitionIndex = 13097;

	class PointBaseData : public ::System::Object
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::Enum_3_AD684E3B09B96AF6 pointType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_POINTBASEDATA__CTOR_OFFSET))(this);
		}
	};
}
