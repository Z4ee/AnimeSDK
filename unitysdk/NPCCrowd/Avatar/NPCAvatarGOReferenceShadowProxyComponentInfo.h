#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCESHADOWPROXYCOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11943820)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceShadowProxyComponentInfo_TypeDefinitionIndex = 63863;

	class NPCAvatarGOReferenceShadowProxyComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* shadowProxySMR; // 0x10
		::UnityEngine::GameObject* shadowProxyStaticGo; // 0x18
		::UnityEngine::MeshFilter* shadowProxyStaticMF; // 0x20
		::UnityEngine::Material* shadowProxyGpuMaterial; // 0x28
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* shadowProxyMesh; // 0x30
		::UnityEngine::MeshRenderer* shadowProxyStaticMR; // 0x38
		::UnityEngine::GameObject* shadowProxySkinnedGo; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCESHADOWPROXYCOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
