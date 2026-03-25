#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridEffectType.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178BB5C0)
#define RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178BBAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridConfigRow_TypeDefinitionIndex = 11424;

	class TreasureDungeonGridConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* IconPath2D; // 0x20
		::System::String* TutorialTriggerString; // 0x28
		::System::UInt32 TutorialTriggerType; // 0x30
		::System::UInt32 OpenBuff; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 GridSubType; // 0x48
		::System::UInt32 GridID; // 0x4C
		::RPG::GameCore::TreasureDungeonGridEffectType EffectType; // 0x50
		::System::UInt32 ParamInt; // 0x54
		::System::UInt32 ReplaceGridID; // 0x58
		::RPG::GameCore::TreasureDungeonGridType GridType; // 0x5C
		::RPG::Client::TextID Desc; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonGridConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonGridConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
