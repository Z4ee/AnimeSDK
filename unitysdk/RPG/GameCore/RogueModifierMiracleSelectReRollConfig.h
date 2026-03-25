#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_METHOD_3_1EDB9EBDC6629645_OFFSET UNITYSDK_OFFSET(0x17632F50)
#define RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_METHOD_3_20F5143E2C65FAAC_OFFSET UNITYSDK_OFFSET(0x17632E80)
#define RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17632F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierMiracleSelectReRollConfig_TypeDefinitionIndex = 16334;

	class RogueModifierMiracleSelectReRollConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20F5143E2C65FAAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierMiracleSelectReRollConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierMiracleSelectReRollConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_METHOD_3_20F5143E2C65FAAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1EDB9EBDC6629645(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierMiracleSelectReRollConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierMiracleSelectReRollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_METHOD_3_1EDB9EBDC6629645_OFFSET))(a1, a2);
		}
	};
}
