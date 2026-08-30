#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_METHOD_3_50DB6C7EA7AD8454_OFFSET UNITYSDK_OFFSET(0x1EEF9650)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_METHOD_3_6D27B6F65AF83A50_OFFSET UNITYSDK_OFFSET(0x1EEF96A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig_TypeDefinitionIndex = 17734;

	class RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50DB6C7EA7AD8454(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_METHOD_3_50DB6C7EA7AD8454_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D27B6F65AF83A50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_METHOD_3_6D27B6F65AF83A50_OFFSET))(a1, a2);
		}
	};
}
