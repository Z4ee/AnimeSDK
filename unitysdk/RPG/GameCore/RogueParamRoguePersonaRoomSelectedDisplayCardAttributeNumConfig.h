#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_7A88C473EC4B9199_OFFSET UNITYSDK_OFFSET(0x18D5C820)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_F9F89EEBF2126C5F_OFFSET UNITYSDK_OFFSET(0x18D5CAD0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5C9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig_TypeDefinitionIndex = 18847;

	class RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7A88C473EC4B9199(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_7A88C473EC4B9199_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F9F89EEBF2126C5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_F9F89EEBF2126C5F_OFFSET))(a1, a2);
		}
	};
}
