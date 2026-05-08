#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_05532B9639E78632_1.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_15.h"
#include "unitysdk/Struct_2_BEBB04660E5E42A2.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPANIMAXISINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFFBE0)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpAnimAxisInfo_TypeDefinitionIndex = 83639;

	class CpAnimAxisInfo : public ::System::Object
	{
	public:
		::Enum_3_05532B9639E78632_1 axis; // 0x10
		::System::Single baseValue; // 0x14
		::Struct_2_4C8453486C91E3A1_15 param; // 0x18
		::Struct_2_BEBB04660E5E42A2 curve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPANIMAXISINFO__CTOR_OFFSET))(this);
		}
	};
}
