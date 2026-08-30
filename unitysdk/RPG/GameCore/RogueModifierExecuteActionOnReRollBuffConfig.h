#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_METHOD_3_45F83CBABA8ABFF3_OFFSET UNITYSDK_OFFSET(0x1EEF9640)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_METHOD_3_FC6938E07114CE2F_OFFSET UNITYSDK_OFFSET(0x1EEF95F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnReRollBuffConfig_TypeDefinitionIndex = 17736;

	class RogueModifierExecuteActionOnReRollBuffConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC6938E07114CE2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_METHOD_3_FC6938E07114CE2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45F83CBABA8ABFF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_METHOD_3_45F83CBABA8ABFF3_OFFSET))(a1, a2);
		}
	};
}
