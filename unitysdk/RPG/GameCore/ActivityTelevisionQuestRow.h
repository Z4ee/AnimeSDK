#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AB11650)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB11D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionQuestRow_TypeDefinitionIndex = 12031;

	class ActivityTelevisionQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x10
		::System::UInt32 QuestGroupID; // 0x18
		::RPG::Client::TextID OriginalTabName; // 0x20
		::RPG::Client::TextID TabName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityTelevisionQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityTelevisionQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
