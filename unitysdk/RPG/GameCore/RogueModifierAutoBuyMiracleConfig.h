#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG_METHOD_3_2BCB5C670EF41D47_OFFSET UNITYSDK_OFFSET(0x18D2AA90)
#define RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG_METHOD_3_9014B969C424F1DE_OFFSET UNITYSDK_OFFSET(0x18D2AB60)
#define RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2AB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAutoBuyMiracleConfig_TypeDefinitionIndex = 17089;

	class RogueModifierAutoBuyMiracleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2BCB5C670EF41D47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAutoBuyMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAutoBuyMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG_METHOD_3_2BCB5C670EF41D47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9014B969C424F1DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAutoBuyMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAutoBuyMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAUTOBUYMIRACLECONFIG_METHOD_3_9014B969C424F1DE_OFFSET))(a1, a2);
		}
	};
}
