#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIALOGUEEVENTSWITCH_METHOD_3_D5453FEA43AA60A6_OFFSET UNITYSDK_OFFSET(0x1D81B6F0)
#define RPG_GAMECORE_DIALOGUEEVENTSWITCH_METHOD_3_DC9491A12AD9583A_OFFSET UNITYSDK_OFFSET(0x1D81B6A0)
#define RPG_GAMECORE_DIALOGUEEVENTSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81B6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueEventSwitch_TypeDefinitionIndex = 20645;

	class DialogueEventSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean UseCurrentDialogue; // 0x18
		::System::UInt32 RogueNPCID; // 0x1C
		::Il2CppArray<::System::UInt32>* DialogueEventList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AllTriggered; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NotAllTriggered; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTSWITCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DC9491A12AD9583A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueEventSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueEventSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTSWITCH_METHOD_3_DC9491A12AD9583A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5453FEA43AA60A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueEventSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueEventSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTSWITCH_METHOD_3_D5453FEA43AA60A6_OFFSET))(a1, a2);
		}
	};
}
