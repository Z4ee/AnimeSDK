#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALDIALOGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189EC680)
#define RPG_GAMECORE_HEARTDIALDIALOGUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189EC830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialDialogueRow_TypeDefinitionIndex = 12986;

	class HeartDialDialogueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ControlTalkList; // 0x10
		::System::UInt32 RewardID; // 0x18
		::System::UInt32 SubMissionID; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALDIALOGUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeartDialDialogueRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialDialogueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALDIALOGUEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
