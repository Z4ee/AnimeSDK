#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/StandByStance.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_METHOD_4_5A255CAFF018FC92_OFFSET UNITYSDK_OFFSET(0x19C0BED0)
#define RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_METHOD_4_863092CCA6CA99B8_OFFSET UNITYSDK_OFFSET(0x19C1AC10)
#define RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0BE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_OverrideStandByStance_TypeDefinitionIndex = 18991;

	class ST_Side_OverrideStandByStance : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::StandByStance Stance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_863092CCA6CA99B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_OverrideStandByStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_OverrideStandByStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_METHOD_4_863092CCA6CA99B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5A255CAFF018FC92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_OverrideStandByStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_OverrideStandByStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_METHOD_4_5A255CAFF018FC92_OFFSET))(a1, a2);
		}
	};
}
