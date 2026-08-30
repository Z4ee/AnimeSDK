#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_INDEXEDMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xE065950)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayMonoPlugin_IndexedMaterial_TypeDefinitionIndex = 70822;

	class Scene_InstanceArrayMonoPlugin_IndexedMaterial : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::UnityEngine::Material* material; // 0x18
		::UnityEngine::Rendering::ShadowCastingMode CastShadows; // 0x20
		::System::Boolean ReceiveShadows; // 0x24
		::System::UInt32 RenderingLayerMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_INDEXEDMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
