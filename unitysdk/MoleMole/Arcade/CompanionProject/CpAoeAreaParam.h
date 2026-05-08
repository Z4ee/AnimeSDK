#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_29E929C5F33E3F8C.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_15.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPAOEAREAPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A8F20)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpAoeAreaParam_TypeDefinitionIndex = 83622;

	class CpAoeAreaParam : public ::System::Object
	{
	public:
		::Enum_3_29E929C5F33E3F8C areaType; // 0x10
		::System::Single areaParam1; // 0x14
		::Struct_2_4C8453486C91E3A1_15 param1Param; // 0x18
		::System::Single areaParam2; // 0x20
		::Struct_2_4C8453486C91E3A1_15 param2Param; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPAOEAREAPARAM__CTOR_OFFSET))(this);
		}
	};
}
