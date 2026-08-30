#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_634242A7DF8507DB_OFFSET UNITYSDK_OFFSET(0x1D40D560)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_F9F89EEBF2126C5F_OFFSET UNITYSDK_OFFSET(0x1D40D5B0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40D5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig_TypeDefinitionIndex = 19629;

	class RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_634242A7DF8507DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_634242A7DF8507DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F9F89EEBF2126C5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_F9F89EEBF2126C5F_OFFSET))(a1, a2);
		}
	};
}
