#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONASTYLECONFIG_METHOD_2_81382D5E25DBB921_OFFSET UNITYSDK_OFFSET(0x1BB681A0)
#define RPG_GAMECORE_ROGUEPERSONASTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB681E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaStyleConfig_TypeDefinitionIndex = 17275;

	class RoguePersonaStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_81382D5E25DBB921(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLECONFIG_METHOD_2_81382D5E25DBB921_OFFSET))(a1, a2);
		}
	};
}
