#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATEAMWORKINCREASEROUNDCONFIG_METHOD_2_0B5822AB1669D0ED_OFFSET UNITYSDK_OFFSET(0x170AC6B0)
#define RPG_GAMECORE_CHIMERATEAMWORKINCREASEROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170AC6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTeamWorkIncreaseRoundConfig_TypeDefinitionIndex = 14583;

	class ChimeraTeamWorkIncreaseRoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASEROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0B5822AB1669D0ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTeamWorkIncreaseRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTeamWorkIncreaseRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASEROUNDCONFIG_METHOD_2_0B5822AB1669D0ED_OFFSET))(a1, a2);
		}
	};
}
