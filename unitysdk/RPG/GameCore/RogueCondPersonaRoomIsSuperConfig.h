#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_METHOD_6_83F3A7F3DFED8F66_OFFSET UNITYSDK_OFFSET(0x175EC8B0)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_METHOD_6_C051934CFD1C587A_OFFSET UNITYSDK_OFFSET(0x175EC6F0)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175EC7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaRoomIsSuperConfig_TypeDefinitionIndex = 18152;

	class RogueCondPersonaRoomIsSuperConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C051934CFD1C587A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_METHOD_6_C051934CFD1C587A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_83F3A7F3DFED8F66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_METHOD_6_83F3A7F3DFED8F66_OFFSET))(a1, a2);
		}
	};
}
