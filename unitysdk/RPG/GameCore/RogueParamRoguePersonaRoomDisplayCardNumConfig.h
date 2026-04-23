#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_METHOD_6_24F4C206243944B4_OFFSET UNITYSDK_OFFSET(0x18D5C810)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_METHOD_6_9E45BE671DD4333A_OFFSET UNITYSDK_OFFSET(0x18D5C560)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5C6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomDisplayCardNumConfig_TypeDefinitionIndex = 18845;

	class RogueParamRoguePersonaRoomDisplayCardNumConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9E45BE671DD4333A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_METHOD_6_9E45BE671DD4333A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_24F4C206243944B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_METHOD_6_24F4C206243944B4_OFFSET))(a1, a2);
		}
	};
}
