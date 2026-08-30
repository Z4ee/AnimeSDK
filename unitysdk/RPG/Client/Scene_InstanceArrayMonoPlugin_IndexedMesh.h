#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_INDEXEDMESH__CTOR_OFFSET UNITYSDK_OFFSET(0xE065960)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayMonoPlugin_IndexedMesh_TypeDefinitionIndex = 70821;

	class Scene_InstanceArrayMonoPlugin_IndexedMesh : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::UnityEngine::Mesh* mesh; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_INDEXEDMESH__CTOR_OFFSET))(this);
		}
	};
}
