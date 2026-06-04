#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E05B60)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19E063E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonItemConfigRow_TypeDefinitionIndex = 11927;

	class TreasureDungeonItemConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath2D; // 0x10
		::System::String* AudioEventName; // 0x18
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::RPG::GameCore::TreasureDungeonItemType Type; // 0x40
		::RPG::Client::TextID Desc; // 0x48
		::System::UInt32 ItemID; // 0x58
		::System::UInt32 ParamInt; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonItemConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
