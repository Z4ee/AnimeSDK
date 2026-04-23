#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningAttackType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_3F0A697F16072E27_OFFSET UNITYSDK_OFFSET(0x1890A3B0)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_CFFBEED4E51B9B6C_OFFSET UNITYSDK_OFFSET(0x1890A440)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1890A410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningConfig_TypeDefinitionIndex = 17668;

	class FiveDimLightningConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsLightning; // 0x10
		::RPG::GameCore::FiveDimLightningAttackType LightningAttackType; // 0x14
		::System::Single StartAttackIntervalTime; // 0x18
		::System::Single AttackIntervalTime; // 0x1C
		::System::Single AttackPrepareTime; // 0x20
		::System::Single AttackStartupTime; // 0x24
		::System::Single AttackLastTime; // 0x28
		::System::String* WarningEffectPath; // 0x30
		::System::String* AttackEffectPath; // 0x38
		::Il2CppArray<::System::UInt32>* AnchorIDList; // 0x40
		::RPG::MVector3 HitBoxSize; // 0x48
		::System::Boolean IsCheckObstruction; // 0x54
		::RPG::GameCore::LittleGameEvent* AttackPrepareEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* AttackEvent; // 0x60
		::System::String* HitEvent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F0A697F16072E27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_3F0A697F16072E27_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CFFBEED4E51B9B6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_CFFBEED4E51B9B6C_OFFSET))(a1, a2);
		}
	};
}
