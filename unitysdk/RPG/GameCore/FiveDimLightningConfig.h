#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningAttackType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_548BBFD6A8FE9C42_OFFSET UNITYSDK_OFFSET(0x1D0EFBD0)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_74E3B9D9FEBE5823_OFFSET UNITYSDK_OFFSET(0x1D0EFB70)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0EFBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningConfig_TypeDefinitionIndex = 18388;

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
		::RPG::GameCore::LittleGameEvent* HitPlayerEvent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74E3B9D9FEBE5823(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_74E3B9D9FEBE5823_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_548BBFD6A8FE9C42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_METHOD_3_548BBFD6A8FE9C42_OFFSET))(a1, a2);
		}
	};
}
