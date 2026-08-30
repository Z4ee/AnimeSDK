#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUBNAVMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CB0F970)
#define RPG_GAMECORE_SUBNAVMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB10200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubNavMapRow_TypeDefinitionIndex = 13907;

	class SubNavMapRow : public ::System::Object
	{
	public:
		::System::UInt32 AreaID; // 0x10
		::System::UInt32 NavMapSubTabID; // 0x14
		::System::UInt32 ID; // 0x18
		::System::Int32 DefaultLayer; // 0x1C
		::System::UInt32 NearbyTeleportMappingInfoID; // 0x20
		::RPG::GameCore::MinimapAreaType Type; // 0x24
		::System::UInt32 FloorID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubNavMapRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubNavMapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
