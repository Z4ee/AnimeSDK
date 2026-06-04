#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDashBasicConfig; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG_METHOD_3_7E15FBC442BEAF38_OFFSET UNITYSDK_OFFSET(0x19738360)
#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG_METHOD_3_E6D3B3A2514DFB1E_OFFSET UNITYSDK_OFFSET(0x197382F0)
#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19738340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDashOrbConfig_TypeDefinitionIndex = 17668;

	class FiveDimDashOrbConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDashOrb; // 0x10
		::System::Boolean OverrideDashParam; // 0x11
		::RPG::GameCore::FiveDimDashBasicConfig* DashBasicConfigOverride; // 0x18
		::System::Boolean IsAutoDash; // 0x20
		::System::Single DelayDashTime; // 0x24
		::System::Single TriggerRadius; // 0x28
		::RPG::GameCore::LittleGameEvent* EnterEvent; // 0x30
		::RPG::GameCore::LittleGameEvent* TriggerDashEvent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6D3B3A2514DFB1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDashOrbConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDashOrbConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG_METHOD_3_E6D3B3A2514DFB1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7E15FBC442BEAF38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDashOrbConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDashOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG_METHOD_3_7E15FBC442BEAF38_OFFSET))(a1, a2);
		}
	};
}
