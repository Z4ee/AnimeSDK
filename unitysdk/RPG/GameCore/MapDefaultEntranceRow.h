#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPDEFAULTENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A88240)
#define RPG_GAMECORE_MAPDEFAULTENTRANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A88330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapDefaultEntranceRow_TypeDefinitionIndex = 13273;

	class MapDefaultEntranceRow : public ::System::Object
	{
	public:
		::System::UInt32 EntranceID; // 0x10
		::System::UInt32 FloorID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPDEFAULTENTRANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MapDefaultEntranceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapDefaultEntranceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPDEFAULTENTRANCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
