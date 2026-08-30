#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DashOverrideCalcMode.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDashBasicConfig; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG_METHOD_3_24DACA163CEA8562_OFFSET UNITYSDK_OFFSET(0x1D858400)
#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG_METHOD_3_674729FEE2820738_OFFSET UNITYSDK_OFFSET(0x1D858440)
#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D858430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDashOrbConfig_TypeDefinitionIndex = 18362;

	class FiveDimDashOrbConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDashOrb; // 0x10
		::System::Boolean OverrideDashParam; // 0x11
		::RPG::GameCore::DashOverrideCalcMode OverrideCalcMode; // 0x14
		::RPG::GameCore::FiveDimDashBasicConfig* DashBasicConfigOverride; // 0x18
		::System::Boolean IsUpgradeDash; // 0x20
		::System::Boolean IsAutoDash; // 0x21
		::System::String* SnapAttachPoint; // 0x28
		::System::Single SnapTime; // 0x30
		::System::Single DelayDashTime; // 0x34
		::RPG::GameCore::FiveDimTriggerShape* OrbTrigger; // 0x38
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashOrbAbsorbEffects; // 0x40
		::RPG::GameCore::LittleGameEvent* EnterEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* TriggerDashEvent; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_24DACA163CEA8562(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDashOrbConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDashOrbConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG_METHOD_3_24DACA163CEA8562_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_674729FEE2820738(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDashOrbConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDashOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG_METHOD_3_674729FEE2820738_OFFSET))(a1, a2);
		}
	};
}
