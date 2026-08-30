#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EB380)
#define RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EB980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonBuffConfigRow_TypeDefinitionIndex = 12450;

	class TreasureDungeonBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x18
		::System::UInt32 UseTime; // 0x20
		::System::UInt32 BuffGroupID; // 0x24
		::System::Boolean IsSaveNextFloor; // 0x28
		::System::UInt32 TargetBounsParam; // 0x2C
		::System::UInt32 ParamInt; // 0x30
		::RPG::GameCore::TreasureDungeonBuffType Type; // 0x34
		::System::UInt32 DisplayRarity; // 0x38
		::RPG::Client::TextID BgDesc; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::System::UInt32 BattleTargetID; // 0x60
		::System::UInt32 BuffID; // 0x64
		::RPG::Client::TextID Name; // 0x68
		::RPG::Client::TextID BattleTargetBouns; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonBuffConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
