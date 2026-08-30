#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_6_7BE1E8611046DB86_OFFSET UNITYSDK_OFFSET(0x1EE856C0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_6_B430A9323A7F4822_OFFSET UNITYSDK_OFFSET(0x1EE85710)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE85700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByGroupsConfig_TypeDefinitionIndex = 19431;

	class RogueActGetRogueBuffByGroupsConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7BE1E8611046DB86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_6_7BE1E8611046DB86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B430A9323A7F4822(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_6_B430A9323A7F4822_OFFSET))(a1, a2);
		}
	};
}
