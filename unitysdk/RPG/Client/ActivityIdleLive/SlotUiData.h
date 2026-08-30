#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_679CF71AD3A781CD;
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SLOTUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x3B8CD80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SlotUiData_TypeDefinitionIndex = 75132;

	struct alignas(8) SlotUiData
	{
		::System::String* ImagePath; // 0x10
		::System::Boolean IsEquipped; // 0x18
		::System::UInt32 EquippedLevel; // 0x1C
		::System::String* EquippedRarityIcon; // 0x20
		::System::UInt32 EquippedRarity; // 0x28
		::System::UInt32 SlotIndex; // 0x2C

		::System::Void _ctor(::Class_1_679CF71AD3A781CD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_679CF71AD3A781CD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SLOTUIDATA__CTOR_OFFSET))(this, a1);
		}
	};
}
