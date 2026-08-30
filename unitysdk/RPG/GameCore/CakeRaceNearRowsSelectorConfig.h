#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_METHOD_3_5410C84A0150FA56_OFFSET UNITYSDK_OFFSET(0x1D0FDB90)
#define RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_METHOD_3_E4AE0B99A9C6B1AD_OFFSET UNITYSDK_OFFSET(0x1D103060)
#define RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FDB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceNearRowsSelectorConfig_TypeDefinitionIndex = 18180;

	class CakeRaceNearRowsSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::UInt32 FrontRange; // 0x10
		::System::UInt32 BehindRange; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4AE0B99A9C6B1AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_METHOD_3_E4AE0B99A9C6B1AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5410C84A0150FA56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_METHOD_3_5410C84A0150FA56_OFFSET))(a1, a2);
		}
	};
}
