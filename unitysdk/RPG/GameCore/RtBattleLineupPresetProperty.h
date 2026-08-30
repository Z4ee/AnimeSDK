#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLELINEUPPRESETPROPERTY_METHOD_2_369F7384FA700429_OFFSET UNITYSDK_OFFSET(0x1CCD7DE0)
#define RPG_GAMECORE_RTBATTLELINEUPPRESETPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD7E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleLineupPresetProperty_TypeDefinitionIndex = 17834;

	class RtBattleLineupPresetProperty : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPPRESETPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_369F7384FA700429(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleLineupPresetProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleLineupPresetProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPPRESETPROPERTY_METHOD_2_369F7384FA700429_OFFSET))(a1, a2);
		}
	};
}
