#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B7000)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190B76C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeoActivityQuestConfigRow_TypeDefinitionIndex = 11838;

	class TreasureDungeoActivityQuestConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 DungeonGroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
