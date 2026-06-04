#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKRAIDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1965C8F0)
#define RPG_GAMECORE_CLOCKPARKRAIDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1965CEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRaidRow_TypeDefinitionIndex = 10751;

	class ClockParkRaidRow : public ::System::Object
	{
	public:
		::System::UInt32 RaidMapinfo; // 0x10
		::System::UInt32 RaidID; // 0x14
		::System::UInt32 RaidUnlockProgress; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkRaidRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkRaidRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
