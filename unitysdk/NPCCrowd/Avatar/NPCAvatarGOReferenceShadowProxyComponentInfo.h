#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
template <typename T> class NPCSoftAssetPath_1;

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCESHADOWPROXYCOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11508FB0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceShadowProxyComponentInfo_TypeDefinitionIndex = 42910;

	class NPCAvatarGOReferenceShadowProxyComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::Material* shadowProxyGpuMaterial; // 0x10
		::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* shadowProxyMesh; // 0x18
		::UnityEngine::GameObject* shadowProxySkinnedGo; // 0x20
		::UnityEngine::GameObject* shadowProxyStaticGo; // 0x28
		::UnityEngine::SkinnedMeshRenderer* shadowProxySMR; // 0x30
		::UnityEngine::MeshRenderer* shadowProxyStaticMR; // 0x38
		::UnityEngine::MeshFilter* shadowProxyStaticMF; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCESHADOWPROXYCOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
