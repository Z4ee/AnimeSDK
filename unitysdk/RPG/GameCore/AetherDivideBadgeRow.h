#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AETHERDIVIDEBADGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CDFBA50)
#define RPG_GAMECORE_AETHERDIVIDEBADGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFC080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideBadgeRow_TypeDefinitionIndex = 10920;

	class AetherDivideBadgeRow : public ::System::Object
	{
	public:
		::System::UInt32 Number; // 0x10
		::System::UInt32 MaxSpiritLevel; // 0x14
		::System::UInt32 ItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideBadgeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideBadgeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
