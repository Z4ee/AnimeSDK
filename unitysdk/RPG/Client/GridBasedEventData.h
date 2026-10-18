#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define RPG_CLIENT_GRIDBASEDEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0C7FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridBasedEventData_TypeDefinitionIndex = 72534;

	class GridBasedEventData : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int Vector; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDEVENTDATA__CTOR_OFFSET))(this);
		}
	};
}
