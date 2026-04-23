#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define RPG_CLIENT_GRIDBASEDEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA43FD20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridBasedEventData_TypeDefinitionIndex = 66834;

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
