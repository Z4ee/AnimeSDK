#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAATTRIBUTEBATCHCHANGECONFIG_METHOD_3_43A4082F5CEA3542_OFFSET UNITYSDK_OFFSET(0x18D3DB60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAATTRIBUTEBATCHCHANGECONFIG_METHOD_3_4881175426AEB64B_OFFSET UNITYSDK_OFFSET(0x18D3DA90)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAATTRIBUTEBATCHCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3DB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaAttributeBatchChangeConfig_TypeDefinitionIndex = 16949;

	class RogueModifierExecuteActionOnPersonaAttributeBatchChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAATTRIBUTEBATCHCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4881175426AEB64B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaAttributeBatchChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaAttributeBatchChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAATTRIBUTEBATCHCHANGECONFIG_METHOD_3_4881175426AEB64B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43A4082F5CEA3542(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaAttributeBatchChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaAttributeBatchChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAATTRIBUTEBATCHCHANGECONFIG_METHOD_3_43A4082F5CEA3542_OFFSET))(a1, a2);
		}
	};
}
