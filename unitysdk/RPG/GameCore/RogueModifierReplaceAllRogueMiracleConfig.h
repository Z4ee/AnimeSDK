#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_METHOD_3_1E3FAFE3291C7834_OFFSET UNITYSDK_OFFSET(0x1D165670)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_METHOD_3_7B279B41DBDC25B8_OFFSET UNITYSDK_OFFSET(0x1D165620)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceAllRogueMiracleConfig_TypeDefinitionIndex = 17039;

	class RogueModifierReplaceAllRogueMiracleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B279B41DBDC25B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceAllRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceAllRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_METHOD_3_7B279B41DBDC25B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E3FAFE3291C7834(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceAllRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceAllRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_METHOD_3_1E3FAFE3291C7834_OFFSET))(a1, a2);
		}
	};
}
