#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class MB3_AgglomerativeClustering_item_s; }

#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_CLUSTERNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE82420)
#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_CLUSTERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE82380)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_AgglomerativeClustering_ClusterNode_TypeDefinitionIndex = 90615;

	class MB3_AgglomerativeClustering_ClusterNode : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s* leaf; // 0x10
		::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* cha; // 0x18
		::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* chb; // 0x20
		::System::Int32 height; // 0x28
		::System::Single distToMergedCentroid; // 0x2C
		::UnityEngine::Vector3 centroid; // 0x30
		::Il2CppArray<::System::Int32>* leafs; // 0x40
		::System::Int32 idx; // 0x48
		::System::Boolean isUnclustered; // 0x4C

		::System::Void _ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s* ii, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_CLUSTERNODE__CTOR_OFFSET))(this, ii, index);
		}

		::System::Void _ctor_1(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* a, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* b, ::System::Int32 index, ::System::Int32 h, ::System::Single dist, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>* clusters)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*, ::System::Int32, ::System::Int32, ::System::Single, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_CLUSTERNODE__CTOR_1_OFFSET))(this, a, b, index, h, dist, clusters);
		}
	};
}
