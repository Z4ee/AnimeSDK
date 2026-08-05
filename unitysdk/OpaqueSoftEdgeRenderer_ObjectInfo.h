#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define OPAQUESOFTEDGERENDERER_OBJECTINFO_POPUPDRAWCALL_OFFSET UNITYSDK_OFFSET(0x1CEDFDA0)
#define OPAQUESOFTEDGERENDERER_OBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE00F0)

inline static constexpr unsigned int OpaqueSoftEdgeRenderer_ObjectInfo_TypeDefinitionIndex = 27701;

class OpaqueSoftEdgeRenderer_ObjectInfo : public ::System::Object
{
public:
	::UnityEngine::MaterialPropertyBlock* propertyBlock; // 0x10
	::UnityEngine::Mesh* mesh; // 0x18
	::UnityEngine::Material* material; // 0x20
	::UnityEngine::MeshRenderer* meshRenderer; // 0x28
	::System::Int32 subMeshID; // 0x30
	::System::Int32 softEdgePass; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_OBJECTINFO__CTOR_OFFSET))(this);
	}

	::System::Void PopUpDrawCall(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_OBJECTINFO_POPUPDRAWCALL_OFFSET))(this, cmd);
	}
};
