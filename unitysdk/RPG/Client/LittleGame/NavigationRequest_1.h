#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int NavigationRequest_1_TypeDefinitionIndex = 40248;

	template <typename TEntity>
	class NavigationRequest_1 : public ::System::Object
	{
	public:
		TEntity AgentEntity; // 0x0
		::UnityEngine::Vector3 DestinationPosition; // 0x0
		::System::Single StartDistance; // 0x0
		::System::Single DestinationStopDistance; // 0x0
		::System::Single StartMoveDuration; // 0x0
		::System::Action_1<::System::Boolean>* OnStartMoveFinish; // 0x0
		::System::Action_1<::System::Boolean>* OnNavigationFinish; // 0x0
	};
}
