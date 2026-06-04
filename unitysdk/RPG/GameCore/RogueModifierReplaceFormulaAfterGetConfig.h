#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_METHOD_3_7268B90DBEF4E4FF_OFFSET UNITYSDK_OFFSET(0x19B9BBE0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_METHOD_3_F847D14602984C16_OFFSET UNITYSDK_OFFSET(0x19B9BCB0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9BC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceFormulaAfterGetConfig_TypeDefinitionIndex = 16901;

	class RogueModifierReplaceFormulaAfterGetConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7268B90DBEF4E4FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_METHOD_3_7268B90DBEF4E4FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F847D14602984C16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_METHOD_3_F847D14602984C16_OFFSET))(a1, a2);
		}
	};
}
