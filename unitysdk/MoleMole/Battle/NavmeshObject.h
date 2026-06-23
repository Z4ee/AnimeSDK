#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSourceShape.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_BATTLE_NAVMESHOBJECT_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xE949900)
#define MOLEMOLE_BATTLE_NAVMESHOBJECT_METHOD_5_FA3C1CCB55854D63_OFFSET UNITYSDK_OFFSET(0xE949960)
#define MOLEMOLE_BATTLE_NAVMESHOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xE949910)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int NavmeshObject_TypeDefinitionIndex = 70180;

	class NavmeshObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AI::NavMeshBuildSourceShape Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_NAVMESHOBJECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::AI::NavMeshBuildSourceShape get_shape()
		{
			return ((::UnityEngine::AI::NavMeshBuildSourceShape(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_NAVMESHOBJECT_GET_SHAPE_OFFSET))(this);
		}

		::System::Void Method_5_FA3C1CCB55854D63(::UnityEngine::AI::NavMeshBuildSourceShape a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSourceShape))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_NAVMESHOBJECT_METHOD_5_FA3C1CCB55854D63_OFFSET))(this, a1);
		}
	};
}
