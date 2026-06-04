#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19400090)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19400730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionQuestRow_TypeDefinitionIndex = 11756;

	class ActivityRaidCollectionQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 QuestTabID; // 0x18
		::RPG::Client::TextID QuestTabName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidCollectionQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidCollectionQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
