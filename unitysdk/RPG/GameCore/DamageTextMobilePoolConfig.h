#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageTextTeamPoolConfig; }

#define RPG_GAMECORE_DAMAGETEXTMOBILEPOOLCONFIG_METHOD_2_035CACA4D1CEAC4F_OFFSET UNITYSDK_OFFSET(0x1968FC40)
#define RPG_GAMECORE_DAMAGETEXTMOBILEPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1968FD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTextMobilePoolConfig_TypeDefinitionIndex = 16274;

	class DamageTextMobilePoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DamageTextTeamPoolConfig* LightTeam; // 0x10
		::RPG::GameCore::DamageTextTeamPoolConfig* NonLightTeam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTMOBILEPOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_035CACA4D1CEAC4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageTextMobilePoolConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageTextMobilePoolConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTMOBILEPOOLCONFIG_METHOD_2_035CACA4D1CEAC4F_OFFSET))(a1, a2);
		}
	};
}
