#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshObstacleShape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_NAVMESHOBSTACLEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1826FEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int NavMeshObstacleParams_TypeDefinitionIndex = 68604;

	class NavMeshObstacleParams : public ::System::Object
	{
	public:
		::UnityEngine::AI::NavMeshObstacleShape Shape; // 0x10
		::UnityEngine::Vector3 Center; // 0x14
		::UnityEngine::Quaternion Rotation; // 0x20
		::UnityEngine::Vector3 Size; // 0x30
		::System::Single Radius; // 0x3C
		::System::Single Height; // 0x40
		::System::Boolean Carve; // 0x44
		::System::Single MoveThreshold; // 0x48
		::System::Single TimeToStationary; // 0x4C
		::System::Boolean CarveOnlyStationary; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHOBSTACLEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
