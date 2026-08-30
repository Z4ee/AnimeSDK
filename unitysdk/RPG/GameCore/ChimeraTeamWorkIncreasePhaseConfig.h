#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATEAMWORKINCREASEPHASECONFIG_METHOD_2_30EE0AFD3EBEEAE2_OFFSET UNITYSDK_OFFSET(0x1E3420D0)
#define RPG_GAMECORE_CHIMERATEAMWORKINCREASEPHASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E342110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTeamWorkIncreasePhaseConfig_TypeDefinitionIndex = 15718;

	class ChimeraTeamWorkIncreasePhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASEPHASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_30EE0AFD3EBEEAE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTeamWorkIncreasePhaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTeamWorkIncreasePhaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASEPHASECONFIG_METHOD_2_30EE0AFD3EBEEAE2_OFFSET))(a1, a2);
		}
	};
}
