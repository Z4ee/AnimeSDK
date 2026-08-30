#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionRandomType.h"
#include "unitysdk/System/Object.h"

class Class_1_3A3D56D4D49D35CE;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_4;

#define RPG_GAMECORE_CAKERACEFIELDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF75400)
#define RPG_GAMECORE_CAKERACEFIELDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF75AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceFieldRow_TypeDefinitionIndex = 10975;

	class CakeRaceFieldRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_4*>* FieldEffectWeight; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_4*>* FieldSectionWeight; // 0x18
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_4*>* FieldCatWeight; // 0x20
		::Il2CppArray<::Class_1_3A3D56D4D49D35CE*>* FieldUnlockConditionList; // 0x28
		::Il2CppArray<::System::UInt32>* FieldBattleItemList; // 0x30
		::System::UInt32 FieldBetCost; // 0x38
		::System::UInt32 FieldCatNum; // 0x3C
		::RPG::Client::TextID FieldName; // 0x40
		::System::Boolean IsMultiPlaySupported; // 0x50
		::System::UInt32 FieldID; // 0x54
		::System::UInt32 RewardID; // 0x58
		::System::UInt32 FieldSpecialBetCost; // 0x5C
		::RPG::Client::TextID FieldUnlockDesc; // 0x60
		::System::UInt32 FieldSectionNum; // 0x70
		::RPG::GameCore::CakeRaceRegionRandomType RegionRandomType; // 0x74
		::RPG::Client::TextID FieldDesc; // 0x78
		::System::UInt32 FieldScoreRate; // 0x88
		::System::UInt32 FieldCost; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFIELDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceFieldRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceFieldRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFIELDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
