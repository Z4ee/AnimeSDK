#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSEASONCRAFTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D5830)
#define RPG_GAMECORE_GRIDFIGHTSEASONCRAFTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D5950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonCraftConfigRow_TypeDefinitionIndex = 12737;

	class GridFightSeasonCraftConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 CraftID; // 0x10
		::System::UInt32 SeasonID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONCRAFTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSeasonCraftConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonCraftConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONCRAFTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
