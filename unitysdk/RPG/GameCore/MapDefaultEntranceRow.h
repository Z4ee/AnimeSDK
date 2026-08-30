#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPDEFAULTENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D495D20)
#define RPG_GAMECORE_MAPDEFAULTENTRANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D495E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapDefaultEntranceRow_TypeDefinitionIndex = 13911;

	class MapDefaultEntranceRow : public ::System::Object
	{
	public:
		::System::UInt32 EntranceID; // 0x10
		::System::UInt32 FloorID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPDEFAULTENTRANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapDefaultEntranceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapDefaultEntranceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPDEFAULTENTRANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
