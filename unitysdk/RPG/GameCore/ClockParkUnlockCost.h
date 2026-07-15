#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKUNLOCKCOST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BC1E1A0)
#define RPG_GAMECORE_CLOCKPARKUNLOCKCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1E420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkUnlockCost_TypeDefinitionIndex = 10770;

	class ClockParkUnlockCost : public ::System::Object
	{
	public:
		::System::UInt32 Count; // 0x10
		::System::UInt32 ItemID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKCOST__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkUnlockCost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkUnlockCost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKCOST_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
