#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceBattleItemUseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEBATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1876E520)
#define RPG_GAMECORE_CAKERACEBATTLEITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1876E910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBattleItemRow_TypeDefinitionIndex = 10522;

	class CakeRaceBattleItemRow : public ::System::Object
	{
	public:
		::System::String* BattleItemInvalidIcon; // 0x10
		::System::String* AbilityJson; // 0x18
		::System::String* BattleItemIcon; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* BattleItemEffectParamList; // 0x28
		::System::UInt32 BattleItemID; // 0x30
		::RPG::GameCore::CakeRaceBattleItemUseType BattleItemUseType; // 0x34
		::RPG::Client::TextID BattleItemUseHint; // 0x38
		::RPG::Client::TextID BattleItemName; // 0x48
		::RPG::Client::TextID BattleItemDesc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBATTLEITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceBattleItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBattleItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBATTLEITEMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
