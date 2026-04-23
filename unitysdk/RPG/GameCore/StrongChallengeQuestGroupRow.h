#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EA9E80)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAA4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeQuestGroupRow_TypeDefinitionIndex = 11727;

	class StrongChallengeQuestGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestGroupID; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StrongChallengeQuestGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StrongChallengeQuestGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
