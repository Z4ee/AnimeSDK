#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONASTYLEGIFTCONFIG_METHOD_2_77313293B8640703_OFFSET UNITYSDK_OFFSET(0x1BB681F0)
#define RPG_GAMECORE_ROGUEPERSONASTYLEGIFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB68230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaStyleGiftConfig_TypeDefinitionIndex = 17276;

	class RoguePersonaStyleGiftConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLEGIFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_77313293B8640703(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaStyleGiftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaStyleGiftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLEGIFTCONFIG_METHOD_2_77313293B8640703_OFFSET))(a1, a2);
		}
	};
}
