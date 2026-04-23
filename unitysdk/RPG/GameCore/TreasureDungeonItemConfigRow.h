#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190BAFA0)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190BB810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonItemConfigRow_TypeDefinitionIndex = 11832;

	class TreasureDungeonItemConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* AudioEventName; // 0x18
		::System::String* IconPath2D; // 0x20
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x28
		::RPG::GameCore::TreasureDungeonItemType Type; // 0x30
		::System::UInt32 ItemID; // 0x34
		::System::UInt32 ParamInt; // 0x38
		::RPG::Client::TextID Desc; // 0x40
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonItemConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
