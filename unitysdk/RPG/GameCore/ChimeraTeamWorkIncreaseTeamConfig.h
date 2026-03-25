#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATEAMWORKINCREASETEAMCONFIG_METHOD_2_C4F2A240F02A8EE6_OFFSET UNITYSDK_OFFSET(0x170AC700)
#define RPG_GAMECORE_CHIMERATEAMWORKINCREASETEAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170AC740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTeamWorkIncreaseTeamConfig_TypeDefinitionIndex = 14582;

	class ChimeraTeamWorkIncreaseTeamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASETEAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C4F2A240F02A8EE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTeamWorkIncreaseTeamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTeamWorkIncreaseTeamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASETEAMCONFIG_METHOD_2_C4F2A240F02A8EE6_OFFSET))(a1, a2);
		}
	};
}
