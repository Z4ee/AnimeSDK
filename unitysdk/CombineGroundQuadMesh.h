#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UV2ProjectAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define COMBINEGROUNDQUADMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CB080)

inline static constexpr unsigned int CombineGroundQuadMesh_TypeDefinitionIndex = 27842;

class CombineGroundQuadMesh : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean combineVertices; // 0x18
	::System::Boolean removeSideAndDownFace; // 0x19
	::System::Boolean removeDownFace; // 0x1A
	::System::Boolean disableGroundShadow; // 0x1B
	::System::Boolean regenerateNormal; // 0x1C
	::System::Single minGap; // 0x20
	::UV2ProjectAxis uv2ProjectAxis; // 0x24
	::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* renderers; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBINEGROUNDQUADMESH__CTOR_OFFSET))(this);
	}
};
