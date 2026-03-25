#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_METHOD_6_6CC99B027B14F210_OFFSET UNITYSDK_OFFSET(0x175C44C0)
#define RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_METHOD_6_DDEDAE2FE5AA822D_OFFSET UNITYSDK_OFFSET(0x175C46E0)
#define RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C4600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSpecialActStyleRandomConfig_TypeDefinitionIndex = 18128;

	class RogueActPersonaSpecialActStyleRandomConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6CC99B027B14F210(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSpecialActStyleRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSpecialActStyleRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_METHOD_6_6CC99B027B14F210_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DDEDAE2FE5AA822D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSpecialActStyleRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSpecialActStyleRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_METHOD_6_DDEDAE2FE5AA822D_OFFSET))(a1, a2);
		}
	};
}
