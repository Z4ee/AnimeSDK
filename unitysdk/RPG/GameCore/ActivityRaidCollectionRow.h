#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidCollectionPrepareType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19400740)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19400910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionRow_TypeDefinitionIndex = 11754;

	class ActivityRaidCollectionRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RaidCollectionPrepareType PrepareType; // 0x10
		::System::UInt32 RaidCollectionID; // 0x14
		::System::UInt32 GuideID; // 0x18
		::System::UInt32 SubMissionID; // 0x1C
		::System::UInt32 RaidID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidCollectionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidCollectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
