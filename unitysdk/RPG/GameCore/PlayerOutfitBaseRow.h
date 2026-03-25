#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYEROUTFITBASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174DE220)
#define RPG_GAMECORE_PLAYEROUTFITBASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174DE3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerOutfitBaseRow_TypeDefinitionIndex = 13249;

	class PlayerOutfitBaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* SlotTypeList; // 0x10
		::System::UInt32 ItemID; // 0x18
		::System::UInt32 OutfitID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITBASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerOutfitBaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerOutfitBaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITBASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
