#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CDA3C90)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA4330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionModeRow_TypeDefinitionIndex = 12239;

	class ActivityRaidCollectionModeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RaidCollectionGroupList; // 0x10
		::RPG::Client::TextID RaidCollectionTabName; // 0x18
		::System::UInt32 RaidCollectionTabID; // 0x28
		::RPG::GameCore::RaidCollectionType RaidCollectionType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidCollectionModeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidCollectionModeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
