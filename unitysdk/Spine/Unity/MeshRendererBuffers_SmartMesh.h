#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace UnityEngine { class Mesh; }

#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ACBD150)
#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ACBD600)
#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBD680)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshRendererBuffers_SmartMesh_TypeDefinitionIndex = 41466;

	class MeshRendererBuffers_SmartMesh : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::Spine::Unity::SkeletonRendererInstruction* instructionUsed; // 0x18

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
