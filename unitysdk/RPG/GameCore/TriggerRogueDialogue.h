#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERROGUEDIALOGUE_METHOD_3_0316CD0EC67B6802_OFFSET UNITYSDK_OFFSET(0x190CBDE0)
#define RPG_GAMECORE_TRIGGERROGUEDIALOGUE_METHOD_3_9F20E502AD84592B_OFFSET UNITYSDK_OFFSET(0x190CBD60)
#define RPG_GAMECORE_TRIGGERROGUEDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x190CBDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueDialogue_TypeDefinitionIndex = 19796;

	class TriggerRogueDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DialoguePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F20E502AD84592B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEDIALOGUE_METHOD_3_9F20E502AD84592B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0316CD0EC67B6802(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEDIALOGUE_METHOD_3_0316CD0EC67B6802_OFFSET))(a1, a2);
		}
	};
}
