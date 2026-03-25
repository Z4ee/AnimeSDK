#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17281CB0)
#define RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17281E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonPortalConfigRow_TypeDefinitionIndex = 12467;

	class GridFightSeasonPortalConfigRow : public ::System::Object
	{
	public:
		::System::String* ConditionJsonPath; // 0x10
		::System::UInt32 SeasonID; // 0x18
		::System::UInt32 PortalID; // 0x1C
		::System::UInt32 Ratio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSeasonPortalConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonPortalConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
