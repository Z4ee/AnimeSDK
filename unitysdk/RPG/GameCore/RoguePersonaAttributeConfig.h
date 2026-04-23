#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAATTRIBUTECONFIG_METHOD_2_9E458FFBBC73863C_OFFSET UNITYSDK_OFFSET(0x18D65320)
#define RPG_GAMECORE_ROGUEPERSONAATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D65360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaAttributeConfig_TypeDefinitionIndex = 17099;

	class RoguePersonaAttributeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9E458FFBBC73863C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAATTRIBUTECONFIG_METHOD_2_9E458FFBBC73863C_OFFSET))(a1, a2);
		}
	};
}
