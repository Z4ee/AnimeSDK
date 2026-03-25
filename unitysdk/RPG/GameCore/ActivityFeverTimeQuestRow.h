#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EB6550)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB6B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeQuestRow_TypeDefinitionIndex = 10787;

	class ActivityFeverTimeQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x10
		::System::UInt32 QuestGroupID; // 0x18
		::RPG::Client::TextID TabName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityFeverTimeQuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFeverTimeQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
