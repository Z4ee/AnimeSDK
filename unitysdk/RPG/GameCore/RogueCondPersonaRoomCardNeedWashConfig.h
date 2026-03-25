#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_METHOD_6_3B15981E1B47D0CE_OFFSET UNITYSDK_OFFSET(0x175EC350)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_METHOD_6_52EFC6BEBADA56E2_OFFSET UNITYSDK_OFFSET(0x175EC510)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175EC450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaRoomCardNeedWashConfig_TypeDefinitionIndex = 18151;

	class RogueCondPersonaRoomCardNeedWashConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3B15981E1B47D0CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomCardNeedWashConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomCardNeedWashConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_METHOD_6_3B15981E1B47D0CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_52EFC6BEBADA56E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomCardNeedWashConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomCardNeedWashConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_METHOD_6_52EFC6BEBADA56E2_OFFSET))(a1, a2);
		}
	};
}
