#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_MAPICONAREADATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEDAC10)
#define RPG_CLIENT_MAPICONAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDABF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapIconAreaData_TypeDefinitionIndex = 58852;

	class MapIconAreaData : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 OffsetPosition; // 0x10
		::RPG::GameCore::MinimapAreaType MapAreaType; // 0x18
		::System::Int32 AreaID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONAREADATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONAREADATA_CLEAR_OFFSET))(this);
		}
	};
}
