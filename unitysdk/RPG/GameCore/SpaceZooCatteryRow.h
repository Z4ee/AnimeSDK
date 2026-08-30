#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPACEZOOCATTERYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D53DF20)
#define RPG_GAMECORE_SPACEZOOCATTERYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53E110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooCatteryRow_TypeDefinitionIndex = 12289;

	class SpaceZooCatteryRow : public ::System::Object
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 UnlockMissionID; // 0x14
		::System::UInt32 CatteryID; // 0x18
		::System::UInt32 NpcGroupID; // 0x1C
		::System::UInt32 NpcInstanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCATTERYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooCatteryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooCatteryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCATTERYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
