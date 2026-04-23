#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Terrain; }

#define JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_AWAKE_OFFSET UNITYSDK_OFFSET(0x8CDA3E0)
#define JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_SETNEIGHBOURS_OFFSET UNITYSDK_OFFSET(0x8CDA4B0)
#define JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDA4D0)

namespace JesseStiller::TerrainFormerExtension
{
	inline static constexpr unsigned int TerrainSetNeighbours_TypeDefinitionIndex = 40987;

	class TerrainSetNeighbours : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Terrain* leftTerrain; // 0x18
		::UnityEngine::Terrain* topTerrain; // 0x20
		::UnityEngine::Terrain* rightTerrain; // 0x28
		::UnityEngine::Terrain* bottomTerrain; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_AWAKE_OFFSET))(this);
		}

		::System::Void SetNeighbours(::UnityEngine::Terrain* leftTerrain, ::UnityEngine::Terrain* topTerrain, ::UnityEngine::Terrain* rightTerrain, ::UnityEngine::Terrain* bottomTerrain)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_SETNEIGHBOURS_OFFSET))(this, leftTerrain, topTerrain, rightTerrain, bottomTerrain);
		}
	};
}
