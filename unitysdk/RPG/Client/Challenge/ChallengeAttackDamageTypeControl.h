#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xC935FA0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_METHOD_5_884D1F26F1876C89_OFFSET UNITYSDK_OFFSET(0xC936030)
#define RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xC935FE0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC9360C0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeAttackDamageTypeControl_TypeDefinitionIndex = 81410;

	class ChallengeAttackDamageTypeControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::AttackDamageType MDPMKJHENGC; // 0x18
		::UnityEngine::UI::Image* _Icon; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_SET_DAMAGETYPE_OFFSET))(this, a1);
		}

		::System::Void Method_5_884D1F26F1876C89(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_METHOD_5_884D1F26F1876C89_OFFSET))(this, a1);
		}
	};
}
