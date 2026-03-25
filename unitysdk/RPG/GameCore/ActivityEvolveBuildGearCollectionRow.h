#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EACD60)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAD970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildGearCollectionRow_TypeDefinitionIndex = 10656;

	class ActivityEvolveBuildGearCollectionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TagList; // 0x10
		::System::String* ItemIcon; // 0x18
		::System::String* DamageCustomName; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* ElementList; // 0x28
		::System::UInt32 UnlockQuest; // 0x30
		::RPG::GameCore::EvolveGearType Type; // 0x34
		::System::UInt32 ID; // 0x38
		::RPG::GameCore::EvolveBuildSeason Season; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 LvMax; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
