#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYRELICBOXQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F123F0)
#define RPG_GAMECORE_ACTIVITYRELICBOXQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F12590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRelicBoxQuestConfigRow_TypeDefinitionIndex = 11258;

	class ActivityRelicBoxQuestConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x10
		::System::UInt32 TabID; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GotoID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRELICBOXQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRELICBOXQUESTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
