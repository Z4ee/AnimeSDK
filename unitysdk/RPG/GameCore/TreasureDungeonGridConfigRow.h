#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridEffectType.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC128E0)
#define RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC12DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridConfigRow_TypeDefinitionIndex = 12528;

	class TreasureDungeonGridConfigRow : public ::System::Object
	{
	public:
		::System::String* TutorialTriggerString; // 0x10
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x18
		::System::String* IconPath2D; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::GameCore::TreasureDungeonGridType GridType; // 0x30
		::RPG::GameCore::TreasureDungeonGridEffectType EffectType; // 0x34
		::System::UInt32 ReplaceGridID; // 0x38
		::System::UInt32 OpenBuff; // 0x3C
		::System::UInt32 TutorialTriggerType; // 0x40
		::System::UInt32 GridSubType; // 0x44
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 GridID; // 0x58
		::System::UInt32 ParamInt; // 0x5C
		::RPG::Client::TextID Desc; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonGridConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonGridConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
