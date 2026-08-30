#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_METHOD_3_4FECF89A78C2B998_OFFSET UNITYSDK_OFFSET(0x1CFA5E90)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_METHOD_3_9CDDB495CCC8CD08_OFFSET UNITYSDK_OFFSET(0x1CFA5EF0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA5EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_LeapSlam_TypeDefinitionIndex = 15565;

	class ChenLingBattleAbility_LeapSlam : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* MaxJumpDistance; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* MaxSlamRange; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* LeapHeight; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* LeapDuration; // 0x28
		::System::Single StartJumpNormalizedTime; // 0x30
		::System::Single ApplyDamageNormalizedTime; // 0x34
		::System::Single EndSkillNormalizedTime; // 0x38
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* OnSlam; // 0x40
		::RPG::GameCore::ChenLingBattleEffectConfig* OnSlamEffectConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4FECF89A78C2B998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_LeapSlam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_LeapSlam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_METHOD_3_4FECF89A78C2B998_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9CDDB495CCC8CD08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_LeapSlam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_LeapSlam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_METHOD_3_9CDDB495CCC8CD08_OFFSET))(a1, a2);
		}
	};
}
