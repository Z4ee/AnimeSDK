#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIALOGUEEVENTSWITCH_METHOD_3_7FA47D86EB468A84_OFFSET UNITYSDK_OFFSET(0x1885FA90)
#define RPG_GAMECORE_DIALOGUEEVENTSWITCH_METHOD_3_838F02AA9031DD94_OFFSET UNITYSDK_OFFSET(0x1885FB10)
#define RPG_GAMECORE_DIALOGUEEVENTSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1885FAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueEventSwitch_TypeDefinitionIndex = 19870;

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

		static ::System::Void Method_3_7FA47D86EB468A84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueEventSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueEventSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTSWITCH_METHOD_3_7FA47D86EB468A84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_838F02AA9031DD94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueEventSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueEventSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTSWITCH_METHOD_3_838F02AA9031DD94_OFFSET))(a1, a2);
		}
	};
}
