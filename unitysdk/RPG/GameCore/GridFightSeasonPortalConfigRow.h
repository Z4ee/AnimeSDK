#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0760F0)
#define RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0761E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonPortalConfigRow_TypeDefinitionIndex = 13135;

	class GridFightSeasonPortalConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SeasonID; // 0x10
		::System::UInt32 PortalID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSeasonPortalConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonPortalConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
