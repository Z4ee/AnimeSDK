#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_METHOD_3_0E23F4D55E72FD05_OFFSET UNITYSDK_OFFSET(0x1762FCE0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_METHOD_3_332FC9E3521070FC_OFFSET UNITYSDK_OFFSET(0x1762FDB0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762FD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnDialogueNpcFinishConfig_TypeDefinitionIndex = 16339;

	class RogueModifierExecuteActionOnDialogueNpcFinishConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E23F4D55E72FD05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDialogueNpcFinishConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnDialogueNpcFinishConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_METHOD_3_0E23F4D55E72FD05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_332FC9E3521070FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDialogueNpcFinishConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnDialogueNpcFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_METHOD_3_332FC9E3521070FC_OFFSET))(a1, a2);
		}
	};
}
