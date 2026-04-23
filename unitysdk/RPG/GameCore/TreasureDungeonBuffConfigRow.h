#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B8820)
#define RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190B8E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonBuffConfigRow_TypeDefinitionIndex = 11834;

	class TreasureDungeonBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x18
		::System::UInt32 BattleTargetID; // 0x20
		::System::UInt32 BuffID; // 0x24
		::RPG::Client::TextID BgDesc; // 0x28
		::System::Boolean IsSaveNextFloor; // 0x38
		::RPG::GameCore::TreasureDungeonBuffType Type; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID BattleTargetBouns; // 0x50
		::System::UInt32 UseTime; // 0x60
		::RPG::Client::TextID Desc; // 0x68
		::System::UInt32 ParamInt; // 0x78
		::System::UInt32 TargetBounsParam; // 0x7C
		::System::UInt32 BuffGroupID; // 0x80
		::System::UInt32 DisplayRarity; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonBuffConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
