#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DarkTeamFightFormationConfig; }
namespace RPG::GameCore { class LightTeamFightFormationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEAMFORMATIONTEMPLATESINGLECONFIG_METHOD_2_FE58A77B6EAB636F_OFFSET UNITYSDK_OFFSET(0x19DDB850)
#define RPG_GAMECORE_TEAMFORMATIONTEMPLATESINGLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDB960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationTemplateSingleConfig_TypeDefinitionIndex = 15756;

	class TeamFormationTemplateSingleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TemplateName; // 0x10
		::RPG::GameCore::LightTeamFightFormationConfig* LightTeamFightFormation; // 0x18
		::RPG::GameCore::DarkTeamFightFormationConfig* DarkTeamFightFormation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONTEMPLATESINGLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FE58A77B6EAB636F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamFormationTemplateSingleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamFormationTemplateSingleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONTEMPLATESINGLECONFIG_METHOD_2_FE58A77B6EAB636F_OFFSET))(a1, a2);
		}
	};
}
