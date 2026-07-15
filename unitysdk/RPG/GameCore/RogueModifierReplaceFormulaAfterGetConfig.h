#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_METHOD_3_637EB7F4571595BA_OFFSET UNITYSDK_OFFSET(0x1D165D40)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_METHOD_3_F847D14602984C16_OFFSET UNITYSDK_OFFSET(0x1D165D90)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceFormulaAfterGetConfig_TypeDefinitionIndex = 17063;

	class RogueModifierReplaceFormulaAfterGetConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_637EB7F4571595BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_METHOD_3_637EB7F4571595BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F847D14602984C16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_METHOD_3_F847D14602984C16_OFFSET))(a1, a2);
		}
	};
}
