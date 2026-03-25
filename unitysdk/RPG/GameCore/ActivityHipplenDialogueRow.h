#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENDIALOGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFC0C0)
#define RPG_GAMECORE_ACTIVITYHIPPLENDIALOGUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFC210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenDialogueRow_TypeDefinitionIndex = 10846;

	class ActivityHipplenDialogueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SentenceIDList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENDIALOGUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenDialogueRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenDialogueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENDIALOGUEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
