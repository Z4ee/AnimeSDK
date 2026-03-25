#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_METHOD_3_59A2BB10E7987F57_OFFSET UNITYSDK_OFFSET(0x1761CE20)
#define RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_METHOD_3_DB71C7731B568A2E_OFFSET UNITYSDK_OFFSET(0x1761CEF0)
#define RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1761CEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddRandomPathEchoConfig_TypeDefinitionIndex = 16534;

	class RogueModifierAddRandomPathEchoConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59A2BB10E7987F57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddRandomPathEchoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddRandomPathEchoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_METHOD_3_59A2BB10E7987F57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB71C7731B568A2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddRandomPathEchoConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddRandomPathEchoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_METHOD_3_DB71C7731B568A2E_OFFSET))(a1, a2);
		}
	};
}
