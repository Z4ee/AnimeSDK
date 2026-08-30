#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_METHOD_6_1D7DD82EB111B90A_OFFSET UNITYSDK_OFFSET(0x1D918C60)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_METHOD_6_83F3A7F3DFED8F66_OFFSET UNITYSDK_OFFSET(0x1D918CB0)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D918CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaRoomIsSuperConfig_TypeDefinitionIndex = 19578;

	class RogueCondPersonaRoomIsSuperConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1D7DD82EB111B90A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_METHOD_6_1D7DD82EB111B90A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_83F3A7F3DFED8F66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_METHOD_6_83F3A7F3DFED8F66_OFFSET))(a1, a2);
		}
	};
}
