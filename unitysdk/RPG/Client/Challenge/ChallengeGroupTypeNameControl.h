#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPTYPENAMECONTROL_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xB4C1B50)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPTYPENAMECONTROL_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xB4C1B60)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPTYPENAMECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C1CC0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPTYPENAMECONTROL__REFRESH_OFFSET UNITYSDK_OFFSET(0xB4C1BB0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeGroupTypeNameControl_TypeDefinitionIndex = 74074;

	class ChallengeGroupTypeNameControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::ChallengeGroupType _GroupType; // 0x18
		::RPG::Client::LocalizedText* _Text; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPTYPENAMECONTROL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPTYPENAMECONTROL_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPTYPENAMECONTROL_SET_GROUPTYPE_OFFSET))(this, a1);
		}

		::System::Void _Refresh(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPTYPENAMECONTROL__REFRESH_OFFSET))(this, a1);
		}
	};
}
