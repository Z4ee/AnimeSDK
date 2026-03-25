#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17281930)
#define RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17281A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonItemConfigRow_TypeDefinitionIndex = 12304;

	class GridFightSeasonItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 SeasonID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSeasonItemConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
