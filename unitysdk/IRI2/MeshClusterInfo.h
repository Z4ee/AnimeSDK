#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/PackVertexType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define IRI2_MESHCLUSTERINFO_METHOD_2_55CDF35EA89BC4E5_OFFSET UNITYSDK_OFFSET(0x39577F0)
#define IRI2_MESHCLUSTERINFO_METHOD_2_A311ABF890C2D610_OFFSET UNITYSDK_OFFSET(0x39577E0)
#define IRI2_MESHCLUSTERINFO_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x39577C0)

namespace IRI2
{
	inline static constexpr unsigned int MeshClusterInfo_TypeDefinitionIndex = 47807;

	struct alignas(8) MeshClusterInfo
	{
		::Il2CppArray<::System::UInt32>* ClusterIndexData; // 0x10
		::Il2CppArray<::IRI2::PackVertexType>* ClusterVertexData; // 0x18
		::UnityEngine::Bounds ClusterAABB; // 0x20
		::UnityEngine::Vector4 ClusterConeNormal; // 0x38

		::System::Int32 Method_2_F5599B7DA8E7E53C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI2_MESHCLUSTERINFO_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
		}

		::System::Void Method_2_A311ABF890C2D610(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + IRI2_MESHCLUSTERINFO_METHOD_2_A311ABF890C2D610_OFFSET))(this, a1);
		}

		/*
		::System::Void Method_2_55CDF35EA89BC4E5(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>&, ::System::Int32))((::PBYTE)hIl2Cpp + IRI2_MESHCLUSTERINFO_METHOD_2_55CDF35EA89BC4E5_OFFSET))(this, a1, a2);
		}
		*/
	};
}
