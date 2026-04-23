#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace RPG::Client { class GridBasedEventData; }

#define RPG_CLIENT_GRIDBASEDMOVEMENT_MOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4409B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridBasedMovement_MoveEvent_TypeDefinitionIndex = 66836;

	class GridBasedMovement_MoveEvent : public ::UnityEngine::Events::UnityEvent_1<::RPG::Client::GridBasedEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT_MOVEEVENT__CTOR_OFFSET))(this);
		}
	};
}
