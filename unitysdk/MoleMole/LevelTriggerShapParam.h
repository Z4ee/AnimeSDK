#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D8109127082B24BE.h"
#include "unitysdk/MoleMole/LevelTriggerShapParam_Enum_3_440B7C382EAD8BC4.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_LEVELTRIGGERSHAPPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A95080)

namespace MoleMole
{
	inline static constexpr unsigned int LevelTriggerShapParam_TypeDefinitionIndex = 82296;

	class LevelTriggerShapParam : public ::System::Object
	{
	public:
		::Enum_3_D8109127082B24BE Shape; // 0x10
		::System::Single SphereRaius; // 0x14
		::System::Single Radius; // 0x18
		::System::Single Height; // 0x1C
		::MoleMole::LevelTriggerShapParam_Enum_3_440B7C382EAD8BC4 Direction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELTRIGGERSHAPPARAM__CTOR_OFFSET))(this);
		}
	};
}
