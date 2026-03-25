#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPORTALEXPIREDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1727B2B0)
#define RPG_GAMECORE_GRIDFIGHTPORTALEXPIREDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1727B420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPortalExpiredConfigRow_TypeDefinitionIndex = 12488;

	class GridFightPortalExpiredConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SubSeasonID; // 0x10
		::System::UInt32 PortalID; // 0x14
		::System::UInt32 SeasonID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALEXPIREDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightPortalExpiredConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPortalExpiredConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALEXPIREDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
