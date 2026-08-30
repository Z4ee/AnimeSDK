#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_METHOD_2_24AB87C09051853D_OFFSET UNITYSDK_OFFSET(0x1CFAB120)
#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_METHOD_2_FB88A8E0017E2709_OFFSET UNITYSDK_OFFSET(0x1CFA5400)
#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAB110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleLaserSplitConfig_TypeDefinitionIndex = 15569;

	class ChenLingBattleLaserSplitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ScaleMultiplier; // 0x10
		::System::Single DamageMultiplier; // 0x14
		::System::String* FireAttachPointName; // 0x18
		::RPG::GameCore::ChenLingBattleTriggerCallback* OnHitCallback; // 0x20
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* EffectTiers; // 0x28
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* HitEffectTiers; // 0x30
		::System::UInt32 TotalLines; // 0x38
		::System::Single Radius; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FB88A8E0017E2709(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleLaserSplitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleLaserSplitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_METHOD_2_FB88A8E0017E2709_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_24AB87C09051853D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleLaserSplitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleLaserSplitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_METHOD_2_24AB87C09051853D_OFFSET))(a1, a2);
		}
	};
}
