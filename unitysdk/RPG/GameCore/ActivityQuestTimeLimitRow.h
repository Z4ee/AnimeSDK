#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityQuestUITYPE.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F0AFB0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0B7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestTimeLimitRow_TypeDefinitionIndex = 11240;

	class ActivityQuestTimeLimitRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::RPG::GameCore::ActivityQuestUITYPE UIPanelType; // 0x30
		::System::UInt32 ActivityID; // 0x34
		::System::UInt32 QuestTimeLimitGroupID; // 0x38
		::System::UInt32 ActivityModuleID; // 0x3C
		::RPG::Client::TextID EnName; // 0x40
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityQuestTimeLimitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityQuestTimeLimitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
