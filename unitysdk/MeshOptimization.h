#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshOptimization_EMeshOptimizeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class OcclusionArea; }

#define MESHOPTIMIZATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19B6D860)
#define MESHOPTIMIZATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19B6D590)
#define MESHOPTIMIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B6DB30)

inline static constexpr unsigned int MeshOptimization_TypeDefinitionIndex = 29602;

class MeshOptimization : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::OcclusionArea* m_OcclusionArea; // 0x18
	::UnityEngine::Mesh* m_RawMesh; // 0x20
	::UnityEngine::Mesh* m_OptimizedMesh; // 0x28
	::MeshOptimization_EMeshOptimizeType meshOptimizeType; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHOPTIMIZATION__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHOPTIMIZATION_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHOPTIMIZATION_ONDESTROY_OFFSET))(this);
	}
};
