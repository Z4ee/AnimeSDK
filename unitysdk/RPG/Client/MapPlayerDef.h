#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityDef.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MAPPLAYERDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x9B04840)

namespace RPG::Client
{
	inline static constexpr unsigned int MapPlayerDef_TypeDefinitionIndex = 50468;

	class MapPlayerDef : public ::RPG::Client::MapEntityDef
	{
	public:
		::System::Void _ctor(::System::UInt32 serverEntityId, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPLAYERDEF__CTOR_OFFSET))(this, serverEntityId, position, rotation);
		}
	};
}
