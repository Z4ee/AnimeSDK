#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshBakerGrouperBehaviour.h"
#include "unitysdk/MB3_MeshBakerGrouper_ClusterType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace DigitalOpus::MB::Core { class GrouperData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERNONE_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1E050080)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERNONE_FILTERINTOGROUPS_OFFSET UNITYSDK_OFFSET(0x1E04FD00)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERNONE_GETCLUSTERTYPE_OFFSET UNITYSDK_OFFSET(0x1E050090)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERNONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0500A0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshBakerGrouperNone_TypeDefinitionIndex = 90569;

	class MB3_MeshBakerGrouperNone : public ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERNONE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* FilterIntoGroups(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* selection, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERNONE_FILTERINTOGROUPS_OFFSET))(this, selection, d);
		}

		::System::Void DrawGizmos(::UnityEngine::Bounds sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERNONE_DRAWGIZMOS_OFFSET))(this, sourceObjectBounds, d);
		}

		::MB3_MeshBakerGrouper_ClusterType GetClusterType()
		{
			return ((::MB3_MeshBakerGrouper_ClusterType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERNONE_GETCLUSTERTYPE_OFFSET))(this);
		}
	};
}
