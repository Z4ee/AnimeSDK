#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_MAPICONAREADATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xD5F3E10)
#define RPG_CLIENT_MAPICONAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F3DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapIconAreaData_TypeDefinitionIndex = 62969;

	class MapIconAreaData : public ::System::Object
	{
	public:
		::System::Int32 AreaID; // 0x10
		::UnityEngine::Vector2 OffsetPosition; // 0x14
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
