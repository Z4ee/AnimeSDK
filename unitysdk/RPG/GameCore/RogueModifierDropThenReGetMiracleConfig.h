#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_METHOD_3_2B2C70FC97DEBC8E_OFFSET UNITYSDK_OFFSET(0x19B4FA20)
#define RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_METHOD_3_B1E99C0063A88DB7_OFFSET UNITYSDK_OFFSET(0x19B5BC20)
#define RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4F9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierDropThenReGetMiracleConfig_TypeDefinitionIndex = 17099;

	class RogueModifierDropThenReGetMiracleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1E99C0063A88DB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierDropThenReGetMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierDropThenReGetMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_METHOD_3_B1E99C0063A88DB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B2C70FC97DEBC8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierDropThenReGetMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierDropThenReGetMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_METHOD_3_2B2C70FC97DEBC8E_OFFSET))(a1, a2);
		}
	};
}
