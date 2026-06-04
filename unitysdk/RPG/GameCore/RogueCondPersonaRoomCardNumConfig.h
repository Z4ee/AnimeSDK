#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG_METHOD_6_1188DD87178E6539_OFFSET UNITYSDK_OFFSET(0x19B1D590)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG_METHOD_6_CDC19F845462267F_OFFSET UNITYSDK_OFFSET(0x19B1D840)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1D710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaRoomCardNumConfig_TypeDefinitionIndex = 18762;

	class RogueCondPersonaRoomCardNumConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1188DD87178E6539(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG_METHOD_6_1188DD87178E6539_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CDC19F845462267F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG_METHOD_6_CDC19F845462267F_OFFSET))(a1, a2);
		}
	};
}
