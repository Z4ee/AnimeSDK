#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSDICESLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D4CD60)
#define RPG_GAMECORE_ROGUENOUSDICESLOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4D010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceSlotRow_TypeDefinitionIndex = 14110;

	class RogueNousDiceSlotRow : public ::System::Object
	{
	public:
		::System::UInt32 SlotUnlockID; // 0x10
		::System::UInt32 MaxRarity; // 0x14
		::RPG::Client::TextID SlotName; // 0x18
		::System::UInt32 ExtraMaxRarity; // 0x28
		::System::UInt32 SlotID; // 0x2C
		::RPG::Client::TextID UpgradedSlotName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESLOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousDiceSlotRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDiceSlotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESLOTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
