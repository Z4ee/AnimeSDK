#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CACHEDSUBMESHCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9270F0)
#define CACHEDSUBMESHCOUNT_RESET_OFFSET UNITYSDK_OFFSET(0x927110)
#define CACHEDSUBMESHCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x927100)

inline static constexpr unsigned int CachedSubMeshCount_TypeDefinitionIndex = 26935;

struct alignas(8) CachedSubMeshCount
{
	::System::Boolean useSkinnedMesh; // 0x10
	::UnityEngine::MeshFilter* _meshFilter; // 0x18
	::UnityEngine::SkinnedMeshRenderer* _skinnedMeshRenderer; // 0x20
	::UnityEngine::Mesh* _cachedMesh; // 0x28
	::System::Int32 _cachedSubMeshCount; // 0x30

	::System::Void _ctor(::UnityEngine::Renderer* renderer)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CACHEDSUBMESHCOUNT__CTOR_OFFSET))(this, renderer);
	}

	::System::Int32 get_Value()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDSUBMESHCOUNT_GET_VALUE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDSUBMESHCOUNT_RESET_OFFSET))(this);
	}
};
