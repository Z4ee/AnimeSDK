#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace UnityEngine { class Mesh; }

#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AD21FE0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD227D0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD229F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshRendererBuffers_SmartMesh_TypeDefinitionIndex = 39509;

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
