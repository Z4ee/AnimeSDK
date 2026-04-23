#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSEASONAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D5700)
#define RPG_GAMECORE_GRIDFIGHTSEASONAUGMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D5820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonAugmentConfigRow_TypeDefinitionIndex = 12680;

	class GridFightSeasonAugmentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SeasonID; // 0x10
		::System::UInt32 AugmentID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONAUGMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONAUGMENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
