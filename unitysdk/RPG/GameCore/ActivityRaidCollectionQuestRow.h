#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F0F760)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0FDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionQuestRow_TypeDefinitionIndex = 11254;

	class ActivityRaidCollectionQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID QuestTabName; // 0x18
		::System::UInt32 QuestTabID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityRaidCollectionQuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidCollectionQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
