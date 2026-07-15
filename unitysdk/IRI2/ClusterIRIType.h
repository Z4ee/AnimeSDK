#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/ClusterMeshLodInfo.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture2D; }

namespace IRI2
{
	inline static constexpr unsigned int ClusterIRIType_TypeDefinitionIndex = 47809;

	struct alignas(8) ClusterIRIType
	{
		::System::UInt64 MaterialHash; // 0x10
		::Il2CppArray<::UnityEngine::Vector4>* MaterialParamData; // 0x18
		::System::UInt64 TexHashe0; // 0x20
		::System::UInt64 TexHashe1; // 0x28
		::System::UInt64 TexHashe2; // 0x30
		::UnityEngine::Texture2D* Texture0; // 0x38
		::UnityEngine::Texture2D* Texture1; // 0x40
		::UnityEngine::Texture2D* Texture2; // 0x48
		::UnityEngine::Bounds MeshLocalAABB; // 0x50
		::Il2CppArray<::IRI2::ClusterMeshLodInfo>* MeshLodInfos; // 0x68
		::System::UInt32 BeginInMatrixNativeArray; // 0x70
		::System::UInt32 CountInMatrixNativeArray; // 0x74
	};
}
