#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_METHOD_3_0AA7B3D3B380C957_OFFSET UNITYSDK_OFFSET(0x195EA020)
#define RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_METHOD_3_EF5256252E4FBAB6_OFFSET UNITYSDK_OFFSET(0x195EC430)
#define RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x195EA010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCoreRectTrapSelectorConfig_TypeDefinitionIndex = 17486;

	class CakeRaceCoreRectTrapSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Int32 FrontRange; // 0x10
		::System::Int32 BehindRange; // 0x14
		::System::Int32 LateralRange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF5256252E4FBAB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_METHOD_3_EF5256252E4FBAB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AA7B3D3B380C957(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_METHOD_3_0AA7B3D3B380C957_OFFSET))(a1, a2);
		}
	};
}
