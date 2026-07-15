#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_NOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x127DBDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHeartDialToastTask_NotifyParam_TypeDefinitionIndex = 50848;

	class ShowHeartDialToastTask_NotifyParam : public ::System::Object
	{
	public:
		::RPG::GameCore::HeartDialStepType CurrentStepType; // 0x10
		::RPG::Client::TextID NpcNameTextID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_NOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
