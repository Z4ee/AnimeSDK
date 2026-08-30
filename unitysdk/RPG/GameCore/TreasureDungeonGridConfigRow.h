#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridEffectType.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5446B0)
#define RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D544BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridConfigRow_TypeDefinitionIndex = 12442;

	class TreasureDungeonGridConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* IconPath2D; // 0x20
		::System::String* TutorialTriggerString; // 0x28
		::RPG::GameCore::TreasureDungeonGridEffectType EffectType; // 0x30
		::System::UInt32 GridSubType; // 0x34
		::System::UInt32 GridID; // 0x38
		::System::UInt32 TutorialTriggerType; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::System::UInt32 ReplaceGridID; // 0x60
		::RPG::GameCore::TreasureDungeonGridType GridType; // 0x64
		::System::UInt32 OpenBuff; // 0x68
		::System::UInt32 ParamInt; // 0x6C

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
