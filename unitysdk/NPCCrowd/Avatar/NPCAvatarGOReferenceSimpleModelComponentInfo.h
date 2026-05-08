#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCESIMPLEMODELCOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xFC15310)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceSimpleModelComponentInfo_TypeDefinitionIndex = 55419;

	class NPCAvatarGOReferenceSimpleModelComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::Material* simpleGpuMaterial; // 0x10
		::UnityEngine::Material* simpleGpuDitherMaterial; // 0x18
		::UnityEngine::GameObject* simpleGpuGo; // 0x20
		::UnityEngine::MeshFilter* simpleGpuMF; // 0x28
		::UnityEngine::MeshRenderer* simpleGpuMR; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCESIMPLEMODELCOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
