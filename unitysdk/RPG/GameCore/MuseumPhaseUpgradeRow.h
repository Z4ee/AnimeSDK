#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMPHASEUPGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174628B0)
#define RPG_GAMECORE_MUSEUMPHASEUPGRADEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17462AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumPhaseUpgradeRow_TypeDefinitionIndex = 13012;

	class MuseumPhaseUpgradeRow : public ::System::Object
	{
	public:
		::System::UInt32 RenewPoint; // 0x10
		::System::UInt32 RequireStatsB; // 0x14
		::System::UInt32 AreaID; // 0x18
		::System::UInt32 RequireStatsC; // 0x1C
		::System::UInt32 MuseumPhaseID; // 0x20
		::System::UInt32 RequireStatsA; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEUPGRADEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumPhaseUpgradeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumPhaseUpgradeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEUPGRADEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
