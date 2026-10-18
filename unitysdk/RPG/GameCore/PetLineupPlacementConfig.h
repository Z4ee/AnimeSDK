#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETLINEUPPLACEMENTCONFIG_METHOD_2_B18FC95CF1FB8E82_OFFSET UNITYSDK_OFFSET(0x1D8DB180)
#define RPG_GAMECORE_PETLINEUPPLACEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DB360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetLineupPlacementConfig_TypeDefinitionIndex = 15616;

	class PetLineupPlacementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single SlotSpacing; // 0x10
		::System::Single RowDistance; // 0x14
		::System::Single TriSideX; // 0x18
		::System::Single TriBackZ; // 0x1C
		::System::Single SlotYaw; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETLINEUPPLACEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B18FC95CF1FB8E82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetLineupPlacementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetLineupPlacementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETLINEUPPLACEMENTCONFIG_METHOD_2_B18FC95CF1FB8E82_OFFSET))(a1, a2);
		}
	};
}
