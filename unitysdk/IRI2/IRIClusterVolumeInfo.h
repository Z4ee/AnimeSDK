#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/ClusterIRIType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Transform; }

namespace IRI2
{
	inline static constexpr unsigned int IRIClusterVolumeInfo_TypeDefinitionIndex = 47810;

	struct alignas(8) IRIClusterVolumeInfo
	{
		::UnityEngine::Transform* TransformComp; // 0x10
		::UnityEngine::Bounds LocalAABB; // 0x18
		::System::UInt32 MatrixNativeArrayCount; // 0x30
		::System::Void* MatrixNativeArrayPtr; // 0x38
		::Il2CppArray<::IRI2::ClusterIRIType>* Types; // 0x40
	};
}
