#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_MAPICONAREADATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B54C8B0)
#define RPG_CLIENT_MAPICONAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54C890)

namespace RPG::Client
{
	inline static constexpr unsigned int MapIconAreaData_TypeDefinitionIndex = 62969;

	class MapIconAreaData : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 OffsetPosition; // 0x10
		::System::Int32 AreaID; // 0x18
		::RPG::GameCore::MinimapAreaType MapAreaType; // 0x1C

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
