#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMELINECONTROLGAMECHARACTERCONFIGASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x197B2E20)

namespace RPG::Client
{
	inline static constexpr unsigned int TimelineControlGameCharacterConfigAsset_TypeDefinitionIndex = 60532;

	class TimelineControlGameCharacterConfigAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Transform* prefab; // 0x18
		::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig movementConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMECHARACTERCONFIGASSET__CTOR_OFFSET))(this);
		}
	};
}
