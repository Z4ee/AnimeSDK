#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTGUIDEQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197E6CB0)
#define RPG_GAMECORE_GRIDFIGHTGUIDEQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197E6E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGuideQuestConfigRow_TypeDefinitionIndex = 12933;

	class GridFightGuideQuestConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ChapterID; // 0x18
		::System::UInt32 ChapterAimQuest; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGUIDEQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightGuideQuestConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightGuideQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGUIDEQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
