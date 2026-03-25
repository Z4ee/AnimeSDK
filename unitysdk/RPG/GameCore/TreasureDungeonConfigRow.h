#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178BA7D0)
#define RPG_GAMECORE_TREASUREDUNGEONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178BADF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonConfigRow_TypeDefinitionIndex = 11415;

	class TreasureDungeonConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DisplayMonsterIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x18
		::System::String* EntranceIconPath; // 0x20
		::System::String* ImgPath; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x30
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 DungeonID; // 0x48
		::System::UInt32 UnlockID; // 0x4C
		::System::UInt32 GridExploreCost; // 0x50
		::System::UInt32 ExploreSubHpRatio; // 0x54
		::System::UInt32 InitialExplore; // 0x58
		::System::UInt32 GroupID; // 0x5C
		::System::UInt32 GridPrefabType; // 0x60
		::System::UInt32 PreDungeonID; // 0x64
		::RPG::Client::TextID Name; // 0x68
		::System::UInt32 DisplayEventID; // 0x78
		::System::UInt32 MaxExplore; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
