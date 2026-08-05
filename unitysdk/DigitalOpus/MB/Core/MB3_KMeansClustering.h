#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class MB3_KMeansClustering_DataPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_ANYAREEMPTY_OFFSET UNITYSDK_OFFSET(0x1F7AA0B0)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_CLUSTER_OFFSET UNITYSDK_OFFSET(0x1F7AAA60)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_ELUCIDANDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F7AA5B0)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_GETCLUSTER_OFFSET UNITYSDK_OFFSET(0x1F7AA6D0)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_INITIALIZECENTROIDS_OFFSET UNITYSDK_OFFSET(0x1F7A9D50)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_MININDEX_OFFSET UNITYSDK_OFFSET(0x1F7AA610)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_UPDATECLUSTERMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x1F7AA1F0)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_UPDATEDATAPOINTMEANS_OFFSET UNITYSDK_OFFSET(0x1F7A9E30)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A99D0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_KMeansClustering_TypeDefinitionIndex = 94552;

	class MB3_KMeansClustering : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>* _normalizedDataToCluster; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* _clusters; // 0x18
		::System::Int32 _numberOfClusters; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos, ::System::Int32 numClusters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING__CTOR_OFFSET))(this, gos, numClusters);
		}

		::System::Void InitializeCentroids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_INITIALIZECENTROIDS_OFFSET))(this);
		}

		::System::Boolean UpdateDataPointMeans(::System::Boolean force)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_UPDATEDATAPOINTMEANS_OFFSET))(this, force);
		}

		::System::Boolean AnyAreEmpty(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_ANYAREEMPTY_OFFSET))(this, data);
		}

		::System::Boolean UpdateClusterMembership()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_UPDATECLUSTERMEMBERSHIP_OFFSET))(this);
		}

		::System::Single ElucidanDistance(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint* dataPoint, ::UnityEngine::Vector3 mean)
		{
			return ((::System::Single(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_ELUCIDANDISTANCE_OFFSET))(this, dataPoint, mean);
		}

		::System::Int32 MinIndex(::Il2CppArray<::System::Single>* distances)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_MININDEX_OFFSET))(this, distances);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetCluster(::System::Int32 idx, ::UnityEngine::Vector3& mean, ::System::Single& size)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_GETCLUSTER_OFFSET))(this, idx, mean, size);
		}

		::System::Void Cluster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_CLUSTER_OFFSET))(this);
		}
	};
}
