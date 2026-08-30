#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYEROUTFITBASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7AD240)
#define RPG_GAMECORE_PLAYEROUTFITBASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AD390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerOutfitBaseRow_TypeDefinitionIndex = 14344;

	class PlayerOutfitBaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* SlotTypeList; // 0x10
		::System::UInt32 OutfitID; // 0x18
		::System::UInt32 ItemID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITBASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerOutfitBaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerOutfitBaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITBASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
