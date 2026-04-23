#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1860D7F0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1860E440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildGearCollectionRow_TypeDefinitionIndex = 10907;

	class ActivityEvolveBuildGearCollectionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* ElementList; // 0x10
		::System::String* ItemIcon; // 0x18
		::System::String* DamageCustomName; // 0x20
		::Il2CppArray<::System::UInt32>* TagList; // 0x28
		::RPG::GameCore::EvolveGearType Type; // 0x30
		::RPG::GameCore::EvolveBuildSeason Season; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 LvMax; // 0x4C
		::System::UInt32 UnlockQuest; // 0x50

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
