#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoneWeight.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define DIGITALOPUS_MB_CORE_MB3_COPYBONEWEIGHTS_COPYBONEWEIGHTSFROMSEAMMESHTOOTHERMESHES_OFFSET UNITYSDK_OFFSET(0x1BAF8F90)
#define DIGITALOPUS_MB_CORE_MB3_COPYBONEWEIGHTS_REMAPBONEWEIGHTINDEXES_OFFSET UNITYSDK_OFFSET(0x1BAFAF60)
#define DIGITALOPUS_MB_CORE_MB3_COPYBONEWEIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFB1E0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_CopyBoneWeights_TypeDefinitionIndex = 85044;

	class MB3_CopyBoneWeights : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_COPYBONEWEIGHTS__CTOR_OFFSET))(this);
		}

		static ::System::Void CopyBoneWeightsFromSeamMeshToOtherMeshes(::System::Single radius, ::UnityEngine::Mesh* seamMesh, ::Il2CppArray<::UnityEngine::Mesh*>* targetMeshes, ::Il2CppArray<::Il2CppArray<::UnityEngine::Transform*>*>* newBonesForSMRs, ::Il2CppArray<::UnityEngine::Transform*>* seamMeshBones, ::Il2CppArray<::Il2CppArray<::UnityEngine::Transform*>*>* targMeshBones)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::Il2CppArray<::UnityEngine::Transform*>*>*, ::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::Il2CppArray<::UnityEngine::Transform*>*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_COPYBONEWEIGHTS_COPYBONEWEIGHTSFROMSEAMMESHTOOTHERMESHES_OFFSET))(radius, seamMesh, targetMeshes, newBonesForSMRs, seamMeshBones, targMeshBones);
		}

		static ::System::Void RemapBoneWeightIndexes(::System::String* nm, ::UnityEngine::BoneWeight& seamMeshBw, ::Il2CppArray<::System::Int32>* map_seamMeshIdx2targMeshIdx, ::Il2CppArray<::UnityEngine::Transform*>* targBones, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* extraBones, ::Il2CppArray<::UnityEngine::Transform*>* seamBones)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::BoneWeight&, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Transform*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_COPYBONEWEIGHTS_REMAPBONEWEIGHTINDEXES_OFFSET))(nm, seamMeshBw, map_seamMeshIdx2targMeshIdx, targBones, extraBones, seamBones);
		}
	};
}
