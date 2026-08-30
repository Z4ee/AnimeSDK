#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_METHOD_6_5FBBA9ABD6F7C0E8_OFFSET UNITYSDK_OFFSET(0x1D3BA4C0)
#define RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_METHOD_6_680914F3AF02906C_OFFSET UNITYSDK_OFFSET(0x1D3BA470)
#define RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BA4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaStatLogConfig_TypeDefinitionIndex = 19556;

	class RogueActPersonaStatLogConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_680914F3AF02906C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaStatLogConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaStatLogConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_METHOD_6_680914F3AF02906C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_5FBBA9ABD6F7C0E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaStatLogConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaStatLogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_METHOD_6_5FBBA9ABD6F7C0E8_OFFSET))(a1, a2);
		}
	};
}
