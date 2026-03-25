#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningAttackType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_74E3B9D9FEBE5823_OFFSET UNITYSDK_OFFSET(0x171F99D0)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_79D6E35856055735_OFFSET UNITYSDK_OFFSET(0x171F9A60)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171F9A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningConfig_TypeDefinitionIndex = 17069;

	class FiveDimLightningConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsLightning; // 0x10
		::RPG::GameCore::FiveDimLightningAttackType LightningAttackType; // 0x14
		::System::Single AttackIntervalTime; // 0x18
		::System::Single AttackPrepareTime; // 0x1C
		::System::Single AttackStartupTime; // 0x20
		::RPG::GameCore::FiveDimTriggerShape* DamageTriggerShape; // 0x28
		::RPG::GameCore::LittleGameEvent* AttackPrepareEvent; // 0x30
		::RPG::GameCore::LittleGameEvent* AttackEvent; // 0x38
		::System::String* HitEvent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74E3B9D9FEBE5823(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_74E3B9D9FEBE5823_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79D6E35856055735(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_79D6E35856055735_OFFSET))(a1, a2);
		}
	};
}
