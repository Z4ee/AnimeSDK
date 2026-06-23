#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshBakerGrouperBehaviour.h"
#include "unitysdk/MB3_MeshBakerGrouper_ClusterType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace DigitalOpus::MB::Core { class GrouperData; }
namespace DigitalOpus::MB::Core { class ProgressUpdateCancelableDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER_BUILDCLUSTERS_OFFSET UNITYSDK_OFFSET(0x1DA688D0)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1DA698D0)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER_FILTERINTOGROUPS_OFFSET UNITYSDK_OFFSET(0x1DA68510)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER_GETCLUSTERTYPE_OFFSET UNITYSDK_OFFSET(0x1DA69A50)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER__BUILDLISTOFCLUSTERSTODRAW_OFFSET UNITYSDK_OFFSET(0x1DA68F70)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA69A60)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshBakerGrouperCluster_TypeDefinitionIndex = 90572;

	class MB3_MeshBakerGrouperCluster : public ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* FilterIntoGroups(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* selection, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER_FILTERINTOGROUPS_OFFSET))(this, selection, d);
		}

		::System::Void BuildClusters(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate* progFunc, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER_BUILDCLUSTERS_OFFSET))(this, gos, progFunc, d);
		}

		::System::Void _BuildListOfClustersToDraw(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate* progFunc, ::System::Single& smallest, ::System::Single& largest, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*, ::System::Single&, ::System::Single&, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER__BUILDLISTOFCLUSTERSTODRAW_OFFSET))(this, progFunc, smallest, largest, d);
		}

		::System::Void DrawGizmos(::UnityEngine::Bounds sceneObjectBounds, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER_DRAWGIZMOS_OFFSET))(this, sceneObjectBounds, d);
		}

		::MB3_MeshBakerGrouper_ClusterType GetClusterType()
		{
			return ((::MB3_MeshBakerGrouper_ClusterType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER_GETCLUSTERTYPE_OFFSET))(this);
		}
	};
}
