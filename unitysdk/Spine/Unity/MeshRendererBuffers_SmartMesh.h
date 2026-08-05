#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace UnityEngine { class Mesh; }

#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C170160)
#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1709B0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C170BD0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshRendererBuffers_SmartMesh_TypeDefinitionIndex = 40174;

	class MeshRendererBuffers_SmartMesh : public ::System::Object
	{
	public:
		::Spine::Unity::SkeletonRendererInstruction* instructionUsed; // 0x10
		::UnityEngine::Mesh* mesh; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_DISPOSE_OFFSET))(this);
		}
	};
}
