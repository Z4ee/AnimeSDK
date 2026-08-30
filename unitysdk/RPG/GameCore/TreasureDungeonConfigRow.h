#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D543940)
#define RPG_GAMECORE_TREASUREDUNGEONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D543F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonConfigRow_TypeDefinitionIndex = 12434;

	class TreasureDungeonConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x10
		::System::String* EntranceIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* DisplayMonsterIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x28
		::System::String* ImgPath; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID Desc; // 0x48
		::System::UInt32 DungeonID; // 0x58
		::System::UInt32 GridPrefabType; // 0x5C
		::System::UInt32 PreDungeonID; // 0x60
		::System::UInt32 DisplayEventID; // 0x64
		::System::UInt32 InitialExplore; // 0x68
		::System::UInt32 GroupID; // 0x6C
		::System::UInt32 ExploreSubHpRatio; // 0x70
		::System::UInt32 UnlockID; // 0x74
		::System::UInt32 MaxExplore; // 0x78
		::System::UInt32 GridExploreCost; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
