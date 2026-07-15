#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET_METHOD_2_801A160A54802B02_OFFSET UNITYSDK_OFFSET(0x1BB88B00)
#define RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB88B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleLineupEquipPreset_TypeDefinitionIndex = 17318;

	class RtBattleLineupEquipPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_801A160A54802B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleLineupEquipPreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleLineupEquipPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET_METHOD_2_801A160A54802B02_OFFSET))(a1, a2);
		}
	};
}
