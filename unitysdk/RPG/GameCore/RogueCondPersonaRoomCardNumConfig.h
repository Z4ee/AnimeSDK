#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG_METHOD_6_409867653A3B3323_OFFSET UNITYSDK_OFFSET(0x175EC520)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG_METHOD_6_CDC19F845462267F_OFFSET UNITYSDK_OFFSET(0x175EC6E0)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175EC620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaRoomCardNumConfig_TypeDefinitionIndex = 18150;

	class RogueCondPersonaRoomCardNumConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_409867653A3B3323(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG_METHOD_6_409867653A3B3323_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CDC19F845462267F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNUMCONFIG_METHOD_6_CDC19F845462267F_OFFSET))(a1, a2);
		}
	};
}
