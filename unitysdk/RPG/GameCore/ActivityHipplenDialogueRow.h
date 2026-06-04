#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENDIALOGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193ED110)
#define RPG_GAMECORE_ACTIVITYHIPPLENDIALOGUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193ED250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenDialogueRow_TypeDefinitionIndex = 11139;

	class ActivityHipplenDialogueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SentenceIDList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENDIALOGUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenDialogueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenDialogueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENDIALOGUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
