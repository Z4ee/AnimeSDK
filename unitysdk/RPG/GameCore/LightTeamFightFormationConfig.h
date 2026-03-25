#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class LightTeamFightFormationParams; }

#define RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONCONFIG_METHOD_2_C366154AFFD1A12C_OFFSET UNITYSDK_OFFSET(0x1734D480)
#define RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1734D760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightTeamFightFormationConfig_TypeDefinitionIndex = 15182;

	class LightTeamFightFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LightTeamFightFormationParams* DefaultConfig; // 0x10
		::RPG::GameCore::LightTeamFightFormationParams* ExtraConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>* ServantCustomTeamFormationConfigs; // 0x20
		::System::Int32 NormalMaxLocationCunt; // 0x28
		::System::Int32 MaxLocationCount; // 0x2C
		::RPG::MVector3 ServantUniformFollowOffset; // 0x30
		::System::Single ServantTeamCenterFollowZOffset; // 0x3C
		::System::Single ServantTeamCenterFollowInterval; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C366154AFFD1A12C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LightTeamFightFormationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LightTeamFightFormationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONCONFIG_METHOD_2_C366154AFFD1A12C_OFFSET))(a1, a2);
		}
	};
}
