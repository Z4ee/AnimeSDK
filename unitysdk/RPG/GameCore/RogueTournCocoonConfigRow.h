#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_9;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCOCOONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB711F0)
#define RPG_GAMECORE_ROGUETOURNCOCOONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB716E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCocoonConfigRow_TypeDefinitionIndex = 14402;

	class RogueTournCocoonConfigRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendDamageTypes; // 0x18
		::Il2CppArray<::System::UInt32>* DropList; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x28
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_9*>* DisplayMonsterMap; // 0x30
		::System::UInt32 RogueKeyCost; // 0x38
		::System::UInt32 EventID; // 0x3C
		::System::UInt32 FuncUnlockID; // 0x40
		::System::UInt32 MaxChallengeCnt; // 0x44
		::System::UInt32 Difficulty; // 0x48
		::System::UInt32 RecommendLevel; // 0x4C
		::System::UInt32 NpcMonsterID; // 0x50
		::System::UInt32 WorldLevel; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 StaminaCost; // 0x5C
		::System::UInt32 DisplayID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOCOONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCocoonConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCocoonConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOCOONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
