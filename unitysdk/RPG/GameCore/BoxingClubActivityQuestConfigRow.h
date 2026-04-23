#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BOXINGCLUBACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187161C0)
#define RPG_GAMECORE_BOXINGCLUBACTIVITYQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18716370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubActivityQuestConfigRow_TypeDefinitionIndex = 12206;

	class BoxingClubActivityQuestConfigRow : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 ChallengeID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBACTIVITYQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
