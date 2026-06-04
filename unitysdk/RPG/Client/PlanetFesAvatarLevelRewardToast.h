#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesReward; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESAVATARLEVELREWARDTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0xC3FF560)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarLevelRewardToast_TypeDefinitionIndex = 62303;

	class PlanetFesAvatarLevelRewardToast : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesReward* Reward; // 0x10
		::UnityEngine::Transform* Start; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLEVELREWARDTOAST__CTOR_OFFSET))(this);
		}
	};
}
