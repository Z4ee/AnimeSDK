#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NPCTRIGGERSOUND_METHOD_2_DF1322A10BB432E6_OFFSET UNITYSDK_OFFSET(0x199C9450)
#define RPG_GAMECORE_NPCTRIGGERSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x199C96C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCTriggerSound_TypeDefinitionIndex = 16609;

	class NPCTriggerSound : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EnterTriggerWaitTime; // 0x10
		::System::UInt32 OnEnterVoiceID; // 0x14
		::System::String* OnExitTriggerEvent; // 0x18
		::System::Single EnterTriggerCD; // 0x20
		::System::Boolean IsLoop; // 0x24
		::System::Single TriggerChance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTRIGGERSOUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DF1322A10BB432E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCTriggerSound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCTriggerSound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTRIGGERSOUND_METHOD_2_DF1322A10BB432E6_OFFSET))(a1, a2);
		}
	};
}
