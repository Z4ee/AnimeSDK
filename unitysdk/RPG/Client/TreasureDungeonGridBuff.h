#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1005;
namespace RPG::GameCore { class TreasureDungeonGridBuffConfigRow; }

#define RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_GET_BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xB386470)
#define RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_GET_BUFFROW_OFFSET UNITYSDK_OFFSET(0xB3863E0)
#define RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_GET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0xB386490)
#define RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_GET_BUFFVALUE_OFFSET UNITYSDK_OFFSET(0xB386450)
#define RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_SET_BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xB386480)
#define RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_SET_BUFFVALUE_OFFSET UNITYSDK_OFFSET(0xB386460)
#define RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_SYNC_OFFSET UNITYSDK_OFFSET(0xB384BD0)
#define RPG_CLIENT_TREASUREDUNGEONGRIDBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xB384BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonGridBuff_TypeDefinitionIndex = 62871;

	class TreasureDungeonGridBuff : public ::System::Object
	{
	public:
		::RPG::GameCore::TreasureDungeonGridBuffConfigRow* _BuffRow; // 0x10
		::System::UInt32 _BuffID; // 0x18
		::System::UInt32 _BuffValue_k__BackingField; // 0x1C
		::System::UInt32 _BuffLevel_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGRIDBUFF__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_1005* serverGridBuff)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1005*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_SYNC_OFFSET))(this, serverGridBuff);
		}

		::RPG::GameCore::TreasureDungeonGridBuffConfigRow* get_BuffRow()
		{
			return ((::RPG::GameCore::TreasureDungeonGridBuffConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_GET_BUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_BuffValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_GET_BUFFVALUE_OFFSET))(this);
		}

		::System::Void set_BuffValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_SET_BUFFVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_BuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_GET_BUFFLEVEL_OFFSET))(this);
		}

		::System::Void set_BuffLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_SET_BUFFLEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::TreasureDungeonGridBuffType get_BuffType()
		{
			return ((::RPG::GameCore::TreasureDungeonGridBuffType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGRIDBUFF_GET_BUFFTYPE_OFFSET))(this);
		}
	};
}
