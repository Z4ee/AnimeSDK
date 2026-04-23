#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_6_5D14D3ACF4B22197_OFFSET UNITYSDK_OFFSET(0x18CC2650)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_6_B430A9323A7F4822_OFFSET UNITYSDK_OFFSET(0x18CC2870)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC2790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByGroupsConfig_TypeDefinitionIndex = 18661;

	class RogueActGetRogueBuffByGroupsConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5D14D3ACF4B22197(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_6_5D14D3ACF4B22197_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B430A9323A7F4822(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_6_B430A9323A7F4822_OFFSET))(a1, a2);
		}
	};
}
