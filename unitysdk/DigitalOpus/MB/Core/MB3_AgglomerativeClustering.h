#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class MB3_AgglomerativeClustering_ClusterDistance; }
namespace DigitalOpus::MB::Core { class MB3_AgglomerativeClustering_ClusterNode; }
namespace DigitalOpus::MB::Core { class MB3_AgglomerativeClustering_item_s; }
namespace DigitalOpus::MB::Core { class ProgressUpdateCancelableDelegate; }
namespace DigitalOpus::MB::Core { template <typename T1, typename T2> class PriorityQueue_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_AGGLOMERATE_OFFSET UNITYSDK_OFFSET(0x1ECD6E10)
#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_EUCLIDEAN_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1ECD6DC0)
#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_MAIN_OFFSET UNITYSDK_OFFSET(0x1ECD90A0)
#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_TESTRUN_OFFSET UNITYSDK_OFFSET(0x1ECD8EE0)
#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD9200)
#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING__REFILLPRIORITYQWITHSOME_OFFSET UNITYSDK_OFFSET(0x1ECD8730)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_AgglomerativeClustering_TypeDefinitionIndex = 94547;

	class MB3_AgglomerativeClustering : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_PRIORITY_Q_SIZE = 0x800; // 0x0
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>* items; // 0x10
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>* clusters; // 0x18
		::System::Boolean wasCanceled; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING__CTOR_OFFSET))(this);
		}

		::System::Single euclidean_distance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_EUCLIDEAN_DISTANCE_OFFSET))(this, a, b);
		}

		::System::Boolean agglomerate(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate* progFunc)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_AGGLOMERATE_OFFSET))(this, progFunc);
		}

		::System::Single _RefillPriorityQWithSome(::DigitalOpus::MB::Core::PriorityQueue_2<::System::Single, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>* pq, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>* unclustered, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>* clusters, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate* progFunc)
		{
			return ((::System::Single(*)(::PVOID, ::DigitalOpus::MB::Core::PriorityQueue_2<::System::Single, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING__REFILLPRIORITYQWITHSOME_OFFSET))(this, pq, unclustered, clusters, progFunc);
		}

		::System::Int32 TestRun(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_TESTRUN_OFFSET))(this, gos);
		}

		static ::System::Void Main()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_MAIN_OFFSET))();
		}
	};
}
