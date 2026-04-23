#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NavMeshLinkParams; }
namespace RPG::Client { class NavMeshObstacleParams; }
namespace System { class String; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define RPG_CLIENT_NAVMESHSTATEPARAMSSET__CTOR_OFFSET UNITYSDK_OFFSET(0xAB78190)

namespace RPG::Client
{
	inline static constexpr unsigned int NavMeshStateParamsSet_TypeDefinitionIndex = 63303;

	class NavMeshStateParamsSet : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::Client::NavMeshObstacleParams*>* ObstacleSet; // 0x18
		::Il2CppArray<::RPG::Client::NavMeshLinkParams*>* LinkSet; // 0x20
		::Il2CppArray<::UnityEngine::AI::NavMeshSurface*>* ActiveSurfaces; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATEPARAMSSET__CTOR_OFFSET))(this);
		}
	};
}
