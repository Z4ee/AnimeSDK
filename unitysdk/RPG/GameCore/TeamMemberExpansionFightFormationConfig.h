#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMMEMBEREXPANSIONFIGHTFORMATIONCONFIG_METHOD_2_3A7BF3A5C6EC57B5_OFFSET UNITYSDK_OFFSET(0x17897100)
#define RPG_GAMECORE_TEAMMEMBEREXPANSIONFIGHTFORMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17897440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamMemberExpansionFightFormationConfig_TypeDefinitionIndex = 15183;

	class TeamMemberExpansionFightFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 LightMaxTeamMember; // 0x10
		::System::Int32 DarkMaxTeamMember; // 0x14
		::System::Int32 FrontGridNum; // 0x18
		::System::Int32 BackGridNum; // 0x1C
		::System::Single GridMinInterval; // 0x20
		::System::Single GridMaxInterval; // 0x24
		::System::Single BackRowZOffset; // 0x28
		::System::Single BackRowXOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMMEMBEREXPANSIONFIGHTFORMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3A7BF3A5C6EC57B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamMemberExpansionFightFormationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamMemberExpansionFightFormationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMMEMBEREXPANSIONFIGHTFORMATIONCONFIG_METHOD_2_3A7BF3A5C6EC57B5_OFFSET))(a1, a2);
		}
	};
}
