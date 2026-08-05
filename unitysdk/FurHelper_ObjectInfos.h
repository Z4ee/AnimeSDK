#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }

inline static constexpr unsigned int FurHelper_ObjectInfos_TypeDefinitionIndex = 27704;

struct alignas(8) FurHelper_ObjectInfos
{
	::UnityEngine::Renderer* renderer; // 0x10
	::UnityEngine::Mesh* mesh; // 0x18
	::System::Int32 furLayersNum; // 0x20
	::UnityEngine::MaterialPropertyBlock* matPropBlock; // 0x28
	::UnityEngine::Material* furMat; // 0x30
	::System::Int32 furMatIdx; // 0x38
	::System::Single distanceToCamera; // 0x3C
	::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x40
	::System::Boolean isOddScale; // 0x80
};
