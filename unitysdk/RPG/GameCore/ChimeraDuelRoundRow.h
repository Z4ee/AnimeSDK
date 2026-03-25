#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELROUNDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170A4F80)
#define RPG_GAMECORE_CHIMERADUELROUNDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170A5240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRoundRow_TypeDefinitionIndex = 10410;

	class ChimeraDuelRoundRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ShopChimeraWeightList; // 0x10
		::Il2CppArray<::System::UInt32>* ShopItemWeightList; // 0x18
		::System::String* ShopUnlockTutorial; // 0x20
		::System::UInt32 RoundID; // 0x28
		::System::UInt32 ShopItemGroup; // 0x2C
		::System::UInt32 ShopChimeraSlotCount; // 0x30
		::System::UInt32 ShopChimeraGroup; // 0x34
		::System::UInt32 ShopItemSlotCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELROUNDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelRoundRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRoundRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELROUNDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
