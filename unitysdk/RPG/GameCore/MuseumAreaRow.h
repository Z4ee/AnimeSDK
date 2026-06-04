#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199BA3A0)
#define RPG_GAMECORE_MUSEUMAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199BBA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaRow_TypeDefinitionIndex = 13546;

	class MuseumAreaRow : public ::System::Object
	{
	public:
		::System::UInt32 RequireStatsC; // 0x10
		::System::UInt32 AreaID; // 0x14
		::System::UInt32 Level; // 0x18
		::System::UInt32 FundCost; // 0x1C
		::System::UInt32 RequireStatsA; // 0x20
		::System::UInt32 PhaseLimit; // 0x24
		::System::UInt32 RenewPoint; // 0x28
		::System::UInt32 RequireStatsB; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumAreaRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
