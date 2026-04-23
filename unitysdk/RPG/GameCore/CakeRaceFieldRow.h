#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionRandomType.h"
#include "unitysdk/System/Object.h"

class Class_1_3A3D56D4D49D35CE;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C;

#define RPG_GAMECORE_CAKERACEFIELDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18770F80)
#define RPG_GAMECORE_CAKERACEFIELDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18771660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceFieldRow_TypeDefinitionIndex = 10510;

	class CakeRaceFieldRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C*>* FieldCatWeight; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C*>* FieldSectionWeight; // 0x18
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C*>* FieldEffectWeight; // 0x20
		::Il2CppArray<::System::UInt32>* FieldBattleItemList; // 0x28
		::Il2CppArray<::Class_1_3A3D56D4D49D35CE*>* FieldUnlockConditionList; // 0x30
		::System::UInt32 FieldBetCost; // 0x38
		::System::Boolean IsMultiPlaySupported; // 0x3C
		::RPG::Client::TextID FieldDesc; // 0x40
		::System::UInt32 FieldCatNum; // 0x50
		::System::UInt32 FieldSpecialBetCost; // 0x54
		::System::UInt32 FieldID; // 0x58
		::System::UInt32 FieldScoreRate; // 0x5C
		::System::UInt32 FieldCost; // 0x60
		::RPG::GameCore::CakeRaceRegionRandomType RegionRandomType; // 0x64
		::RPG::Client::TextID FieldUnlockDesc; // 0x68
		::System::UInt32 FieldSectionNum; // 0x78
		::System::UInt32 RewardID; // 0x7C
		::RPG::Client::TextID FieldName; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFIELDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceFieldRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceFieldRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFIELDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
