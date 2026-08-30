#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG_METHOD_3_6DCA940B87EDE8C2_OFFSET UNITYSDK_OFFSET(0x1D3F6DB0)
#define RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG_METHOD_3_9014B969C424F1DE_OFFSET UNITYSDK_OFFSET(0x1D3F6E00)
#define RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAutoBuyMiracleConfig_TypeDefinitionIndex = 17781;

	class RogueModifierAutoBuyMiracleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6DCA940B87EDE8C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAutoBuyMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAutoBuyMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG_METHOD_3_6DCA940B87EDE8C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9014B969C424F1DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAutoBuyMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAutoBuyMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG_METHOD_3_9014B969C424F1DE_OFFSET))(a1, a2);
		}
	};
}
